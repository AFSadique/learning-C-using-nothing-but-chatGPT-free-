#include <stdint.h>
#include <stdio.h>

static const int sub = 5;

struct student{
    int roll;
    int age;
    double hight;
    int marks[5];
};

double ava(int sub,int marks[sub]){
    int total = 0;
    double avargae = 0;
    for (int i = 0; i < sub; i++) {
        total += *(marks +i);
}



avargae = (double)total/sub;  // making the total double
return avargae;
};


int hight(int sub , int marks[sub]){

    int y = 0;
    for (int i = 0; i < sub; i++) {
        if(marks[y] <= marks[i]){y = i;}
    };


return marks[y];
};


int main(){

    char br[46]="=============================================";
    char b[46]="---------------------------------------------";


    int n = 5; // n = number of the total student
    int nth_student=0;


    struct student s[n];


// well using the pointers make my code look clean
int *r = &s[nth_student].roll;
int *a = &s[nth_student].age;
double *h = &s[nth_student].hight;
int *m = s[nth_student].marks;



    printf("%s\nSTUDETN CARD OF THE %d th student of the class\n%s\n\n",br,nth_student+1,br);


    printf("\nEnter roll:");
    scanf("%d", r);

    printf("\nEnter age:");
    scanf("%d", a);

    printf("\nEnter height (in meters):");
    scanf("%lf",h);

    printf("\nenter marks:\n\n");
    for (int i = 0; i < sub; i++) {
        printf(" %d) ",i+1);
       scanf("%d", m +i);
    }

    printf("\n%s\n\nRoll : %d\nAge : %d\nHight : %.2f m\n\nMarks\n\n",b,*r,*a,*h);

    for (int i = 0; i < sub; i++) {
        printf(" %d : %d\n",i+1,*(m +i));
    }


    printf("\nAvarage: %.2f\nHight: %d",ava(sub, m),hight(sub , m));




    return 0;
}
