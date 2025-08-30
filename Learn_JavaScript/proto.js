const employee={
    CalTax()
    {
        console.log( "Tax rate is 10%");
    },
};

const Arjun={
    salary:50000,
   
}

const Arjun2={
    salary:50000,
}
const Arjun3={
    salary:50000,
}
const Arjun4={
    salary:50000,
}
Arjun.__proto__= employee; //Defining the Prototype 
Arjun2.__proto__= employee;//Defining the Prototype 
Arjun3.__proto__= employee;//Defining the Prototype 
Arjun.__proto__= employee;//Defining the Prototype 
Arjun4.__proto__= employee;//Defining the Prototype 

console.log(Arjun.salary);
console.log(Arjun.CalTax());  
console.log(Arjun2.salary);
console.log(Arjun2.CalTax());
console.log(Arjun3.salary);
console.log(Arjun3.CalTax()); 
console.log(Arjun4.salary);
console.log(Arjun4.CalTax());  
