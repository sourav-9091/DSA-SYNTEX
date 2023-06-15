#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char ch[100]="abcd";
    for(int i=0;ch[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout << ch[j];
        }
        cout <<endl;
    }
    return 0;
}
