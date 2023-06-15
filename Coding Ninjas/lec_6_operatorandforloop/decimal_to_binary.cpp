#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    unsigned long long int i=1;
    unsigned long long int answer=0;
    while(n!=0){
        int temp=n%2;
        answer=(temp*i)+answer;
        cout << answer << endl;
        i=i*10;
        n=n/2;
    }
    cout << answer << endl;
    return 0;
}
