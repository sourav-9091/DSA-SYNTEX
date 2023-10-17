#include <iostream>
#include<cstring>
using namespace std;

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}

void removeConsecutiveDuplicates(char *input) {
  if (input[0] == '\0') return;
  int l = strlen(input);

  if (input[0] == input[1]){
    for(int i=0; i<l; i++){
      input[i] = input[i+1];
    }
    removeConsecutiveDuplicates(input);
  }
  else removeConsecutiveDuplicates(input+1);
}