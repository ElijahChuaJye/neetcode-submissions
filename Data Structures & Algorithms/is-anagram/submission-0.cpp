class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){ //If different size means they are different already
            return false;
        }

        int alphabets[26] = {}; //Initialize array to 26 slots
        int nonZeroCheck{};
        for(auto letter : s ){
            ++alphabets[letter - 'a'];
            ++nonZeroCheck;
        }

        for(auto letter : t ){
            if(alphabets[letter-'a'] == 0){
                return false; //This means that the other string do not exist at all thus return false immidately
            }
            --alphabets[letter - 'a'];
            --nonZeroCheck;
        }

        return nonZeroCheck == 0;
    }
};
