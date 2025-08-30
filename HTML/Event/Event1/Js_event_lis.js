//-----For Event_lis.htmlfile-----.
let Btn2=document.getElementById('Btn2');
Btn2.addEventListener("click",()=> {
    console.log("Button 2 Clicked");
});

//},false);
 //false means the event will be executed in the Bubbling phase,not in the Capturing phase.
//  Add another event listener as well:
 Btn2.addEventListener("click",()=>{
    console.log("Button 2 Clicked Again by using again Eventlistener");},true);
    //true means the event wil be executed in the Capturing phase not in the Bubbling phase.
//  Event Listener is a method that is used to attach an event handler function to an element.
//  It takes three arguments:
//  1. The Type of event 
//  2.The event Handler Function 
//  3.A Boolean function that specifies whether the event should be executed in the capture
//  phase or Bubble Phase.