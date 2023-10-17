#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
int stringToNumber(char input[]) {
    static int sum = 0;
    int l = strlen(input);
    sum = sum*10 + (input[0] - 48);
    if (input[1] != '\0') stringToNumber(input+1);
    else return sum;
}