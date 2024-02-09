class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        map<int,pair<int,int>> mpp;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                mpp[arr[i]+arr[j]]={i,j};
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum=arr[i]+arr[j];
                if(mpp.find(target-sum)!=mpp.end()){
                    pair<int,int> p=mpp[target-sum];
                    if(p.first!=i && p.second!=j && p.first!=j && p.second!=i){
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[p.first]);
                        temp.push_back(arr[p.second]);
                        sort(temp.begin(),temp.end());
                       // if(ans.size()==0 || ans.back()!=temp){
                            ans.push_back(temp);
                        //}
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        vector<vector<int>> res;
        if(ans.size()==1){
            res.push_back(ans[0]);
            return res;
        }
        vector<int> curr=ans[0];
        res.push_back(ans[0]);
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=curr){
                res.push_back(ans[i]);
                curr=ans[i];
            }
        }
        return res;
    }
};
