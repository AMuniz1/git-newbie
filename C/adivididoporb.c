#include<stdio.h>

int main(void) //void parameters
{
    float a, b, c; //a and b float numbers -> user input; c -> calculated

    printf("Digite o valor de a: "); //enter the number a value
    scanf("%f", &a); //read the a float

    printf("\nDigite o valor de b: "); //enter number b value
    scanf("%f", &b); //read the b value
    if(b != 0){ //if b is not zero, the division will be possible
        c = a/b; // c is equal to a divided by b
        printf("%.3f", c); // print with three decimal places
    }//end of if
}// end of main
