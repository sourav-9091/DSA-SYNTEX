#include <iostream>
using namespace std;
bool check_fib(int n){
    int f=1;
    int s=1;
    int c=0;

    if(n==1 || n==0){
        return true;
    }
    while(1){
        if(c==n){
            return true;
        }else if(c>n){
            break;
        }
        c=s+f;
        f=s;
        s=c;
    }
    return false;
}
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    bool check=check_fib(n);
    if(check){
        cout << "True";
    }else{
    cout << "False";
    }
}
