#include <iostream>
using namespace std;
void RemoveConsecutive(char *ch){
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==ch[i+1]){
            for(int j=i;ch[j]!='\0';j++){
                ch[j]=ch[j+1];
            }
            i--;
        }
    }
}
int main(){
    char ch[10000];
    cout << "Enter the string: ";
    cin >> ch;
    RemoveConsecutive(ch);
    cout << ch;
}
