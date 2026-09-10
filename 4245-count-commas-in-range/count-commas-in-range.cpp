class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int curr=1000;
        int res=0;
        while(curr<=n){
            res+= n-curr+1;
            curr*=1000;
        } return res;
    }
};