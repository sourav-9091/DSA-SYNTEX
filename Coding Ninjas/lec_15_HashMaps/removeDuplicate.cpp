#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicate(int *a, int size){
    vector<int> output;
    unordered_map<int, bool> seen;

    for(int i=0; i<size; i++){
        if (seen.count(a[i]) > 0) continue;
        seen[a[i]] = true;
        output.push_back(a[i]);
    }

    return output;
}

int main()
{
    int arr[] = {1,2,1,3,4,4,5,8,7,7,3};
    vector<int> ans = removeDuplicate(arr, 11);

    for(int i=0; i<9; i++) cout<<ans[i]<<endl;
    return 0;
}