
/* ----------JQuery Events.-------
 1.Mouse_evn....
     i.   click-----> $('#button').click(function(){//Code....});
     ii.  dblclick--> $('#button') . dblclick(function(){//code...});
     iii. Mouse enter & leave---> $('.box') . mouseenter(function()); //Hover Evnt.
 2. Keyboard Evn...
      i.keypress-->$('#input'). keypress(function(){});
 3. Form Evn...
      i. submit-->$('form).submit(function(){//code..}});  
     ii. focus & blur --> $('input').focus(function(){this.css("background-color","yellow")});
 4. Document / Window Evn...
      i.  ready--> $(document).ready(function(){//code...})    
      ii. scroll & Resize--> Triggred when window resize or scroll tha page.  
  */
 $(document).ready(function(){
    console.log("JQuery Event Working.");
    //ON BUTTON...
    $('#MyButton').click(function(){
        console.log("Button Was clicked.");
        $('#MyButton').css("background-color","lightblue");
    });
    $('#MyButton').dblclick(function(){
       alert("Triggered on DBLClick.");
     $('#MyButton').css("background-color","yellow");

    });
    
    //Hover Evnt.
    $('.Evntcls') .mouseenter(function(){
        $(this).css("background-color","red"); });
      //function(){
        $('.Evntcls').mouseleave(function(){
       $(this).css("background-color","lightblue");
      });
    //Key Evnt..
    $(document).keypress(function(evnt){
       console.log("Key Pressed :"+ evnt.key);
    });
    // Form evnt.
    $('#myform').submit(function(event){
        event.preventDefault();
        alert("Form Was Submitted.");
        $(this).css("color","red");

    });
 });