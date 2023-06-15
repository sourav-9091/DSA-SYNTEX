#include <iostream>
using namespace std;
void swap(char & a, char & b){
    char t=a;
    a=b;
    b=t;
}
void ReplaceCharacter(char *ch, char x){
    int j=0;
    int i=0;
    while(ch[i]!='\0'){
        if(ch[j]!=x && ch[i]!=x){
            i++;
            j++;
        }else if(ch[j]==x && ch[i]!=x){
            swap(ch[j], ch[i]);
            j++;
        }else{
            i++;
        }
    }
    ch[j]='\0';
}
int main(){
    char ch[10000];
    cout << "Enter the string: ";
    cin >> ch;

    char x;
    cout << "Enter the character to remove:";
    cin >> x;

    ReplaceCharacter(ch, x);
    cout << ch;
    return 0;
}
