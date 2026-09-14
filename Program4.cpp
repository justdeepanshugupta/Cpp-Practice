#include <iostream>
using namespace std;
//This is my forth Program in which i use Logical Operators.

int main(){
    // NOT operator
    // !  : Logical NOT - reverses the boolean result of a condition.
    cout << !(3 > 1) << endl;
    cout << !(3 < 1) << endl;

    // OR operator
    // || : Logical OR - true when at least one condition is true.
    cout << ((3 < 1) || (5 > 3)) << endl;

    // AND operator
    // && : Logical AND - true only when both conditions are true.
    cout << ((3 > 1) && (3 > 2)) << endl;

    //Unary operator
    // ++ : Increment - increases the value by 1.
    // -- : Decrement - decreases the value by 1.
    int a = 10;
    int b = a++;
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    return 0;

}