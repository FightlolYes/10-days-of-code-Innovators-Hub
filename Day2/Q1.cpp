class Solution {
public:
    bool isAnagram(string s, string t) {

        // if length is not equal, return false
        if (s.size() != t.size()) {
            return false;
        }

        // sort based on ascii values
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // if the 2 strings are same, return true
        if(s==t) {
            return true;
        }

        return false;
    }
};