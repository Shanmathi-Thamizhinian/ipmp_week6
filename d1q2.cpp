class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int,int> mpp;
        int n=nums.size();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int prev;
        int mxcount=INT_MIN, count=1;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it==mpp.begin()) prev=it->first;
            else{
                if(it->first==prev+1){
                    count++;
                }
                else{
                    mxcount=max(mxcount,count);
                    count=1;
                }
                prev=it->first;
            }
            cout<<it->first<<' '<<it->second<<endl;
        }
        return max(mxcount,count);
    }
};
