class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<std::vector<int>> bucket{};
        std::unordered_map<int, int> container{};
        std::vector<int> result{};
        bucket.resize(nums.size() + 1);
        for(const auto& number : nums){
            ++container[number]; //Stores the frequency
        } 

        for(const auto& [number, frequency] : container){ //key, value
            bucket[frequency].push_back(number);
        }

       for(int loop = nums.size() ; loop > 0 ; --loop){
            for(auto const& iter : bucket[loop]){
                result.push_back(iter);
                if(result.size() == k){
                    return result;
                }
            }
       }

       return result;
    }
};
