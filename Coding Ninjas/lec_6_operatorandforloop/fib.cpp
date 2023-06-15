#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    if(n==1 || n==2){
        cout << "1";
    }else{
        int s=1;
        int f=1;
        int c=0;
        for(int i=3; i<=n;i++){
            c=s+f;
            f=s;
            s=c;
        }
        cout << c << endl;
    }
    return 0;
}
