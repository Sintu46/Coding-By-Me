// Scope--> that decide the variable is accessible inside the curly braces or outside the curly braces.
/* --global scope--> variable can be accessed anywhere in the program .
---Local Scope--> Variable can be accessed only inside the curly braces.
--function scope--> variables can declared with only var keyword.
*/
//global***********
//  var a=25
 function globalscope()
  {
     console.log("Inside the curly braces")
//    console.log(a)
 }
//  globalscope()
 //console.log("Access outside the Curly braces ")-->outside access
 //console.log(a)
//******************************************
//   // Local scope************
//    function localscope()
//    {
//     var b= 49;
//     console.log("variable inside the block")
//     console .log(b)
//    }
//    localscope()
//   // console.log(b)--> can't acces outside the --local scope--.
//    //function scope
 
//    function functionscope()
//    {
//     var c= 48;
//     if(true)
//     {
//         console.log(" Inside the functionscope but inner the other block  c=", c)
//     }
//     console.log("outer but inside the Functionscope c=",c)
//    }
//    functionscope()
//    //console.log("Outside the Functionscope=",c) can't accesssible.
//    //--Block scope-->let and const keyword that are defined  only inside the block.
//    function blockscope()
//    {
//     if(true)
//     {
//         let d=57
//         const e=46
//          console.log("inside the block=",d)
//          console.log("inside the block=",e)
//     }
//         //   console.log("outside the block=",d)--> can,t access.
//         //   console.log("outside the block=",e)--> can't access
//     }
  // blockscope()

//__Object--->
 let Mydetails={
     name:'Sintu Kumar',
     Course:'Javascript',
     Duration:'3Months',
 }
  
 console.log(Mydetails)

         
    
   