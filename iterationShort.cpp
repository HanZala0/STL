#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    vector<int> :: iterator it;
    cout<<"First long method : \n";
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<"\nShort method\n";//it also works for set ,map as well
    for(int value : v)//value is copy of v's element
    {
        cout<<value<<" ";
    }
    cout<<endl;
    for(int &value : v)//value is directly v's element
    {
        cout<<value<<" ";
    }
    cout<<endl;
    //vector of pair
    vector<pair<int,int>>vp={{1,2},{4,5}};
    for(pair<int,int>valuep : vp)
    {
        cout<<valuep.first<<" "<<valuep.second<<endl;
    }
   


    return 0;
}