#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
void pairStar(char input[])
{
    int l = strlen(input);
    if (input[0] == input[1])
    {
        for (int i = l; i > 0; i--)
            input[i + 1] = input[i];
        input[1] = '*';
        pairStar(input + 2);
    }
    else if (input[1] != '\0')
        pairStar(input + 1);
}