const canvas = document.getElementById('pong');
const ctx = canvas.getContext('2d');

const WIDTH = canvas.width;
const HEIGHT = canvas.height;

const PADDLE_WIDTH = 10, PADDLE_HEIGHT = 100;
const BALL_SIZE = 15;
const PADDLE_SPEED = 6;
const BALL_SPEED = 5;

let playerScore = 0, computerScore = 0;

// Paddle objects
const player = {
  x: 10,
  y: HEIGHT / 2 - PADDLE_HEIGHT / 2,
  dy: 0
};

const computer = {
  x: WIDTH - PADDLE_WIDTH - 10,
  y: HEIGHT / 2 - PADDLE_HEIGHT / 2,
  dy: 0
};

// Ball object
const ball = {
  x: WIDTH / 2 - BALL_SIZE / 2,
  y: HEIGHT / 2 - BALL_SIZE / 2,
  dx: BALL_SPEED * (Math.random() > 0.5 ? 1 : -1),
  dy: BALL_SPEED * (Math.random() * 2 - 1)
};

function resetBall() {
  ball.x = WIDTH / 2 - BALL_SIZE / 2;
  ball.y = HEIGHT / 2 - BALL_SIZE / 2;
  ball.dx = BALL_SPEED * (Math.random() > 0.5 ? 1 : -1);
  ball.dy = BALL_SPEED * (Math.random() * 2 - 1);
}

function drawRect(x, y, w, h, color = "#fff") {
  ctx.fillStyle = color;
  ctx.fillRect(x, y, w, h);
}

function drawBall() {
  ctx.fillStyle = "#fff";
  ctx.fillRect(ball.x, ball.y, BALL_SIZE, BALL_SIZE);
}

function draw() {
  ctx.clearRect(0, 0, WIDTH, HEIGHT);

  // Draw paddles
  drawRect(player.x, player.y, PADDLE_WIDTH, PADDLE_HEIGHT, "#0ff");
  drawRect(computer.x, computer.y, PADDLE_WIDTH, PADDLE_HEIGHT, "#ff0");

  // Draw ball
  drawBall();
}

function update() {
  // Move player
  player.y += player.dy;
  // Clamp player paddle within bounds
  if (player.y < 0) player.y = 0;
  if (player.y + PADDLE_HEIGHT > HEIGHT) player.y = HEIGHT - PADDLE_HEIGHT;

  // Move computer paddle (simple AI)
  // Computer tries to follow the ball with some delay
  let compCenter = computer.y + PADDLE_HEIGHT / 2;
  if (compCenter < ball.y) computer.dy = PADDLE_SPEED * 0.7;
  else if (compCenter > ball.y + BALL_SIZE) computer.dy = -PADDLE_SPEED * 0.7;
  else computer.dy = 0;
  computer.y += computer.dy;
  // Clamp
  if (computer.y < 0) computer.y = 0;
  if (computer.y + PADDLE_HEIGHT > HEIGHT) computer.y = HEIGHT - PADDLE_HEIGHT;

  // Move ball
  ball.x += ball.dx;
  ball.y += ball.dy;

  // Ball collision with top/bottom
  if (ball.y < 0) {
    ball.y = 0;
    ball.dy *= -1;
  }
  if (ball.y + BALL_SIZE > HEIGHT) {
    ball.y = HEIGHT - BALL_SIZE;
    ball.dy *= -1;
  }

  // Ball collision with left paddle (player)
  if (
    ball.x <= player.x + PADDLE_WIDTH &&
    ball.x >= player.x &&
    ball.y + BALL_SIZE >= player.y &&
    ball.y <= player.y + PADDLE_HEIGHT
  ) {
    ball.x = player.x + PADDLE_WIDTH;
    ball.dx *= -1;
    // Add some effect based on where the ball hits the paddle
    let hitPos = (ball.y + BALL_SIZE / 2) - (player.y + PADDLE_HEIGHT / 2);
    ball.dy = hitPos * 0.25;
  }

  // Ball collision with right paddle (computer)
  if (
    ball.x + BALL_SIZE >= computer.x &&
    ball.x + BALL_SIZE <= computer.x + PADDLE_WIDTH &&
    ball.y + BALL_SIZE >= computer.y &&
    ball.y <= computer.y + PADDLE_HEIGHT
  ) {
    ball.x = computer.x - BALL_SIZE;
    ball.dx *= -1;
    // Add some effect based on where the ball hits the paddle
    let hitPos = (ball.y + BALL_SIZE / 2) - (computer.y + PADDLE_HEIGHT / 2);
    ball.dy = hitPos * 0.25;
  }

  // Ball goes out left side (computer scores)
  if (ball.x < 0) {
    computerScore++;
    updateScore();
    resetBall();
  }
  // Ball goes out right side (player scores)
  if (ball.x + BALL_SIZE > WIDTH) {
    playerScore++;
    updateScore();
    resetBall();
  }
}

function updateScore() {
  document.getElementById('player-score').textContent = playerScore;
  document.getElementById('computer-score').textContent = computerScore;
}

function gameLoop() {
  update();
  draw();
  requestAnimationFrame(gameLoop);
}

// Player controls: mouse and arrow keys
canvas.addEventListener('mousemove', function(e) {
  const rect = canvas.getBoundingClientRect();
  let mouseY = e.clientY - rect.top;
  player.y = mouseY - PADDLE_HEIGHT / 2;
  // Clamp
  if (player.y < 0) player.y = 0;
  if (player.y + PADDLE_HEIGHT > HEIGHT) player.y = HEIGHT - PADDLE_HEIGHT;
});

document.addEventListener('keydown', function(e) {
  if (e.key === 'ArrowUp') player.dy = -PADDLE_SPEED;
  else if (e.key === 'ArrowDown') player.dy = PADDLE_SPEED;
});

document.addEventListener('keyup', function(e) {
  if (e.key === 'ArrowUp' || e.key === 'ArrowDown') player.dy = 0;
});

// Initialize
updateScore();
gameLoop();