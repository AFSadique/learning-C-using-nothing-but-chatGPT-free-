#include <stdio.h>
int main(){
    char br[41] = "========================================";
    char name[30];
    int age;
    double hight;
    double weight;

    printf("%s\n STUDENT INFORMATION SYSTEM \n%s\n\nEnter your name: ", br, br );
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    int next_year = age +1;

    printf("Enter your height (meters): ");
    scanf("%lf", &hight);
    double sq_hight = hight * hight;

    printf("Enter your weight (kg): ");
    scanf("%lf", &weight);
    double bmi = weight / sq_hight;

    printf("%s\n STUDENT REPORT \n%s\n\nName : %s\nAge : %d years\nHeight : %.2f m\nWeight : %.2f kg\n\nNext year you will be %d years old\n\nBMI Formula:\nBMI = weight / (hight * hight)\n\nCalculation:\nheight^2 = %.2f * %.2f = %.2f\nBMI = %.2f / %.2f = %.2f\n\nThank you!\n%s", br, br, name, age, hight, weight, next_year, hight, hight ,sq_hight, weight, sq_hight, bmi, br);

    return 0;
}
