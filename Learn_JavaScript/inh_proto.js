
/*
    caltax()
    {
        console.log("Tax Rate is 10%");
    },
};
const arjun={
    salary:50000,
}
const arjun2={
    salary:50000,
}
const arjun3={
    salary:50000,
}
const arjun4={
    salary:50000,
}
const arjun5={
    salary:50000,
}


arjun.__proto__= employee;
arjun2.__proto__= employee;
arjun3.__proto__= employee;
arjun4.__proto__= employee;
arjun5.__proto__= employee;

console.log("Salary :",arjun.salary);
console.log(arjun.caltax());
console.log("Salary :",arjun2.salary);
console.log(arjun2.caltax());

console.log("Salary :",arjun3.salary);
console.log(arjun3.caltax());

console.log("Salary :",arjun4.salary);
console.log(arjun4.caltax());

console.log("Salary :",arjun5.salary);
console.log(arjun5.caltax());
*/


const proto={
    slogan()
    {
        console.log("I am currently Enrolled in B.C.A at D.A.V.College.");
    },
    name(newname)
    {
        this.name=newname;
    }
};

const sintu= Object.create(proto);
    sintu.name= "Shintu Kumar";
    sintu. role="Student";
    console.log(sintu);
    

    // You can now use inherited methods:
sintu.slogan(); // Inherited from proto


