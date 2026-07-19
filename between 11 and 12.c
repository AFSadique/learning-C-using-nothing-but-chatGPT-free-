#include <stdio.h>


double total(double marks[], int size){
    double sum =0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];

    }
    return sum;
}


double avarage(double sum,int size){

    return sum/size;

}

void printReport(double marks[], int size){
    for (int i = 0; i < size; i++) {
        printf("Subject %d : %f\n",(i+1),marks[i]);

    }


}

int highest(double marks[], int size){

    int cerial = 0;
    for (int i = 0; i < size; i++) {

        if(marks[cerial] < marks[i]){

            cerial = i;
        }else {cerial = cerial;}

    }

return cerial;

}

int main(){
    int n = 5;
    double marks[n];
    double *p = marks;
    double tottal;
    double avaragee;

    for (int i = 0; i < n; i++) { // input
        printf("enter a number:");
        scanf("%lf", p + i);

}


    tottal = total(marks, n);

    avaragee = avarage(tottal, n);

    printReport(marks, n);


    printf("\nthe total is %f and the avarage is %f\n\n",tottal,avaragee);

    printf("max = %f",marks[highest(marks, n)]);

    return 0;
}
