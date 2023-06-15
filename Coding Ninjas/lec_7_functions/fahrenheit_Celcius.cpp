#include <iostream>
using namespace std;
void ftc(int start, int end, int step){
    int c=0;
    while(start<=end){
        c=(start-32)*(5.0/9);
        cout << start << " " << c << endl;
        start=start+step;
    }
}

int main(){
    int start;
    int end;
    int step;
    cout << "Enter the begining fahrenheit value, ending value, and step size: ";
    cin >> start >> end >> step;

    ftc(start, end, step);
    return 0;
}
