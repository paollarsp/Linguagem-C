/*
Algoritmo de uma calculadora, na linguagem C, que o usuário seleciona a operação matemática e informa os valores, 
podendo realizar uma nova operação, ou não, logo após.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void imprime_menu() {
system("clear");
printf("CALCULADORA \n");
printf("1. Soma\n");
printf("2. Subtração\n");
printf("3. Multiplicação\n");
printf("4. Divisão\n");
printf("5. Raiz\n");
printf("6. Potentiação\n");
printf("7. Fatoração\n");
printf("8. Sair\n");
}

void imprime_menu2(){
printf("Deseja voltar ao menu?\n");
printf("1. Sim\n");
printf("2. Não\n");
}

int main (){

setlocale (LC_ALL, "");

int loop, menu, menu2;
double soma1, soma2, result1;
double sub1, sub2, result2;
double mult1, mult2, result3;
double div1, div2, result4;
double indice, radicando, result5;
double result6, base, expoente;
int result7, fat, n;

loop=0;

for (loop=0; loop<1; loop++) {

imprime_menu();
scanf("%d", &menu);

while(menu<1 || menu>8){
imprime_menu();
printf("Opcão errada, digite novamente\n");
scanf("%d", &menu);
}
switch(menu){    
case 1:    
printf("Insira o primeiro número da soma\n");   
scanf("%lf", &soma1);
printf("Insira o segundo número da soma\n");
scanf("%lf", &soma2);
result1=soma1 + soma2;
printf("O resultado será %lf\n", result1);
break;

case 2:
printf("Insira o primeiro número da subtração\n");
scanf("%lf", &sub1);
printf("Insira o segundo número da subtração\n");
scanf("%lf", &sub2);
result2=sub1 - sub2;
printf("O resultado será %lf \n", result2);
break;

case 3:    
printf("Insira o primeiro número da multiplicação\n");    
scanf("%lf", &mult1);    
printf("Insira o segundo número da multiplicação\n");    
scanf("%lf", &mult2);    
result3=mult1 * mult2;    
printf("O resultado será %lf \n", result3);    
break;        

case 4:   
printf("Insira o primeiro número da divisão\n");    
scanf("%lf", &div1);    
printf("Insira o segundo número da divisão\n");    
scanf("%lf", &div2);    
result4=div1 / div2;    
printf("O resultado será %lf \n", result4);    
break;        

case 5:    
printf("Insira o radicando da raiz\n");    
scanf("%lf", &radicando);    
printf("Insira o indice da raiz\n");    
scanf("%lf", &indice);    
result5 = pow(radicando, 1/indice);    
printf("O resultado será %lf \n", result5);    
break;        

case 6:    
printf("Insira o valor da base da potência\n");    
scanf("%lf", &base);    
printf("Insira o  expoente da potência\n");    
scanf("%lf", &expoente);    
result6 = pow(base, expoente);    
printf("O resultado será %lf \n", result6);    
break;        

case 7:    
printf("Insira o valor do fatorial\n");    
scanf("%d", &n);    
for(fat=1; n>1; n--){    
fat = fat*n;    
}    
printf("O resultado de será %d \n",fat);    
break;   
     
case 8:    
return 0;    
break;    
}    

imprime_menu2();
scanf("%d", &menu2);

while(menu2<1 || menu2>2)
{
imprime_menu2();
printf("Inválido. Digite novamente!\n");
scanf("%d", &menu2);
}

if(menu2==1)
{
loop--;
} 

if(menu2==2)
{
return 0;
}

}
}
