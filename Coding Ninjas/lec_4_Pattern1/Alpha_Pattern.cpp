#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=i){
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
