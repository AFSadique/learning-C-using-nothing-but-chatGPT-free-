#include <stdio.h>
#include <stdbool.h>
#include "math.h"

bool isPalindrome(int x) {
    int sum = 0;
    bool r = 0;
    if (x == 0) {
        r = 1;
    } else if (x < 0) {
        r = 0;
    } else {

        int size = log10(x) + 1;

        if (size == 1) {
            r = 1;
        } else {
            int digit[size];
            int differance[size];
            int total = 0;

            for (int i = 0; i < size; i++) {
                int powered = pow(10, i + 1);
                digit[i] = x % powered;
            }

            for (int i = 1; i < size; i++) {
                digit[i] -= digit[i - 1];
                digit[i] = digit[i] / pow(10, i);
            }

            for (int i = 0; i < (size + 1) / 2; i++) {
                differance[i] = digit[(size - 1) - i] - digit[i];
            }

            for (int i = 0; i < (size + 1) / 2; i++) {
                differance[i] = abs(differance[i]);
            }

            for (int i = 0; i < (size + 1) / 2; i++) {

                sum += differance[i];
            }
            if (sum == 0) {
                r = 1;
            } else {
                r = 0;
            }
        }
    }

    return r;
}





int main(){
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    if (isPalindrome(x) == 1) {
        printf("true");

    }else if(isPalindrome(x) == 0) {
        printf("false");
    }


    return 0;
}
