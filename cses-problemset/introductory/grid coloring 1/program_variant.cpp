#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    cin>>h>>w;
    vector<string> a(h);
    for(string &row:a)
        cin>>row;
    for(int row=0;row<h;row++){
        for(int col=0;col<w;col++){
            if ((row+col)%2==0)
                a[row][col]={a[row][col]=='A'?'C':'A'};
            else
                a[row][col]={a[row][col]=='B'?'D':'B'};
            // set<int> s;
            // if(row!=0)
            //     s.insert(a[row-1][col]);
            // if(col!=0)
            //     s.insert(a[row][col-1]);
            // s.insert(a[row][col]);
            // for(char x='A';x<='D';x++){
            //     if(!s.count(x)){
            //         a[row][col]=x;
            //         break;
            //     }
            // }
        }
        cout<<a[row]<<endl;
    }
    return 0;
}
