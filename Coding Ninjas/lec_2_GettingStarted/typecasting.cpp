#include <iostream>
using namespace std;
int main(){
    int a=10;
    char c=a;
    cout << c << endl;
    //converts it to character and then prints the ascii character to it's corresponding character

    int b=1990;
    char d=b;
    cout << d << endl;
    // Since, 1990 cannot be stored in 1 byte data, the character data type var copies all the binary present in 1 byte
    // of it and prints the corresponding ascii talbe

    float f=1.2;
    int e=f;
    cout << e << endl;
    //basically removes all the digits after decimal
    return 0;
}
