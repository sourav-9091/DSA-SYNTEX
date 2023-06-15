#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int sum=0;
    int i=0;
    while(i<n){
        sum=sum+i;
        i=i+2;
    }
    cout << sum << endl;
    return 0;
}
