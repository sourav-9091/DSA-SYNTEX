#include <iostream>
using namespace std;
void swap(char& a, char& b){
    char t=a;
    a=b;
    b=t;
}
int len(char *ch){
    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}
void Reverse(char *ch){
    int i=0;
    int j=len(ch)-1;
    while(i<j){
        swap(ch[i], ch[j]);
        j--;
        i++;
    }

    i=0;
    j=0;
    while(1){
        if(ch[i]==' ' || ch[i]=='\0'){
            int k=0;
            while(j<(i-1-k)){
                swap(ch[j], ch[i-1-k]);
                j++;
                k++;
            }
            j=i+1;
            if(ch[j-1]=='\0'){
                return;
            }
        }
        i++;
    }
}
int main(){
    char ch[1000];
    cout << "Enter the string to reverse: ";
    cin.getline(ch, 1000);

    Reverse(ch);
    cout << ch << endl;
    return 0;
}
