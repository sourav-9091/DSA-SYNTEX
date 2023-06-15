#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int i=2;
    bool prime=1;
    while(i<sqrt(n)){
        if(n%i==0){
            cout << "Not Prime" << endl;
            prime=0;
            break;
        }
        i=i+1;
    }
    if(prime){
        cout << "Prime" << endl;
    }
    return 0;
}
