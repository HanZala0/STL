#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    cout<<"First method"<<endl;//it works for vector but not set and map
    vector<int> v ={1,2,3,4,5,6,7};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nSecond method\n";//it works fro vector but not set and map
    vector<int> ::iterator it = v.begin();
    cout<<"velue of v.begin() : "<<(*it)<<endl;
    cout<<"value of v.end() : "<<(*(v.end()))<<endl;
    cout<<(*it)<<" "<<(*(it+1))<<endl;
    for(it=v.begin();it<v.end();it=it+1)
    {
        cout<<(*it)<<" ";
    }
    cout<<"\nThird method\n";// it works for vector,set,map;
    for(it=v.begin();it!=v.end();it++)//it=it+1:next location,it++:next iterator so for set and map it++ will work
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //vector of pair
    vector<pair<int,int>>vp={{1,2},{2,3},{3,4}};
    vector<pair<int,int> >::iterator it1;
    for(it1 = vp.begin();it1!=vp.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }
    for(it1=vp.begin();it1!=vp.end();it1++)
    {
        cout<<(it1->first)<<" "<<(it1->second)<<endl;//(*it1).first equal (it->first)
    }


    return 0;
}