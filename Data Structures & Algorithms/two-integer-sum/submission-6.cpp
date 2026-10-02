class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> arrangments;
    for(int idx{}; idx < nums.size(); ++idx){
        const int leftOver = target - nums[idx];
        if(arrangments.count(leftOver)){
            return{arrangments[leftOver], idx};
        }

        arrangments[nums[idx]] = idx;   //Store the indices
    }

    return{};
     
    }
};
