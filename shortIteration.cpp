#include<bits/stdc++.h>
using namespace std;

int main()
{
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
    cout<<"Size = "<<value1.size()<<endl;
    for(auto x : value1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
   }

    return 0;
}