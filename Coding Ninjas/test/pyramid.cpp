#include<iostream>
using namespace std;

int main(){

  // Write your code here  
  int n=0;
  cin >> n;

  int i=1;
  while(i<=n){
    int spc=n-i;
    int c=1;
    while(c<=spc){
      cout << " ";
      c++;
    }

    int j=1;
    while(j<=i){
      cout << i-j+1;
      j++;
    }

    int k=2;
    while(k<=i){
      cout << k;
      k++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
