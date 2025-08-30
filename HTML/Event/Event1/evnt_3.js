document.addEventListener("DOMContentLoaded", function() {
let Jav=document.getElementById('Jav');
let Jav2=document.getElementById('Jav2');
let Jav3=document.getElementById('Jav3');
let Myform=document.getElementById("Myform");
let div=document.getElementById("otp");

Jav.addEventListener ("click",() =>{
    console.log("Event Listener is Add in Jav");
});
//Defining the Event Object For the Button
Jav2.addEventListener("mouseover",(evt) =>{
    console.log("Jav2 is Executedwhen mouse is over.")
    console.log("Event Type:",evt.type ,"TargetElement:",evt.target);
    console.log("X-Coordinate:",evt.clientX,"Y-Coordinate:",evt.clientY);
});

Jav3.addEventListener("dblclick",()=>{
    console.log("Jav3 triggered by double click.")
})

//Defining the Event Object For the  Form
Myform.addEventListener('submit',(evt)=>
{
    console.log("Form is Submitted ");alert('Submit Successful');
    console.log("Event Type:",evt.type ,"TargetElement:",evt.target);
})
//Defining the div .
/* div.addEventListener("keydown",(evt) =>{
//     console.log("Key is down.");alert('key is down');
//     console.log("Event Type:",evt.type ,"TargetElement:",evt.target);
// });
// div.addEventListener("keyup",() =>{
//     alert("Key is Up");
// });
*/
let field1=document.getElementById("inputField");
field1.addEventListener("keydown",(evt) =>{
    console.log("Input field is Changed."); alert('Input changed');
    console.log("event Type:",evt.type,"Target:",evt.target);})
 });
