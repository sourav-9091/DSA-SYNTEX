#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float f=0;
    cout << "Enter the fahrenhiet degrees: ";
    cin >> f;

    float c=(f-32)*5/9;
    cout << "The celcius degrees is " << setprecision(3) << c << endl;
    return 0;
}
