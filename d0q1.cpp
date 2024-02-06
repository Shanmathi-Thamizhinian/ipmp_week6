//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    vector<int> countFreq(int a[], int n) 
    { 
        // Complete the function
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int freq=0;
        for(auto it=m.begin(); it!=m.end();it++){
           // cout<<it->first<<' '<<it->second;
           freq+=it->second;
           ans.push_back(freq);
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    vector<int> v;
	    v = ob.countFreq(arr, n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends
