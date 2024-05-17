#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<string>vs;
    int n;
    string s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        vs.push_back(s);
    }

    cout << "size "<< vs.size() << endl;
    for(int i=0;i<vs.size();i++)
    cout << vs[i] <<" ";



    return 0;
}
