#include <stdio.h>

int main(){
    char br[37]="====================================";
    char tbr[37]="------------------------------------";
    char name[30]="Fida";
    double marks[5];
    marks[0] = 85.50;
    marks[1] = 91.00;
    marks[2] = 79.50;
    marks[3] = 88.00;
    marks[4] = 95.00;
    double total = marks[0] + marks[1]+ marks[2] + marks[3] + marks[4];
    int size_of_1element = sizeof(marks[0]);
    int total_size = sizeof(marks);
    int n = sizeof(marks)/size_of_1element;
    double avarage = total/n;

    printf("%s\n         STUDENT REPORT             \n%s\n\nName : %s\n\nSubjects\n\nmath : %.2f\nPhysics :%.2f\nchemistry : %.2f\nBiology: %.2f\nEnglish : %.2f\n\n%s\n\n total : %.2f\nAvarage : %.2f\n\nMemory Info:\n\nsizeof(double) = %d\nNumber of subject = %d\nArray size: %d\n\nmemory leayout\n\nmarks[0]\nmarks[1]\nmarks[2]\nmarks[3]\nmarks[4]\n\n%s", br,br,name, marks[0],marks[1],marks[2],marks[3],marks[4],tbr,total, avarage, size_of_1element, n,total_size, br);



    return 0;
}
