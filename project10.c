#include <stdio.h>


int square(int x){

    return x*x;

}




int main(){

    int i;
    int *p = &i;
//int s = 0;


    printf("enter a number:");
    scanf("%d",p);
    for (int x=1; x <= i; x++) {

        printf("%d -----> %d\n",x,square(x));
    //s += square(x);
    }
    //printf("===========================\n total = %d",s);


    return 0;
}
