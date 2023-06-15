#include <iostream>
using namespace std;
void largest(int **arr, int n, int m){
    //n=number of rows
    //m=number of cols

    int largest_row=INT_MIN;
    int index_row=0;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        if(sum>largest_row){
            largest_row=sum;
            index_row=i;
        }
    }

    int largest_col=INT_MIN;
    int index_col=0;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
           sum = sum + arr[j][i]; 
        }
        if(sum>largest_col){
            largest_col=sum;
            index_col=i;
        }
    }

    if(largest_col>largest_row){
        cout << "Column" << " " << index_col << " " << largest_col;
    }else{
        cout << "Row" << " " << index_row << " " << largest_row;
    }
    cout << endl;
}

int main(){
    int t=0;
    cout << "Enter the number of test cases to run: ";
    cin >> t;

    while(t){
        int n=0;
        cout << "Enter the number of rows: ";
        cin >> n;

        int m=0;
        cout << "Enter the nubmer of cols: ";
        cin >> m;

        int ** arr= new int*[n];

        cout << "Enter the array elements" << endl;
        for(int i=0;i<n;i++){
            arr[i]=new int[m];
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        largest(arr, n, m);

        for(int i=0;i<n;i++){
            delete [] arr[i];
        }
        delete [] arr;
        t--;
    }
    return 0;
}
