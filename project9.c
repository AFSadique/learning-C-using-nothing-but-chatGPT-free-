#include <stdio.h>


void line(int length){

    for (int i = 0; i < length ; i++ ) {

        printf("=");


    }


}




int main(){

    int i;
    int *p = &i;

    printf("enter a number:\n");
    scanf("%d", p);

    line(i);
    printf("\n");

    return 0;
}
