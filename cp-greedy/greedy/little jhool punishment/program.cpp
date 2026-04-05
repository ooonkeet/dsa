#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b,g;
        cin>>n;
        cin>>b>>g;
        if(abs(b-g)>1)
            cout<<"Little Jhool wins!"<<"\n";
        else
            cout<<"The teacher wins!"<<"\n";
    }
    return 0;
}