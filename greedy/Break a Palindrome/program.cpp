class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()==1)
            return "";
        int flag=0;
        for(int i=0;i<palindrome.length()/2;i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                flag=1;
                break;
            }
        }
        if(flag==0)
            palindrome[palindrome.length()-1]='b';
        return palindrome;
    }
};