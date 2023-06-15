#include <iostream>
using namespace std;
void trimSpaces(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]==' '){
            int j=i;
            while(1){
                ch[j]=ch[j+1];
                if(ch[j]=='\0'){
                    i--;
                    break;
                }
                j++;
            }
        }
        i++;
    }
}
int main(){
    char ch[1000];
    cin.getline(ch, 1000);
    trimSpaces(ch);
    cout << ch << endl;
    return 0;
}
