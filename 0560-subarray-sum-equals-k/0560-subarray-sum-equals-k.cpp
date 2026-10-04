class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         int cnt =0;
        int sum=0;
        mp[sum]=1;
        for( auto it : nums){
           sum+=it;
           int total = sum-k;
           if(mp.find(total)!=mp.end()){
            cnt+=mp[total];
           }
           mp[sum]++;

        }
        return cnt;

    }
};