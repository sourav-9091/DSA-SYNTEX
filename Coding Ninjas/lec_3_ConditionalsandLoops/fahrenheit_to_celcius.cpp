#include <iostream>
using namespace std;
int main(){
    int s=0;
    int e=0;
    int st=0;
    //cout << "Enter the starting, ending and step size: ";
    cin >> s >> e >> st;

    int c=0;
    while(s<=e){
        c=(s-32)*5/9.0;
        cout << s << " " << c << endl;
        s=s+st;
    }
    return 0;
}
