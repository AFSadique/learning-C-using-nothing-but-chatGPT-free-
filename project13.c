#include <stdio.h>

struct book{

int id;
int pages;
double price;

};






int main(){

static const int number_of_Books = 5;
    struct book library[number_of_Books];
int max = 0 ;

    for (int i =0; i < number_of_Books; i++) {
        printf("enter the id of %dth book: ",(i+1));
        scanf("%d",&library[i].id);
        printf("enter the number of total pages of %dth book: ",(i+1));
        scanf("%d",&library[i].pages);
        printf("enter the price of %dth book: ",(i+1));
        scanf("%lf",&library[i].price);
        printf("\n\n");
    }

    printf("======================================================\n\n");

    for (int i = 0; i < number_of_Books; i++) {

        printf("the id of the %dth book is: %d\n", (i+1),library[i].id);
        printf("the number of total pages of the %dth book is: %d\n", (i+1),library[i].pages);
        printf("the price of the %dth book is: %.2f\n\n", (i+1),library[i].price);

        if (library[i].price >= library[max].price) {
max = i;
        }

    }

    printf("\nThe most expensive book is %dth book priced at %.2f",(max+1),library[max].price);

    return 0;
}
