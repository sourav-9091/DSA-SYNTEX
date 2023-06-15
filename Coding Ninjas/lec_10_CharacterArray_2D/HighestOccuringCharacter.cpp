#include <iostream>
#define CHAR 256
using namespace std;
char Highfrequency(char *ch){
    int freq[CHAR]={0};
    for(int i=0;ch[i]!='\0';i++){
        int x=ch[i];
        freq[x]++;

    }

    int max=0;
    int maxchar=0;
    for(int i=0;i<CHAR;i++){
        if(freq[i]>max){
            max=freq[i];
            maxchar=i;
        }
    }
    return maxchar;
}
int main(){
    char ch[1000];
    cout << "Enter the string: ";
    cin >> ch;
    char output=Highfrequency(ch);
    cout << output << endl;
    return 0;

}
