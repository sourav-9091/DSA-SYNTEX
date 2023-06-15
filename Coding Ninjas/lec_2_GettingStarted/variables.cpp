#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=15;
    int c=a+b;

    cout << c << endl;

    char d='x';
    cout << d << endl;

    float f= 1.12;
    bool g= true;

    int size=sizeof(g);
    int size1=sizeof(f);

    cout << size << endl;
    cout << size1 << endl;
    return 0;
}
