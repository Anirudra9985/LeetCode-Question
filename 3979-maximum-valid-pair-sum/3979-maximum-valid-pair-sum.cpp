class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long long ans =LLONG_MIN;
        long long  maxi=LLONG_MIN;
        int n= nums.size();
        int i=0;
        for(int j=k;j<n;j++){
            maxi =max(maxi,(long long)nums[i++]);
            ans = max(ans,maxi+nums[j]);
        }
return (int)ans;
    }
};