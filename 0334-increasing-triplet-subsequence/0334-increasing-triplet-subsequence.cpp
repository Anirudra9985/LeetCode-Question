// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums, int n) {
//         if(n<3) return false;
//        int left = INT_MAX;
//        int mid =INT_MAX;
       
//        for(int i =0;i<n;i++){
//         if(nums[i]<=left){
           
//            left = nums[i];
      
//         }
//         else if(nums[i]<=mid){
//             mid = nums[i];
            
//         }
//         else{
//             return true;
//         }
//        }
//        return false;
//     }
// };

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // int n =nums.size();
        // if (n < 3) return false;

        // int left = INT_MAX;
        // int mid  = INT_MAX;

        // for (int i = 0; i < n; i++) {
        //     if (nums[i] <= left) {
        //         left = nums[i];
        //     }
        //     else if (nums[i] <= mid) {
        //         mid = nums[i];
        //     }
        //     else {
        //         // nums[i] > mid > left
        //         return true;
        //     }
        // }
        // return false;

        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int n:nums){
            if(n<=min1){
                min1 = n;
            }
             else if(n<=min2){
                min2 = n;
            }
            else{
                return true;
            }
        }
          return false;
    }
};
