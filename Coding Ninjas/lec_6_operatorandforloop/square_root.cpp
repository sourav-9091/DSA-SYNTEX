#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int i=1;
    while(n/(i*i)!=0){
        i++;
    }
    i--;
    cout << i << endl;
    return 0;
}
