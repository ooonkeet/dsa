#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>events;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        events.push_back(make_pair(start,1));
        events.push_back(make_pair(end,-1));
    }
    sort(events.begin(),events.end());
    int actualCustomers=0,maxCustomers=0;
    for(int i=0;i<events.size();i++)
    {
        actualCustomers+=events[i].second;
        maxCustomers=max(maxCustomers,actualCustomers);
    }
    cout<<maxCustomers<<endl;
    return 0;
}