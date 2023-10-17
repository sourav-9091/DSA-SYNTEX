// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14"

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

void replacePi(char input[])
{
    int l = strlen(input);

    if (input[0] == 'p' && input[1] == 'i'){
            for(int i=l; i>1; i--){
                input[i+2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input+4);
    }

    else if (input[1] != '\0') replacePi(input+1);

    else return;
    
    }