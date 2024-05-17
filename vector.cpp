#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
    cout<< "Size = "<<v.size()<<endl;
    for(int i =0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int main()
{

    vector<int> v;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);//O(1)
       // printVector(v);

    }

    printVector(v);

    vector<int> v1(5);
    printVector(v1);
    v1.push_back(9);
    printVector(v1);

    vector<int> v2(10,3);
    printVector(v2);
    v2.pop_back();
    printVector(v2);

    vector<int> v3 = v2;//O(n)//vector<int> &v3 = v2//O(1)....not copy
    printVector(v3);
    v3.push_back(2);
    printVector(v3);
    printVector(v2);

    vector<string> v10={"wdcuygfwi","fedgfuyc","fduygwecuy"};
    for(int i=0;i<v10.size();i++)
    {
        cout<<v10[i]<<" ";
    }

    return 0;
}