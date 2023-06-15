#include <iostream>
using namespace std;
void Compress(char *ch){
    int i=0;
    int j=0;
    int c=1;
    while(ch[i]!='\0'){
        if(ch[j]==ch[j+1]){
            j++;
            c++;
        }else{
            if(c>1){    
            i++;
            ch[i]=c+48;
            cout << c << endl;
            c=1;
            }

           i++;
           ch[i]=ch[j+1];
           j++;
        }
    }
}
int main(){
    char ch[1000];
    cout << "Enter the string: ";
    cin >> ch;

    Compress(ch);
    cout << ch << endl;
    return 0;
}
