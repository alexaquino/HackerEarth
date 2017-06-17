// Basics of Input/Output - TUTORIAL
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/

#include <iostream>
using namespace std;

int main() {

    // input
    int first_line;
    scanf("%d", &first_line);

    char second_line[15];
    scanf("%s", second_line);

    // output
    cout << first_line * 2 << endl;
    cout << second_line << endl;

    return 0;
}
