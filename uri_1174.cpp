/** In this problem, your task is to read an array A[10].
At the end, print all array positions that store a number less or equal to 10 and the number stored in that position.

Input
The input contains 10 numbers. Each number can be integer, floating-point number, positive or negative.

Output
For each number of the array that is equal to 10 or less than 10, print "A[i] = x",
where "i" is the position of the array and "x" is the number stored in the position, with one digit after the decimal point. **/

#include<stdio.h>
#include<stdlib.h>

main() {

    float A[10] = {};
    int i = 0;

    system("cls");
    system("color 5D");

    while(i < 10) {
        printf("Enter the %d number: ", i+1);
        scanf("%f", &A[i]);
        i++;
    }

    i = 0;

    while(i < 10) {
        if(A[i] <= 10) {
            printf("A[%d] = %.1f \n", i, A[i]);
        }
        i++;
    }

    puts("\nTHE END! \n");

    system("pause");
}
