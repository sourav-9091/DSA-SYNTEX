#include <iostream>
using namespace std;
int main(){
    int r=0;
    cout << "Enter the row number: ";
    cin >> r;

    int i=1;
    while(i<=r){
        int j=i;
        int c=1;
        while(c<=i){
            cout << j;
            j++;
            c++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
