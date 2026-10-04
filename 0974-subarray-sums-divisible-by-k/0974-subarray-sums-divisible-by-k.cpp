class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // 4 5 0 -2 -3 1
        // 4 9 9 7 4 5
        // at every index , we have its running sum , and we need a part in his left which has same remainder as sum % k because it is simple math gandu
        unordered_map<int,int> map; // store the remainders in map of running sum for every i
        map[0]++;
        int sum = 0 , ans = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];

            int rem = ((sum % k) + k) % k; // handles both pos and neg sum

            if(map.find(rem) != map.end()){
                ans += map[rem];
            }
            map[rem]++; 
        }
        return ans;
    }
};