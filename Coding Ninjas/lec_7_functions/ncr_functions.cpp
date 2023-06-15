#include <iostream>
using namespace std;
int getfactorial(int n){
    int i=1;
    int ans=1;
    while(i<=n){
        ans=ans*i;
        i++;
    }
    return ans;
}
int main(){
    int n=0;
    int r=0;
    cout << "Enter n and r: ";
    cin >> n >> r;

    int output_n=getfactorial(n);
    int output_r=getfactorial(r);
    int output_n_r=getfactorial(n-r);

    int answer=output_n/(output_r*output_n_r);
    cout << answer << endl;
    return 0;
}
