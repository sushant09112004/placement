// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int ,int> np;
//         for (int i =0 ; i < nums.size() ; i++){
//             int complement = target - nums[i];

//             if (np.find(complement) != np.end()){
//                 return{np[complement] , i};
//             }
//             np[nums[i]] = i;
//         }
//         return {};
//     }
// };