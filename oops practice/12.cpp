#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
        vector <int> v;

        cout<<v.capacity()<<endl;
        v.push_back(5);

        v.push_back(6);

        cout<<v[0]<<endl;

        cout<<v.size()<<endl;

        v.pop_back();

        cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    */

    /*pair<int, int> p;
    int x, y;
    cin >> x >> y;
    p = make_pair(x, y);
    cout << p.first << " " << p.second << '\n';

    vector<pair<int, int>> vp;
    vp.push_back({2, 5});
    vp.push_back({23, 55});
    vp.push_back({27, 56});
    vp.push_back({22, 57});
    vp.push_back({29, 58});
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << '\n';
    }*/
    map<string, int> mp;
    mp["abc"] = 3;
    mp["bvc"] = 8;
    cout << mp["abc"];

    unordered_map<string, int> mp1;
    mp1["abc"] = 7;
    mp1["bvc"] = 8;
    cout << mp1["abc"];

    stack<int> s1;
    s1.push(3);
    s1.top();
    cout << s1.top();

    queue<int> q1;
    return 0;
}