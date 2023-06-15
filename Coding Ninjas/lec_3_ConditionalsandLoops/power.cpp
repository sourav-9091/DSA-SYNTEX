#include <iostream>
using namespace std;
int main(){
    int base=0;
    int power=0;
    cout << "Enter the base and the power: ";
    cin >> base >> power;

    int answer=1;
    int i=1;
    while(i<=power){
        answer=answer*base;
        i++;
    }
    cout << answer << endl;
    return 0;
}
