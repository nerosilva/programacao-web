
const numero = parseInt(prompt("digite um numero: "));
const operacao = (prompt("digite a operacao [+ - / *]: "));


switch (operacao) {


   case '+':
      for (let i = 1; i <= 10; i++){
         const resultado = numero + i;
         console.log(numero + '+' + i + ' = ' +resultado);
      }

      break;


   case '-':
      for (let i =numero+1; i <= 10+numero; i++){
         const resultado =  i-numero;
         let valor1 = parseInt(prompt("informe um valor1: "));
const operacao = (prompt("digite a operacao [+ - / *]: "));
let valor2 = parseInt(prompt("informe o segundo valor2: "));
let valor3;

switch (operacao)  {

 case '+':
    valor3=valor1+valor2
    break;
 case '-':
    valor3=valor1-valor2
    break;
 case '/':
    valor3=valor1/valor2
    break
 case '*':
    valor3=valor1*valor2
    break;


}
alert (valor3);
 





      }
      break;



   case '/':

      for (let i = numero; i <= 10* numero; i= i + numero){
         const resultado = i / numero;
         console.log(i + '/' + numero+ ' = ' +resultado);
      }

      break;

   case '*':

      for (let i = 1; i <= 10; i++){
         const resultado = numero * i;
         console.log(numero + '*' + i + ' = ' +resultado);
      }
      break;

   }

















   








   