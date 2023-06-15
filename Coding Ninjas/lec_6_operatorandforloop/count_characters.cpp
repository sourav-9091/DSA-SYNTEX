#include <iostream>
using namespace std;
int main(){
    char c;
    c=cin.get();

    int ch=0;
    int d=0;
    int w=0;
    while(c!='$'){
        if(c>=97 && c<=122){
            ch++;
        }else if(c>=48 && c<=57){
            d++;
        }else{
            w++;
        }
        c=cin.get();
    }
    cout << ch << " " << d << " " << w;
    return 0;
}
