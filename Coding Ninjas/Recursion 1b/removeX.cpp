// Given a string, compute recursively a new string where all 'x' chars have been removed.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}


void removeX(char input[]) {
    int l = strlen(input);

    if (input[0] == 'x'){
        for(int i=0; i<l; i++){
            input[i]= input[i+1];
        }
        removeX(input);
    } else if (input[0] != '\0') removeX(input+1);
    else return;
}
