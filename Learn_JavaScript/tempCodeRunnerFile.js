
try{
    let a,b;
    a = 0 ;
    if(a==0)
    {
        throw new Error("Division by Zero is not allowed.")
    }
   let c = 25 / a ;
}
catch(e){
    console.log(e.message);
}
