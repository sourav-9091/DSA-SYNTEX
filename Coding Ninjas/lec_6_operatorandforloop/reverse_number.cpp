#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int temp=0;
    for(;n!=0;n=n/10){
        temp=temp*10;
        temp=temp+(n%10);
    }

    cout << temp << endl;
    return 0;
}
