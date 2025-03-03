class Solution {
public:
    int reverse(int num){
        long long res=0;
        while(num!=0){
            int d=num%10;
            res=(res*10)+d;
            num=num/10;
        }
        return res;
    }
    bool isPalindrome(int x) {
        long long rev_num=reverse(x);
        if(x<0){
            return false;
        }
        if(x==rev_num){
            return true;
        }
        else{
            return false;
        }
    }
};
