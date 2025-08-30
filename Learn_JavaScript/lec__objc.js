/* --Types of object-->
      --->Built-in Object
      --->User-defined object
      --->Dom object
      --->Bom object
      --->Global object
 */
//----Built in object
    //---> object object
/*    let mydetails = new Object();
    mydetails.name ="Sintu Kumar";
     console.log(mydetails);
*/
     //--->Array object
 /*    
     let fruits = ["apple","banana","orange"];//initializing the array object.
     console.log(fruits[1]);//accessing the secondelement of the array.
     console.log(fruits[1].length);// accessing the length of the element.
     console.log(fruits.length);// accessing the length of the array object.
*/
     //--->function object
/*
      function greet(){
        console.log("Hello,welcome to the world of the Javascript");
      }
      greet(); //Calling the function .
 */
 
      //-->Date function
/*
      let currentdate=new Date();
      console.log(currentdate); //-->Getting the current time and date.
*/
//-->Math object
//  let randomValue=Math.random();
//  console.log(randomValue);

//-->RegExp object
let pattern  =/Hello/;
console.log(pattern.test("Hello World"));// testing the pattern against a string.
console.log(pattern.test("Hi,there")); // testing apattern against a string that does not match.

//error handling object
try{
    throw new error("Message is not defined");

}catch(e){
    console.log(e.message);
}