#include <iostream>
#include <cstring>
using namespace std;
void smallestString(char *input, char *output){
    int i=0;
    int j=0;
    int ilen=strlen(input);
    int len=INT_MAX;
    int mins=0;
    int mine=0;

    while(i<ilen){
        if(input[j]!=' ' && input[j]!='\0'){
            j++;
        }else{
            int temp=j-i;
            if(len>temp){
                mins=i;
                mine=j-1;
                len=temp;
            }
            j++;
            i=j;
        }
    }
    
    int c=0;
    for(int k=mins;k<=mine;k++){
        output[c]=input[k];
        c++;
    }
    output[c]='\0';
}
int main(){
    char input[1000];
    char output[1000];
    cout << "Enter the string: ";
    cin.getline(input, 1000);
    smallestString(input, output);
    cout << output << endl;
    return 0;

}
