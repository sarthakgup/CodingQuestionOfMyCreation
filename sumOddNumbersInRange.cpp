//Created by Anvit Raju and Sarthak Gupta

//Find the sum of every other odd number in the range from a to b where a and b are non-negative
//No helper functions allowed

#include <iostream>

using namespace std;

int summingAlternatingRange(int a, int b) {
    if (a-b > 0) {
        return 0;
    }
    if (a%2 == 0) {
        return summing(a+1,b);
    }
    else {
        return a+summing(a+4,b);
    }
}

int main()
{
    int a = 5;
    int b = 5;
    int x = summing(a,b);
    cout << x << endl;
    return 0;
}
