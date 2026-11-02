class Solution {
public:

    string encode(vector<string>& strs) {
        std::string result{};
        for(const auto& word : strs){
          result += std::to_string(word.size()) + '#' +  word ; //Set the number of words and then the delimiter
        }

        return result;
    }

    vector<string> decode(string s) {
       std::vector<string> result;

       int i{};

       while (i < s.size()){
        //Find the delimiter first
        int j = i;
        while(s[j] != '#'){
            ++j; //Keep adding the j to find the the limiter
        }

        //Extract the length nuumber
        int length = std::stoi(s.substr(i, j - i));

        //Move past # to grab the exact word
        i = j + 1;
        result.push_back(s.substr(i, length));

        i+= length;
       }

        return result;
    }
};

