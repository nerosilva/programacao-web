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
 







 