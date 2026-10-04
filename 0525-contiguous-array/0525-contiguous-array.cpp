class Solution {
public:

// MY CODE ---->
    int findMaxLength(vector<int>& nums) {
      unordered_map<int,int>mp;
      int maxlen = 0,prefix =0;
      mp[0]=-1;
     for(int i= 0;i<nums.size();i++){
        prefix  += nums[i]==1 ? 1:-1;
     
      if(mp.find(prefix)!=mp.end()){
        maxlen = max(maxlen,i-mp[prefix]);
      }
      else{
        mp[prefix]= i;
      }
     }
      return maxlen;
    }
};
// OPTIMAL CODE ----->

// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> firstIndex(2*n + 1, -2); 
//         int sum = 0, maxLen = 0;
//         firstIndex[n] = -1; 
//         for (int i = 0; i < n; i++) {
//             sum += (nums[i] == 1 ? 1 : -1);
//             int index = sum + n;
//             if (firstIndex[index] != -2)
//                 maxLen = max(maxLen, i - firstIndex[index]);
//             else
//                 firstIndex[index] = i;
//         }
//         return maxLen;
//     }
// };