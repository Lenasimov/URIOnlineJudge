/** Read an array X[10]. After, replace every null or negative number of X ​by 1. Print all numbers stored in the array X.

Input
The input contains 10 integer numbers. These numbers ​​can be positive or negative.

Output
For each position of the array, print "X [i] = x", where i is the position of the array and x is the number stored in that position.

**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    int x[10]={};
    int i = 0;

    setlocale(LC_ALL, "Portuguese");
    system("cls");
    system("color 5D");

    while(i < 10) {
        printf("Enter the %d integer number: ", i+1);
        scanf("%d", &x[i]);
        i++;
    }

    i = 0;

    while(i < 10) {
        if(x[i] <= 0) {
            x[i] = 1;
        }
        printf("Array x[%d] = %d \n", i, x[i]);
        i++;
    }

    puts("\nTHE END! \n");

    system("pause");
}
