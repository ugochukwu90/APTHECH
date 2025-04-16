let name = "ugochukwu";
console.log(name);
 
function Greet(){
    let message="good";
 

    if (true) {
        let message = "ink";
        console.log(message);
    }
    console.log(message);
}




// function calculateDateOfBirth(age) {
//     return new Date().getFullYear() - age;
// }


// console.log(`Your year of birth is ${calculateDateOfBirth(25)}`);

  function calculateDateOfBirth(age){
    return new Date().getFullYear() - age;
}
Greet()

function date(dob,currentYear) {
    let age = currentYear - dob
    return age
}

console.log(date(2008,2025));

date()


function CallQuad(a, b, c){
  let x1,x2
  x1=((-b)+(b*b-4*a*c)^1/2)/2*a
  x1=((-b)-(b*b-4*a*c)^1/2)/2*a

  return [x1,x2]
}
console.log(CallQuad(1,7,10));

CallQuad()



function calInterest(P,R,T) {
    let I= (P*R*T)/100
    return I
}
console.log(calInterest(10000, 10, 3));

   var dommyFunction = function () {
    console.log("Hi1");
    console.log("Hi2");
    console.log("Hi3");
    return 0
    console.log("Hi4");
    console.log("Hi5");
}
dommyFunction()


function persom(name) {

    console.log(`hello, ${name}`);


    
    
}

persom("ugo")

// function calculateDateOfBirth(age){
//     return new Date().getFullYear() - age;
// }

function StateAge(name,){
    name = {name:"ugochukwu",
            age: 16,
    }
    console.log(`hello, ${name.name} ${name.age}`);
    
    
}
StateAge()


function greatUser(user) {
    user = {name:"john",
           age:25,
    }
    console.log(`Hello ${user.name},you are ${user.age} years old`);
    
}
greatUser()


