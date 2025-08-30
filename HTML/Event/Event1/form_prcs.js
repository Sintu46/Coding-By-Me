document.addEventListener('DOMContentLoaded', () => {
    const form = document.getElementById("myform");
    if (!form) {
        console.error('Form with id "myform" not found.');
        return;
    }
    form.addEventListener('submit', (evt) => {
        evt.preventDefault();
        const formData = new FormData(form);
        const name = formData.get('name');
        // Validate form data
        if (!name || name.trim() === '') {
            alert('Please Enter Your name');
            return;
        }
        // Send data to server
        fetch('/submit', {
            method: 'POST',
            body: formData,
        })
            .then((response) => {
                if (!response.ok) {
                    throw new Error('Network response was not ok');
                }
                return response.json();
            })
            .then((data) => {
                console.log(data);
                alert('Form submitted successfully!');
            })
            .catch((error) => {
                console.error('Fetch error:', error);
                alert('There was an error submitting the form.');
            });
    });
});