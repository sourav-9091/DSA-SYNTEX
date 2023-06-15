#include <iostream>
using namespace std;
void print_n(int n){
    int i=1;
    while(i<=n){
        cout << i << endl;
        i++;
    }
}
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    print_n(n);
    return 0;
}
