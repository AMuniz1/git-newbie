#include <stdio.h>
#include <math.h>

int main(void){
    int N, mdc;

    printf("Input the integer you want to test: ");
    scanf("%i", &N);

    mdc = sqrt(N) + 1;


     //In Number Theory, one of the divisors of N, when the number N is not a prime,
    // is contained in the range of 2<= p <=sqrt(N)
   //If sum(soma) is 0, the number is prime!

    int soma = 0;

    //printf("%i", mdc);

    for(int i = 2; i<= mdc; i++){
        if(N%i == 0){
            soma = soma + i;
        }
    }
    if (soma == 0){
        printf("\n%i it is prime!\n", N);
    }
    else{
        printf("\n%i it is not a prime!\n", N);
    }
}
