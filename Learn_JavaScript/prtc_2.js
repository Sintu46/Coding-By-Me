//--->User defined object
  /*... Object literals
    ... Constructor function
    ... class function*/


//Object Literals--->
/* 
let student={
    name:"Sintu Kumar",
    age:20,
    roll_no:82,
    course:"B.C.A",
    student1:function()
    {
        console.log("Hlo"+" " + this.name)
        console.log("Age"+" "+ this.age+"\n"+"Roll_no-->"+this.roll_no+" \n"+"Course-->"+this.course)
    }

 };
 student.student1();
 */
// Constructor function
/* 
function person(name,age)
 {
    this.name=name;
    this.age=age;
 }
 let person1=new person("Sintu Kumar",20);
 
 console.log(person1.name+ "\n" +person1.age)
 */

 //Class function
/*
 class Student{
    constructor(name,age)
    {
       this.name=name;
       this.age=19;
    }
    greet()
    {
        console.log("Hlo"+" "+this.name);
    }
}
    let person=new Student("Rohit");
    person.greet();
    */
   