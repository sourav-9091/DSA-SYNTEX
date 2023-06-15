#include <iostream>
using namespace std;
int main(){
    int p=0;
    int r=0;
    int t=0;

    cout << "Enter the Principal Amount, Rate of Interest, and Time period: ";
    cin >> p >> r >> t;

    float si=p*r*t/100.0;
    cout << si << endl;
    return 0;
}
