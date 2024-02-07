class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int more=target-n;
            if(mpp.find(more)!=mpp.end()){
                ans.push_back(mpp[more]);
                ans.push_back(i);
            }
            mpp[n]=i;
        }
        return ans;
    }
};
