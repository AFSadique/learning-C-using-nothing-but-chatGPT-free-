
#include <stdio.h>


int squired(int x){return x*x;}
int cubed(int x){return x*x*x;}
int factorial(int x){

int result=1;


    for (int i = 1; i < x; i++) {
        result = result*i;


    }

    return result*x;
}




void cal(int input,int output){ switch (input) {

    case 1:
        printf("Squired = %d",squired(output));
    break;

    case 2:
        printf("cubed = %d",cubed(output));
    break;

    case 3:
        printf("%d! = %d",output,factorial(output));
    break;



}}



int main()
{
    int i =0;
    int *p = &i;
    printf("enter a number: ");
    scanf("%d", p);

    int choise = 0;
    int *q = &choise;


    while (choise > 3 || choise <1) {

    printf("enter an option\n1) Squired\n2) Cubed\n3) Factorial\n");
    scanf("%d", q);
    }

cal(choise,i);


    return 0;
}
