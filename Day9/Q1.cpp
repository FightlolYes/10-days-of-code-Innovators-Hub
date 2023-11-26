class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string a, string b){
        if(a.size() != b.size()) return false;
        if((a[0] == b[b.size()-2] && a[1] == b[b.size()-1]) ||
          (b[0] == a[a.size()-2] && b[1]==a[a.size()-1])) return true;
          else return false;
    }

};