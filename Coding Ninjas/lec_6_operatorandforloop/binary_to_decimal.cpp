#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int i=0;
    int answer=0;
    while(n!=0){
        int temp=n%10;
        if(i==0){
            i++;
        }else{
            i=i*2;
        }

        answer=(temp*i)+answer;
        n=n/10;
    }
    cout << answer << endl;
    return 0;
}
