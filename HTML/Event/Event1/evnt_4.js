let mod1=document.getElementById("Mode");
let body=document.body; //get the Body element to change background Color.
let currMode="light";
mod1.addEventListener("click",() =>
{
    if(currMode==="light")
    {
        currMode="dark";
        body.classList.add("dark");
        body.classList.remove("light");
        //document.body.style.backgroundColor="Black";//Activating dark Mode.

    }
    else{
        currMode="light";
       // document.body.style.backgroundColor="white"; //Activating the Light Mode.
       body.classList.add("light");
       body.classList.remove("dark");
    }
    console.log(currMode,"Mode is Activated");
})