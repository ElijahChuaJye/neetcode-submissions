class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> storage;
        for(auto idx : nums){
            storage[idx]++; //This accessed the secondary value already
            if(storage[idx] > 1){
                return true;
            }
        }

        return false;

    }
};