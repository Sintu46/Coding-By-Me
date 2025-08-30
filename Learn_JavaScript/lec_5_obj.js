let mydetails={
    name:"sintu",
    course:"Javascript",
    Duration:"3 hours",
    Price: "2999rs",
    IsEmpty:true,
    "Full Name":"Sintu Kumar" 
   }   
/*Access Data by two method--->Dot Method,Square Method
---->Dot Method-->is used dot to access*/
//console.log(mydetails.course)
/*---Square Method-->is used square bracket.also in case when key is in space.i.e First Name.*/

//console.log(mydetails['course'])

//console.log(mydetails['Full Name']) // Accessing the property with space in the key.
 
//---Modifications in the object--->
 mydetails.course="Full Stack Developer"//Modifoying the property.
 mydetails.Duration="6 months"//Modifoying the property.
 //console.log(mydetails.course,mydetails.Duration)

 console .log(mydetails)//-->checking the object after modification.

 //--->Adding new property in the object.
//  mydetails.lastname="kumar"//-->adding new property in the object.
//  console.log(mydetails)

 //-->Deleting the property from the object.
 delete mydetails.lastname //-->deleting the property from the object.
 console.log(mydetails)
 //-->checking the object after deleting the property.