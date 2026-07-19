#include <stdio.h>

int main(){
    double marks[5];
    double *p = &marks[0];

    for (int i = 0; i < 5; i++) {
        printf("enter yor marks: ");
        scanf("%lf", &marks[i] );



    }

    for (int i = 0; i < 5; i++) {
        printf("%.0f ", marks[i]);
    }



    double total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    printf("\nTotal = %.0f ", total);
    return 0;
}
