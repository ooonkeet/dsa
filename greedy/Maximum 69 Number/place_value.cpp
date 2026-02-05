class Solution {
public:
    int maximum69Number (int num) {
        int plv=0,plsix=-1,cpy=num;
        while(cpy>0){
            if(cpy%10==6)
                plsix=plv;
            cpy/=10;
            plv++;
        }
        if(plsix==-1)
            return num;
        else
            return num+3*pow(10,plsix);
    }
};