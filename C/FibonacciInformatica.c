//exclua as duas barras nas linhas 4 e 33

#include <stdio.h>
//#include <conio.h>

 int main(void){
    int a, b, c, n, cont;

    a = 1;
    b = 1;
    cont = 2;

    printf("Digite quantos termos da sequencia de Fibonacci voce deseja: ");
    scanf("%i", &n);

    if (n<= 0){
        printf("\nEntre com um numero positivo!");
    }
    if(n == 1){
        printf("1\n");
    }
    if (n >= 2){
        printf("1\n");
        printf("1\n");
    }
    while(cont < n){
        c = a+b;
        printf("%i\n", c);
        a = b;
        b = c;
        cont++;
    }
    //getch();
}
