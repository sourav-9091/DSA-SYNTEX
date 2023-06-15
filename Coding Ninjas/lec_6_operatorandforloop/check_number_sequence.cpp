#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number: ";
    cin >> n;

    int k=0;
    int i=1;
    int curr;
    int next;
    cin >> curr;
    while(i<n){
        cin >> next;
        if(curr>next && k==0){
            k++;
            cout << curr << " " << next << " " << k;
        }
        if(curr<next && k==1){
            cout << curr << " " << next << " " << k;
            k++;
        }
        if(curr>next && k==2){
            cout << "false";
            break;
        }
        if(curr==next){
            cout << "false";
            break;
        }
        curr=next;
        i++;
    }
    if(i==n){
        cout << "true";
    }
    return 0;

}
