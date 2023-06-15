#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int count=1;
    for(int i=1;count<=n;i++){
        int k=(3*i)+2;
        if(k%4==0){
            continue;
            count--;
        }
        cout << k << " ";
        count++;
    }
    return 0;
}
