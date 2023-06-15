#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i=1;
    //This will iterate through the value 1 to n
    while(i<=n){
        int j=1;
        //This will print the column number
        //or we can say iterate throug 1 to ith value
        while(j<=i){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
