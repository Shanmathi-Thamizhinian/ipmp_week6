class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int> mpp;
        int left=0,right=0;
        int n=s.size();
        int ans=0;
        while(right<n){
            if(mpp.find(s[right])!=mpp.end()){
                left=max(left,mpp[s[right]]+1);
            }
            mpp[s[right]]=right;
            ans=max(ans,right-left+1);
            right++;

        }
        return ans;
    }
};
