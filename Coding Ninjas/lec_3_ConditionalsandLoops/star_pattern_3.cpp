#include <iostream>
using namespace std;
int main(){
    int r=0;
    cout << "Enter the row number: ";
    cin >> r;

    int i=0;
    while(i<=r){
        int c=1;
        int space=r-i;
        while(c<=space){
            cout << " ";
            c++;
        }

        c=1;
        while(c<=(2*i-1)){
            cout << '*';
            c++;
        }
        i++;
    }
    return 0;
}
