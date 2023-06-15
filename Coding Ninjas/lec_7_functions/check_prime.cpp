#include <iostream>
using namespace std;
bool check_prime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int n=0;
    cout << "Enter the number, you want to check: ";
    cin >> n;
    
    int output=check_prime(n);
    if(output==0){
        cout << "false" << endl;
    }else{
        cout << "true" << endl;
    }

    return 0;
}
