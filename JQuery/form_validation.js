function seterror(id, error){
    element=document.getElementById(id);
    element.getElementsByClassName('formerror')[0].innerHTML = error;
}

function validat()
{ var returnval=true;
     var errors = document.getElementsByClassName('formerror');
    for (var i = 0; i < errors.length; i++) {
        errors[i].innerHTML = "";
    }
    var firstname = document.forms['form']['fname'].value;
   
    if(firstname.length < 5)
    {
   seterror("username","*Length of the name is too short. ");
   returnval=false;
    }
    var lastname = document.forms['form']['lname'].value;
   
    if(lastname.length>15)
    {
   seterror("name","*Length of the name is too short. ");
   returnval=false;
    }
    var phone = document.forms['form']['fphone'].value;
    if(phone.length !=10)
    {
   seterror("phone","*Length of the phone must be 10 digit. ");
   returnval=false;
    }
     var mail = document.forms['form']['fmail'].value;
    if(mail.length>15)
    {
   seterror("email","*Length of the email is too long  ");
   returnval=false;
    }
  
 return returnval ;
}