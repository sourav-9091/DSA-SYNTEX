#include <iostream>
using namespace std;
void swap(int& a, int& b){
    int t=a;
    a=b;
    b=t;
}
void Reverse(char *ch){
    int start=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i+1]=='\0'||ch[i+1]==' '){
            for(int j=i;j>start;j--){
                swap(ch[j], ch[start]);
                start++;
            }
            start=i+2;
        }
    }
}
int main(){
    char ch[10000];
    cout << "Enter the string to reverse word wise: ";
    cin.getline(ch, 10000);
    Reverse(ch);
    cout << ch << endl;
}
