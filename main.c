Escreva um programa que imprima os números de 1 a 10 usando um loop while.

#include <stdio.h>

int main() {
    int i = 1;
    
    while(i<=10){
        printf("%d \n" , i);
        i++;
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
 Crie um programa que solicite um número ao usuário e imprima se ele é positivo, negativo ou zero.

#include <stdio.h>

int main() {
    int a;
    printf("Digite um número: ");
    scanf("%d" , &a);
    
    if(a < 0){
        printf("O número é negativo");
    } else if(a > 0){
        printf("O número é positivo");
    }
    else{
        printf("O número é 0");
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que calcule a soma dos números de 1 a 50 usando um loop while.

#include <stdio.h>

int main() {
    int soma = 0;
    int n = 1;
    
    while(n <= 50){
        soma = soma + n;
        n++;
        printf("a soma vale %d \n" , soma);
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Escreva um programa que solicite a idade do usuário e informe se ele é uma criança, adolescente, adulto ou idoso.

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d" , &idade);
    
    if(idade < 12){
        printf("Você é uma criança!");
    }else if(idade < 18){
        printf("Você é um adolescente!");
    }else if(idade < 60){
        printf("Você é um adulto!");
    }else{
        printf("Você é um idoso!");
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Crie um programa que conte de 1 a 100, mas só imprima os números divisíveis por 7.

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n <= 100 && n >= 0){
        if(n % 7 == 0){
            printf(" %d \n" , n);
        }
        n = n + 1;
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que peça dois números ao usuário e imprima o maior deles.

#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Digite o primeiro número: ");
    scanf(" %d", &a);
    printf("Digite o segundo número: ");
    scanf(" %d" , &b);
    
    if(a < b){
        printf(" %d é o maior número", b);
    }else{
        printf(" %d é o maior número", a);
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Crie um programa que peça um número ao usuário e imprima se é ímpar ou par.

#include <stdio.h>

int main() {
    int n;
    printf("Escreva um número: ");
    scanf("%d" , &n);
    
    if(n % 2 == 0){
        printf("Esse número é par!");
    }else{
        printf("Esse número é ímpar!");
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que conte de 1 a 30, mas pule os números múltiplos de 3.


#include <stdio.h>

int main() {
    int n = 0;
    
    while(n < 30){
        if(n % 3 == 0){
            printf("\nEsse número é múltiplo de 3");
            n++;
        }else{
            printf("\n %d", n);
            n++;
        }
    }
    
    return 0;
}

OU

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

------------------------------------------------------------------------------------------------------------------------------------------------
 Escreva um programa que solicite dois números e informe se são iguais.

#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Digite um número número: ");
    scanf(" %d" , &a);
    printf("Digite um outro número número: ");
    scanf(" %d" , &b);
    
    if(a == b){
        printf("Os números são iguais");
    }else{
        printf("Os números são diferentes");
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Crie um programa que imprima a tabuada de multiplicação de um número fornecido pelo usuário.

#include <stdio.h>

int main() {
    int a;
    int c= 1;
    printf("Digite um número: ");
    scanf("%d" , &a);
    
    while(c <= 10){
        printf("%d\n" , c * a);
        c++;
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que conte de 1 a 100 e imprima "Fizz" para números divisíveis por 3 e "Buzz" para números divisíveis por 5. Para números que são divisíveis por ambos, imprima "FizzBuzz".

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n <= 100 && n >= 0){
        if(n % 3 == 0 && n % 5 == 0){
            printf(" %d FizzBuzz \n" , n);
        }else if(n % 5 == 0){
            printf(" %d Buzz \n" , n);
        }else if(n % 3 == 0){
            printf(" %d Fizz \n" , n);
        }else{
            printf("Não é divisível por nenhum dos dois \n");
        }
        n++;
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Escreva um programa que solicite um número e verifique se está na sequência de Fibonacci. ( 0+1=1; 1+1=2; 1+2=3; 2+3=5; 3+5=8; 5+8=13).0,1,1,2,3,5,8,13. 




------------------------------------------------------------------------------------------------------------------------------------------------
 Crie um programa que peça a altura e o peso do usuário e calcule o índice de massa corporal (IMC).

#include <stdio.h>

int main(){
    float alt;
    float peso;

    printf("Digite sua altura: ");
    scanf(" %f", &alt);
    printf("Digite seu peso: ");
    scanf(" %f", &peso);
   
    int imc = peso/(alt*alt);
    printf("Seu IMC é: %d ", imc);
    
    
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que solicite um número e imprima se é primo ou não.

#include <stdio.h>

int main() {
    int n;
    int a;
    int primo = 1;
    printf("Digite um número: ");
    scanf("%d", &n);

    if(n < 2){
        primo = 0;
    }else{
        for(a = 2; a * a <= n; a++){
            if(n % a == 0){
                primo = 0;
                break;
            }
        }
    }
    if (primo){
        printf("É um número primo!\n");
    }
    else{
        printf("Não é um número primo!\n");
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Escreva um programa que simule um jogo de adivinhação, onde o computador escolhe um número aleatório e o usuário tenta adivinhar.

#include <stdio.h>

int main() {
    int n = 10;
    int a;
    printf("Tente advinhar o número: ");
    scanf("%d" , &a);
    
    if(a == n){
        printf("Você acertou o número!");
    }else{
        printf("Você errou o número :(");
    }
    
    

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Crie um programa que imprima os números primos de 1 a 50.

Números primos:2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47

#include <stdio.h>

int main() {
    int num;
    int a; 
    int primo;
    printf("Números primos de 1 a 50:\n");

    for (num = 1; num <= 50; num++) {
        if (num < 2) continue;
        primo = 1;
        for (a = 2; a * a <= num; a++) {
            if (num % a == 0) {
                primo = 0;
                break;
            }
        }if (primo) {
            printf("%d \n", num);
        }
    }
    return 0;
} 
