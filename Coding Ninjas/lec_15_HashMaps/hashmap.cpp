#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string, int> ourMap;
    pair<string, int> p("abc", 1);

    //Insert
    ourMap.insert(p);
    ourMap["def"] = 2;

    //Find OR Access
    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("abc")<<endl;

    //Difference Between [] and .at
    //cout<<ourMap.at("ghi")<<endl; //It will result in error as no value for this key is present
    cout<<ourMap["ghi"]<<endl; //It will create a new key-value pair and insert 0 as default in it
    //To check the presence we will not use both 

    //To check the presence we will do like this using count
    if (ourMap.count("ghi") > 0) cout<<"Present"<<endl;
    else cout<<"Not present"<<endl;

    //Size Function
    cout<<"Size :- "<<ourMap.size()<<endl;

    //Delete Function
    ourMap.erase("ghi");
    cout<<"Size :- "<<ourMap.size()<<endl;

    return 0;
}