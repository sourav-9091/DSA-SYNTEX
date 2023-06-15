#include <iostream>
using namespace std;
int len(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
bool checkPalindrome(char str[]) {
    // Write your code here
    int i=0;
    int j=len(str)-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    char ch[10000];
    cout << "Enter the string: ";
    cin >> ch;
    bool out=checkPalindrome(ch);
    if(out==1){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}
