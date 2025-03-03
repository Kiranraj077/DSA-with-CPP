class Solution {
public:
    int maxDepth(string s) {
        int mc=0;
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            {
                count++;
                mc=max(mc,count);
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return mc;
    }
};
