#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p1,p2;
    p1 = make_pair(2,"abc");
    p2 ={2,"abcs"};
    cout << p2.first << p2.second << endl;
    pair<int ,string> p3 = p1;
    p3.first = 3;
    cout << p1.first << p1.second << endl;
    cout << p3.first << endl;
    pair<int,string> &p4 =p1;
    p4.first=5;
    cout << p1.first << " "<< p1.second << endl;
    cout << p4.first << " "<< p4.second << endl;





    // a[],b[]

    pair<int,int>p_array[3];

    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    
    swap(p_array[0],p_array[2]);
    for(int i=0; i< 3;i++)
    {
        cout << p_array[i].first << " " << p_array[i].second<<endl;
    }
    //cin >> p.first 
    // cout << p.first
    pair <int ,string> pi;
    cin >> pi.first >> pi.second;
    cout << pi.first <<" "<<pi.second;

    return 0;
}