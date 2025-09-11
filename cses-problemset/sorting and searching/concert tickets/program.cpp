#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> ticket(n);
    vector<int>maxprice(m);
    set<pair<int,int>>sortedTickets;
    for(int i=0;i<n;i++)
    {
        cin>>ticket[i];
        sortedTickets.insert(make_pair(ticket[i],i));
    }
    for(int i=0;i<m;i++)
        cin>>maxprice[i];
    for(int i=0;i<m;i++){
        auto match=sortedTickets.lower_bound({maxprice[i]+1,0});
        if(match==sortedTickets.begin())
            cout<<-1<<endl;
        else
        {
            match--;
            cout<<match->first<<endl;
            sortedTickets.erase(match);
        }
    }
    return 0;
}