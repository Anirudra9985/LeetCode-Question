class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        // int l=0,e=nums.size()-1;
        // while(s<=e){
        //     int mid = s+(e-s)/2;
        //     for(int i=0;i<n;i++){
        //         if(nums[mid]==target){

        //         }
        //     }
        // }
        int cntless =0,cntgr = 0;
        for(int it :nums){
            if(it<target){
              cntless++;
            }
             else if(it>target){
                cntgr++;
            }
        }
        vector<int>ans;
        int n = nums.size() - cntless-cntgr;
        for(int i =0 ;i<n;i++){
            ans.push_back(i+cntless);
        }
        return ans;
    }
};