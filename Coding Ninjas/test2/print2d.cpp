#include <iostream>
using namespace std;
void print(int input[][3], int row, int col){
   for(int i=0;i<row;i++){
		for(int k=0;k<row-i;k++){
			for(int j=0;j<col;j++){
				cout << input[i][j] << " ";
			}
			cout << endl;
		}
	} 
}
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    print(arr, 2, 3);
    return 0;
}
