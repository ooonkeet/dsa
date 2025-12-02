#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;

int main(){
    int n,k;
    cin>>n>>k;
    ordered_set<int> children;
    for(int i=1;i<=n;i++){
        children.insert(i);
    }
    int startPos=0;
    while(children.size()>0){
        startPos%=children.size();
        int positionToRemove=(startPos+k)%children.size();
        startPos=positionToRemove;
        auto t=children.find_by_order(positionToRemove);
        cout<<*t<<" ";
        children.erase(t);
    }
}