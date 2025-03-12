class Solution {
public:
    string centerexpansion(string str,int left,int right){
        int l=str.size();
        while(left>=0&&right<l&&str[left]==str[right]){
            left--;
            right++;
        }
        return str.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
       int n=s.size();
       string evenpal;
       string oddpal;
       string longest;
       for(int i=0;i<n;i++){
          evenpal=centerexpansion(s,i,i+1);
          if(evenpal.size()>longest.size()){
            longest=evenpal;
          }
          oddpal=centerexpansion(s,i,i);
           if(oddpal.size()>longest.size()){
            longest=oddpal;
          }

       }
       return longest;
    }
};
