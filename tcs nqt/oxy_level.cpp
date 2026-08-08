#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    float sum=0,cnt=0,avg;
    for(int i=0;i<n;i++) {
        if (v[i]<90)
            continue;
        sum+=v[i];
        cnt++;
    }
    avg=trunc((sum/cnt)*100.0)/100.0;
    cout<<avg<<endl;
    return 0;
}