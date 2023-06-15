#include <iostream> 
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int i=1;
    int upper=n/2+1;
    int lower=n/2;
    while(i<=upper){
        int space=upper-i;
        int c=1;
        while(c<=space){
            cout << " ";
            c++;
        }

        int j=1;
        while(j<=2*i-1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    i=i-2;
    if(n%2==0){
        i=i-1;
    }
    while(i>=1){
        int space=lower-i+1;
        int j=1;
        while(j<=space){
            cout << " ";
            j++;
        }

        int c=1;
        while(c<=2*i-1){
            cout << "*";
            c++;
        }
        cout << endl;
        i--;
    }

}
