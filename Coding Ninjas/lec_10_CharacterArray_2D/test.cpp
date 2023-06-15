#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char c[100]="abcd";
    char ch[100]="hello";
    strncpy(c, ch, 5);
    cout << c << endl;
    cout << ch << endl;
}
