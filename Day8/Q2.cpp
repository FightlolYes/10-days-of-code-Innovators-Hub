class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateRec(n, 0, 0, "", result);
        return result;
    }
private:
    void generateRec(int n, int open, int close, string current, vector<string>& result) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            generateRec(n, open + 1, close, current + '(', result);
        }

        if (close < open) {
            generateRec(n, open, close + 1, current + ')', result);
        }
    } 
};