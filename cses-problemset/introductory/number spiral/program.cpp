#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int row,col;
        cin>>row>>col;
        int layer=max(row,col);
        if(layer%2==1){
            swap(row,col);
        }
        if(col==layer)
            cout<<(long long)(layer-1)*(layer-1)+1+row-1<<endl;
        else {
            assert(row==layer);
            cout<<(long long)layer*layer-(col-1)<<endl;
        }
    }
    return 0;
}