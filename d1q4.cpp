int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    unordered_map<int,int> mpp;
    int count=0;
    int txor=0;
    for(int i=0;i<a.size();i++){
        txor=txor^a[i];
        if(txor==b){
            count++;
        }
        if(mpp.find(txor^b)!=mpp.end()){
            count+=mpp[txor^b];
        }
        mpp[txor]+=1;
    }
    return count;
}
