#include<bits/stdc++.h>
using namespace std;

void vecpri(vector<int>&v)
{
    cout<<"Size = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    //vector of vector(number of row and column dynamic)
    int N,i,j,x;
    vector<vector<int>> vv;
    cin >>N;
    for(i=0;i<N;i++)
    {
        int n,x;
        cin>>n;
        vector<int>tp;
        for(j=0;j<n;j++)
        {
            cin >> x;   
            tp.push_back(x);
        }
        vv.push_back(tp);
    
    }

    vv[0].push_back(7);
    vv.push_back({10,20,30,40});
    vv.push_back(vector<int>());

    for(i=0;i<vv.size();i++)
    {
        vecpri(vv[i]);
    }

    cout<<vv[0][1]<<endl;

    vector<vector<int>>vv2;
    int NN,nn;
    cin >>NN;
    for(int i=0;i<NN;i++)
    {
        cin >> nn;
        vv2.push_back(vector<int>());
        for(int j=0;j<nn;j++)
        {
            cin >> x;
            vv2[i].push_back(x);
        }
    }

    for(int i=0;i<vv2.size();i++)
    {
        vecpri(vv2[i]);
    }




    return 0;
}