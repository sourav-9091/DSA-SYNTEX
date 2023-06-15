#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int m=0;
    cout << "Enter your choice: ";
    cin >> m;

    if(m==1){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        cout << sum;
    }else if(m==2) {
        unsigned long int prod=1;
        for(int j=1;j<=n;j++){
            prod=prod*j;
        }
        cout << prod;
    }else{
        cout << "-1";
    }
    return 0;
}
