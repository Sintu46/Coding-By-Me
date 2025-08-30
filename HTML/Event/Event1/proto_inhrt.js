
//this code define prototype inheritance in Javascript or Called as Protype Chain.
//In his Example, We will define the caltax() method in proto object.
//This method is inherit by all Manager objects by using method object.setProtype(objectname,protoname). 
let proto={
    caltax()
{
    console.log("CalTax is 10% of Salary.");
    console.log("Tax is:"+this.salary*0.10);
}
};
//Manager objects will inherit the caltax() method from proto.

let manager={
           
                name:"Sintu Kumar",
                salary:20000
            }
    
     let manager2={
              
                     name:"Rohit Kumar",
                     salary:50000
                 }
      let manager3={
                        
                     name:"rohan Kumar",
                     salary:60000
                  }
       let manager4={
            
                       name:"Siumit Kumar",
                       salary:80000
         } 
        
 

//manager, manager2, manager3, and manager4 inherit the caltax method from
//  proto via prototype inheritance.
//This is a classic use of JavaScript’s prototype chain.

// Set proto as the prototype for each manager object
Object.setPrototypeOf(manager,proto);
Object.setPrototypeOf(manager2,proto);
Object.setPrototypeOf(manager3,proto);
Object.setPrototypeOf(manager4,proto);
//Now all Managers can use caltax() via prototype inheritance.
manager.caltax();
manager2.caltax();
manager3.caltax();
manager4.caltax();