// Basics of Input/Output - TUTORIAL
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/

#include <stdio.h>

int main(){

    // input
    int first_line;
    scanf("%d", &first_line);

    char second_line[15];
    scanf("%s", second_line);

    //output
    printf("%d \n", (first_line * 2));
    printf("%s", second_line);

    return 0;
}
