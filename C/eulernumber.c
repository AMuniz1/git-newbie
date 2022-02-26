/* calculating euler number */

#include <stdio.h>
int fat(int x);
int main(void)

{
    int n; int y; double en = 1.0; double term = 1.0; //en = euler number
    
    printf("Entre com o valor de n para a aproximação do número de Euler: \n");//prompt
    scanf("%d", &n);//read n
    //n big enough -> aproximation for en is close of real value of euler number
    if (n < 0){ //if the user input a negative value
        printf("Error!\n");
    }
    else {//if the user is not a troll and enter a positive integer
        for (y = 1; y <= n; y++){
			term /= y;
            en = en + term; // en = summation(1/fat(y))
            //printf("y = %d and en = %.9lf\n", y, en); this line is for studying when en return 'inf'

        }
        printf("O valor aproximado de e é aproximadamente %.9lf\n", en);//print euler number aproximation
    }
}
int fat(int x){//defining the factorial function
    int factorial = 1;
    int f;
    for (f = 1; f <= x; f++){
        factorial = factorial * f;
    }
    return factorial;
}
