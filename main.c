#include <stdio.h>

int main(){
    int a = 0;
    while ( a < 10){
        a++;
        printf("%d \n" , a);
        
    }
    return 0 ;
}

------------------------------------------------------------------------------

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

-------------------------------------------------------------------------------

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

---------------------------------------------------------------------------------
