#include<bits/stdc++.h>
using namespace std;
int count(int n,int k,int arr[][2])
{
    int value=0;
    map<pair<int,int>,int> m;
    for(int i=0;i<n;i++)
    {
        m[{arr[i][0],arr[i][1]}]+=1;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>k)
        value++;
    }
    auto it =m.begin();
    while (it != m.end()) {
        cout << "Key: " << it->first.first<<it->first.second;
        cout << ", Value: " << it->second << endl;
        ++it;
    }return value;
}
int main()
{
    int noofpicks=0,noofplayer=8;
   // cin>>noofpicks;
    //cin>>noofplayer;
    int arr[noofplayer][2]={{10,6},{3,1},{10,6},{10,6},{4,5},{3,1},{3,5},{3,1}};
    for(int i=0;i<noofplayer;i++)
    {
        cout<<arr[i][0]<<" ";
        cout<<arr[i][1]<<endl;
    }
    cout<<count(noofplayer,noofpicks,arr);
}