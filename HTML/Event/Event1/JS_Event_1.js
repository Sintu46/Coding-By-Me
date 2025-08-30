/*Event object is an object that is passed to the
 event handler function when an even is triggered.
 It contain the Information abot the Event Such as Type,target etc.*/

/*
//-----For Event_1.html file-----.
 let Btn1=document.getElementById('Btn1');
Btn1.onclick=(evt)=>{
    //Js Event Handlers(Modern Event Handlers.) 
    // console.log('buttonBtn1 is Clicked');alert('Button 1 Clicked');
     console.log("Event Type :",evt.type,"Target Element:",evt.target);//Tosee the type of Event & Element Target of the Event.
     console.log("Event on X Axis :",evt.clientX ,"Y Axis:",evt.clientY);
     //Client X and Y are the Coordinates of the Mouse Pointer.
}
     */
let div=document.getElementById('div1');
div1.onmouseover=()=>{ //this method is DOM Level 0 Event Handlers.
    console.log('Div Button is Clicked');
}
//Both Method execute at a Time.
div.onmouseout=() =>{
    console.log("Mouse is Outside the Box");
}

