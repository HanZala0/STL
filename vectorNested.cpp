#include<bits/stdc++.h>
using namespace std;

void vecprint(vector<pair<int,int>> &v)
{
    cout << "Size = "<< v.size()<<endl;
    for(int i=0 ; i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;

    }
}
void vecintprint(vector<int> &v)
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
    //vector of pair
    vector<pair<int,int> > v ={{1,2},{2,3},{3,4}};
    vecprint(v);
    vector<pair<int,int>> v1;
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        v1.push_back({x,y});
        v.push_back({x,y});
    }

    vecprint(v1);
    vecprint(v);
    //vector of array(number of row fixed but number colum variable)
    int N;
    cin >> N;
    vector<int>va[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            cin >> x;
            va[i].push_back(x);
        }

    }
    for(int i=0;i<N;i++)
    {
        vecintprint(va[i]);
    }

    cout<<va[0][2]<<endl;

   

    
    



    return 0;
}