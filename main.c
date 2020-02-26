#include <stdio.h>
#include <stdlib.h>

main()                          //  Defines main function
{
    int i, j, a=29;             //  Defines variables i,j and a as integers and also initiates a as 29.
    for(i=5; i>=1;i--) {        //  Start a for loop using i as 5, decrementing by 1 step(value) down to 1.
        for(j=5; j>=i;j--) {    //  Start a for loop using j as 5, decrementing by 1 step(value) up to i's current value which is also looping from the outer for loop.
            printf("%d ",a);    //  Format integer a and print it out to the screen.
            a-=2;               //  Decrement/Sum the value of a with its previous value and 2. Substracts 2 from the previous value of a.
        }                       //  Closes inner loop iteration.
        printf("\n");           //  Prints a new line after every outer iteration.
    }                           //  Ends the outer for loop/iteration.
    return 0;                   //  Returns 0, to indicate a successful run.
}

// When it runs, something as below is displayed

// 29
// 27 25
// 23 21 19
// 17 15 13 11
// 9  7  5  3  1
