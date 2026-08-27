class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
    //   long long count =0;
    //   long long streak =0;
    //   for(int i=0;i<nums.size();i++){
    //     if(nums[i]==0){
    //         streak++;
    //         count+=streak;
    //     }
    //     else{
    //         streak =0;
    //     }
    //   }
    //   return count;

      long long  cnt =0;
      long long  st =0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            st++;
            cnt+=st;
        }
        else{
            st=0;
        }
      }
      return cnt;
    }
};