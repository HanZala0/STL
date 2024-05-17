#include<bits/stdc++.h>
using namespace std;
int main()
{
    auto q=1;//auto can calculate data type by its own
    cout<<q<<endl;
    vector<int>v={1,2,3,4,5,6,7};
    cout<<"First long method : \n";
    for(auto it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<"\nShort method\n";//it also works for set ,map as well
    for(auto value : v)//value is copy of v's element
    {
        cout<<value<<" ";
    }
    cout<<endl;
    for(auto &value : v)//value is directly v's element
    {
        cout<<value<<" ";
    }
    cout<<endl;
    //vector of pair
    vector<pair<int,int>>vp={{1,2},{4,5}};
    for(auto valuep : vp)
    {
        cout<<valuep.first<<" "<<valuep.second<<endl;
    }
   cout <<"\nfinal short iteration note\n"<<endl;
   vector<int>vf={1,2,3,4,5};
   for(auto value : vf)
   {
    cout<<value<<" ";
   }
   cout<<endl;
   vector<vector<int>> vvf={{1,2,3},{1,4,3,6,4},{1,2}};
   for(auto value1 : vvf)
   {
    cout<<value1[0]<<" ";
   }


    return 0;
}