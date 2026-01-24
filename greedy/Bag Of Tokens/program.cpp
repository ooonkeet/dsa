class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,maxScore=0,score=0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                maxScore=max(score,maxScore);
                i++;
            }
            else if(score>=1){
                power+=tokens[j];
                score-=1;
                j--;
            }
            else
                break;
        }
        return maxScore;
    }
};