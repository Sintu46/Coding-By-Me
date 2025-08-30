//-->User definedbject
//object literal
//constructr function
//claas object

//-->object literal
/*
let user ={
    name:"Sintu kumar",
    age:20,
    course:"Javascript",
    duration: "6Months"
}
console.log(user.name);
console.log( user.name.length)
*/
//--->Constructaor function
/*
function userdetails(name,age,course,isActive)
{
    this.name=name;
    this.age=age;
    this.course=course;
    this.isActive=isActive;
}
let user1= new userdetails("sintu","20","Javascript",true);
console.log(user1.name,user1.age,user1.course,user1.isActive);//-->accesing the data
console.log("Hello,My name is "+user1.name+" "+"and age is"+" "+user1.age+" "+"and I am Learning the"+""+user1.course);
*/
//-->class object
 class student{
    constructor( name,age)
    {
    this.name=name;
    this.age=age;
    }
    greet(){
        console.log("Hello,My name is "+" "+this.name+" "+"and age is"+" "+this.age);
    }
    
 }let student1=new student("Sintu Kumar",20);
 student1.greet(); //-->Calling the method of the class object.