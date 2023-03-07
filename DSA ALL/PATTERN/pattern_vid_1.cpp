#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
