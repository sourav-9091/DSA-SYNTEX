#include <iostream>
using namespace std;
void print_Substring(char ch[]){
    for(int i=0;ch[i]!='\0';i++){
        for(int j=i;ch[j]!='\0';j++){
            for(int k=i;k<=j;k++){
                cout << ch[k];
            }
            cout << endl;
        }
    }
}
int main(){
    char ch[]="abcd";
    print_Substring(ch);
    cout << ch << endl;
    return 0;
}
