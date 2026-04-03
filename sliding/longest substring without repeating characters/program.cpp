class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0,res=0,start=0;
        vector<int>lastIdx(256,-1);
        for(int end=0;end<n;end++){
            start=max(start,lastIdx[s[end]]+1);
            res=max(res,end-start+1);
            lastIdx[s[end]]=end;
        }
        return res;
    }
};