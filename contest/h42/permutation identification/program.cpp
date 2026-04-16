#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v={0,1};
    auto ask=[&](int i, int j){
        cout << "? 1 " << i << ' ' << j << endl;
        cout.flush();
        int r;
        cin >> r;
        return r;
    };
    int minas=ask(1,2);
    vector<int> a(n,-1);
    for(int i=2;i<n;i++){
        int r=ask(v[0]+1,i+1);
        if(r<minas){
            a[i]=r;
        }
        else if(r==minas){
            a[v[0]]=minas;
            v[0]=i;
            if(v[0]>v[1]) swap(v[1],v[0]);
            minas=ask(v[0]+1,v[1]+1);
        }
        else{
            a[v[1]]=minas;
            v[1]=i;
            if(v[0]>v[1]) swap(v[1],v[0]);
            minas=ask(v[0]+1,v[1]+1);
        }
    }
    cout << "? 2 " << v[0] + 1 << endl;
    cout.flush();
    cin >> a[v[0]];
    int op=v[0];
    if(a[op]!=n){
        op=v[1];
    }
    a[op]=n;

    for(int i=0;i<n;i++){
        if(a[i]==-1){
            if(i<op){
                a[i]=ask(i+1,op+1);
            } else {
                a[i]=ask(op+1,i+1);
            }
        }
    }

    cout << "! ";
    for(int i=0;i<n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
