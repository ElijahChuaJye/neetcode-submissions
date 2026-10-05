class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()){
            return {{""}};
        }

        //Create the hash map first
        //First string is key for the different sorted value, value is the actual storage
        std::unordered_map<std::string, std::vector<string>> storage;
        std::vector<std::vector<std::string>> result;
        for(auto& word : strs){
            std::string tmp = word;
            std::sort(tmp.begin(), tmp.end());
            storage[tmp].push_back(word);  //Pushes back the word based on the sorted value into the container
        }

        //Going through each element in the storage
        for(auto& anagrams : storage){
            result.push_back(std::move(anagrams.second));
        }

        return result;

    }
};
