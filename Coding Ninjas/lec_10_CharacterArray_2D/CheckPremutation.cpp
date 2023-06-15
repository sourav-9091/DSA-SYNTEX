#include <iostream>
#include <cstring>
#define CHARS 256
using namespace std;
bool checkPremutation(char *ch, char *ch1){
    int len=strlen(ch);
    int len1=strlen(ch1);
    if(len1!=len){
        return false;
    }
    int arr[CHARS]={0};
    int arr1[CHARS]={0};

    for(int i=0;i<len;i++){
        arr[ch[i]]++;
        arr1[ch1[i]]++;
    }

    for(int i=0;i<CHARS;i++){
        if(arr[i]!=arr1[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int size=INT_MAX;
    char *ch=new char[size];
    char *ch1=new char[size];
    cout << "Enter the chraracter array: ";
    cin >> ch;

    cout << "Enter the second character array: ";
    cin >> ch1;
    int output=checkPremutation(ch, ch1);
    if(output){
        cout << "true";
    }else {
        cout << "False";
    }
    return 0;
}
