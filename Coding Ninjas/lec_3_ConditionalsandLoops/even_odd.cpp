#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the value: ";
    cin >> n;

    int even=0;
    int odd=0;
    int rem=0;
    while(n!=0){
        rem=n%10;
        if(rem%2==0){
            even=even+rem;
        }else{
            odd=odd+rem;
        }
        n=n/10;
    }
    cout << even << " " << odd;
    return 0;
}
