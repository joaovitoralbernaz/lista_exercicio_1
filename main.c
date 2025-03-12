#include <stdio.h>

int main(){
    int a = 0;
    while ( a < 10){
        a++;
        printf("%d \n" , a);
        
    }
    return 0 ;
}

-----------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int n1;
    printf("Digite um número inteiro: ");
    scanf("%d" , &n1);
        
    if( n1 < 0){
        printf("O número é negativo");
    }else{
        printf("O número é positivo");
    }
    return 0 ;
}

--------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n <= 20 && n >= 0){
        if(n % 2 == 0){
            printf(" %d \n" , n);
        }
        n = n + 1;
    }

    return 0;
}

----------------------------------------------------------------------------------------------------------------
-
Faça um programa que conte de 0 a 20, mas só imprima os números pares.

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n <= 20 && n >= 0){
        if(n % 2 == 0){
            printf(" %d \n" , n);
        }
        n = n + 1;
    }

    return 0;
}

---------------------------------------------------------------------------------------------------------------
 Escreva um programa que peça ao usuário para adivinhar um número e informe se o palpite está correto.

#include <stdio.h>

int main(){
    int n = 10;
    int resp;
    printf("Advinhe o número de 0 a 50: ");
    scanf("%d" , &resp);
    
    if(resp != n){
        printf("Você errou o número :(");
    }
    else{
        printf("Você acertou o número!");
    }
    
    return 0;
}

-------------------------------------------------------------------------------------------------------------------
 Crie um programa que imprima os números de 10 a 1 em ordem decrescente.

#include <stdio.h>

int main(){
    int n = 10;
    
    while(n > 0){
        printf("%d \n" , n);
        n = n-1;
    }
    
    return 0;
}

-------------------------------------------------------------------------------------------------------------------
 • Faça um programa que calcule a soma dos números de 1 a 50 usando um loop while.

#include <stdio.h>

int main(){
    int n = 1;
    int soma = 0;
    
    while( n <= 50){
        soma = soma + n;
        n++;
        
    }
    printf("A soma é: %d" , soma);
    return 0;
}

----------------------------------------------------------------------------------------------------------------------
• Escreva um programa que solicite a idade do usuário e informe se ele é uma criança, adolescente, adulto ou idoso.

#include <stdio.h>

int main(){ 
    int idd;
    
    printf("Digite sua idade: ");
    scanf("%d" , &idd);
    
    if( idd > 65){
        printf("Você é idoso");
        
    }else if ( idd > 20){
        printf("Você é adulto");
        
    }else if ( idd > 13){
        printf("Você é adolescente");
    }else{
        printf("Você é criança");
    }
    return 0;
}

----------------------------------------------------------------------------------------------------------------------------
  • Crie um programa que conte de 1 a 100, mas só imprima os números divisíveis por 7.

#include <stdio.h>

int main(){ 
    int n = 1;
    printf("Os numeros divisíveis por 7 de 1 a 100 são:\n ");
    while( n <= 100){
        if( n % 7 == 0){
            printf("%d\n" , n );
        }
        n++;
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------
• Faça um programa que peça dois números ao usuário e imprima o maior deles.

#include <stdio.h>

int main(){ 
    int a;
    int b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d" , &a);
    printf("Digite o segundo número: ");
    scanf("%d" , &b);
    
    if( a > b){
        printf("O MAIOR NÚMERO É: %d" , a);
    }else{
        printf("O MAIOR NÚMERO É: %d" , b);
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------

 • Crie um programa que peça um número ao usuário e imprima se é ímpar ou par.

    #include <stdio.h>

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d" , &n);
    
    if( n % 2 == 0 ){
        printf("O número é par");
    }else{
        printf("O número e ímpar");
    }
    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------

 • Faça um programa que conte de 1 a 30, mas pule os números múltiplos de 3.

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n < 30){
        if(n % 3 == 0){
            n++;
        }else{
            printf("\n %d", n);
            n++;
        }
    }
    
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------

 • Escreva um programa que solicite dois números e informe se são iguais.

#include <stdio.h>

int main (){
    int n1;
    int n2;
    
    printf("Digite um número: ");
    scanf("%d" , &n1 );
    printf("Digite um segundo número: ");
    scanf("%d" , &n2);
    
    if( n1 == n2 ){
        printf("Os números são iguais!!");
    }else{
        printf("Os números são diferentes");
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------

 • Crie um programa que imprima a tabuada de multiplicação de um número fornecido pelo usuário.

#include <stdio.h>

int main (){
    int a = 1;
    int b;
    
    printf("Digite um número: ");
    scanf("%d" , &b);
    
    while( a <= 10){
        printf("%d \n" , a * b);
        a++;
        
    }

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------

 • Faça um programa que conte de 1 a 100 e imprima "Fizz" para números divisíveis por 3 e "Buzz" para números divisíveis por 5. Para números que são divisíveis por ambos, imprima "FizzBuzz".


    
