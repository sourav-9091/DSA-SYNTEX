#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=2;i<=n;i++){
        bool t=false;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                t=true;
                break;
            }
        }
        if(!t){
            cout << i << endl;
        }
    }
    return 0;
}
