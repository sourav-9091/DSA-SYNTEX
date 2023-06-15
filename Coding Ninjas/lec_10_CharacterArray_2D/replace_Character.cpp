#include <iostream>
using namespace std;
void Replace(char *ch, char a, char x){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]==a){
            ch[i]=x;
        }
        i++;
    }
}
int main(){
    int n=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    char *arr=new char[n];
    cout << "Enter the character array: ";
    cin >> arr;

    char a;
    cout << "Enter the character to replace: ";
    cin >> a;

    char x;
    cout << "Enter the character to repalce with: ";
    cin >> x;
    Replace(arr, a, x);
    cout << arr << endl;
    return 0;
}
