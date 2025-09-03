#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    vector<int> freq(26);
    for(char& c:s)
        freq[c-'A']++;
    string answer;
    while((int)answer.length()<n) {
        bool anything=false;
        pair<int,int> big{0,0};
        for (int x:freq) {
            if (x>big.first)
                big={x,big.first};
            else if (x>big.second)
                big.second=x;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0 && (answer.empty()||answer.back()!=('A'+i))){
                freq[i]--;
                answer+=('A'+i);
                int suffix=n-(int)answer.length();
                bool can_finish=true;
                if (freq[i]>suffix/2){
                    can_finish=false;
                }
                if ((freq[i]+1==big.first?big.second:big.first)>(suffix+1)/2){
                    can_finish=false;
                }
                // for(int j=0;j<26;j++){
                //     if(i!=j){
                //         if(freq[j]>(suffix+1)/2){
                //             can_finish=false;
                //             break;
                //         }
                //     }
                //     else{
                //         if(freq[j]>suffix/2){
                //             can_finish=false;
                //             break;
                //         }
                //     }
                // }
                if(can_finish){
                    anything=true;
                    break;
                }
                else{
                    freq[i]++;
                    answer.pop_back();
                }
            }
        }
        if(!anything)
            break;
    }
    if(answer.empty())
        cout<<"-1"<<endl;
    else
        cout<<answer<<endl;
    return 0;
}