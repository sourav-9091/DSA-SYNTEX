#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int spc=n-i;
        int c=1;
        while(c<=spc){
            cout << " ";
            c++;
        }

        int j=1;
        while(j<=i){
            //cout << '*';
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
