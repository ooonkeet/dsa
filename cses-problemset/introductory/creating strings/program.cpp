#include<bits/stdc++.h>
using namespace std;
int freq[26];
int n;
vector<string> answer;
void build(string s){
    if((int)s.length()==n){
        answer.push_back(s);
        return;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            freq[i]--;
            build(s+char('a'+i));
            freq[i]++;
        }
    }
}
int main(){
    string s;
    cin>>s;
    n=(int)s.length();
    for(char& c:s){
        freq[c-'a']++;
    }
    build("");
    cout<<answer.size()<<endl;
    for(string a:answer){
        cout<<a<<endl;
    }
}