let n1 = (prompt("digite um numero:"));
let n2 = (prompt("digite o segundo numero:"));
let n3 = (prompt("digite o terceiro numero:"));

if (n1 % 2 == 0) {
    console.log(" o primeiro numero e par")
}

else {
    console.log("o segundo numero e impar")
}


if (n2 % 2 == 0) {
    console.log("o segundo numero e par")
}
else {
    console.log(" o segundo numero e impar")
}

if (n3 % 2 == 0) {
    console.log("o terceiro numero e par")
}
else {
    console.log("o terceiro numero e impar")

}
if (n1>n2 && n1>n3){ 
	  console.log("o primeiro numero e maior:" ,n1)
}  else if (n2>n1 && n2>n3){
      console.log("o segundo numero e maior :" ,n2)
    }else{
    console.log("o terceiro numero e maior:" ,n3)
        
    } 	



