#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> freq(26);
    string s;
    cin>>s;
    int n=s.length();
    for(char& c:s)
        freq[c-'A']++;
    //bool already_mid=false;
    //int taken=0;
    string half;
    char mid='?';
    for(int c=0;c<26;c++){
        if(freq[c]%2==1){
            if(n%2==0||mid!='?'){
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
            else{
                //already_mid=true;
                mid=c+'A';
            }
            freq[c]--;
        }
        half+=string(freq[c]/2,'A'+c);//string casting like this provides (length,character to be repeated)
        //for(int i=0;i<half;i++){
            //s[taken+i]=s[n-i-taken-1]='A'+c;
        //}
        //taken+=half;
    }
    cout<<half;
    if (mid!='?')
        cout<<mid;
    reverse(half.begin(),half.end());
    cout<<half<<endl;
    return 0;
}