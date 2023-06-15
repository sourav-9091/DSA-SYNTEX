#include <iostream>
using namespace std;
int len(char *arr){
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
void reverse(char *arr){
    int i=0;
    int j=len(arr)-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    char arr[10000];
    cin.getline(arr, 10000);
    reverse(arr);
    cout << arr << endl;
    return 0;
}
