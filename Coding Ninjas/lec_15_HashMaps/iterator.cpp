#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{

    //UnorderedMap's Iterators

    unordered_map<string, int> ourMap;
    ourMap["abc"] = 1;
    ourMap["abc1"] = 2;
    ourMap["abc2"] = 3;
    ourMap["abc3"] = 4;
    ourMap["abc4"] = 5;
    ourMap["abc5"] = 6;

    unordered_map<string, int>::iterator it = ourMap.begin();

    while (it != ourMap.end()) {
        cout<< "Key : "<< it->first << " Value :" << it->second <<endl; 
        it++;
    }

    //Find Function in UnorderedMap()

    unordered_map<string, int>::iterator it2 = ourMap.find("abc");
    cout<<it2->first<<endl;

    //We could use erase function as well to delete a value using iterator

    ourMap.erase(it2);
    // ourMap.erase(it2, it2+5); //it will delete in range

    //Vector's Iterator

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator it1 = v.begin();

    while(it1 != v.end()) {
        cout<<"Value : "<< *it1 <<endl;
        it1++;
    }

    return 0;
}