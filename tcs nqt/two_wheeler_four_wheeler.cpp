#include<bits/stdc++.h>
using namespace std;
int main() {
    int w,v;
    cin>>w>>v;
    for (int i=1;i<=v;i++) {
        if (((2*i)+4*(v-i))==w) {
            cout<<"TW = "<<i<<" FW = "<<v-i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}