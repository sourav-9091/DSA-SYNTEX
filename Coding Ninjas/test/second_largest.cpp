#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n = 0;
    cin >> n;

    int sl=INT_MIN;
    int l=INT_MIN;
   
    int i=1;
    int m=0;
    cin >> l;
    while(i<n){
        cin >> m;
        if(m>l){
            sl=l;
            l=m;
        }else if(m>sl && m<l){
            sl=m;
        }
        i++;
    }
    cout << sl;
    return 0;
}
