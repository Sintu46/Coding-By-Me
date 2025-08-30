//Constructor func
class Animal{  //class
    constructor(pet)  /*constructor -->by default calling during the creation of the object.
                         passing an argument throguh the Constructor */
    {
        console.log("Animal behaivour are representing..");
        this.pet=pet;
        console.log("All animal that are mentoned in the list are"+ " "+this.pet)
    }
    eat()    //method or function of Animal class
    {
        console.log("Animal are Eating")
    }
     Sound()  //method or function of Animal class
     {
        console.log("Animal can make a  Sound.")
     }
}
class dog extends Animal // extends/inherit all the property & method of Animal class
{
    bark()  //method or function of dog class
    {
        console.log("Dogs are Barking....")
    }

}
 class Cat extends dog  /*extends all the property & method of dog class 
                         who already inherit the propert of Animal class*/

 {
    meow()   //method or function of Cat class
    {
        console.log("Cat is Mew...")
    }
 }

 let obj= new Cat("paltu")  /*creating an object.
                            passing the  value for constructor argument.*/
 obj.eat(); // calling the Eat() of Animalclass though Cat object.
 obj.Sound(); // calling the sound() of Animalclass though Cat object.
 obj.bark();// calling the bark() of dogclass though Cat object.
 obj.meow();// calling the noise() of Catclass though Cat object.
 