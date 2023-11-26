class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int low = 0;
        int high = height.size() - 1;

        while (low < high) {
            int minHeight = min(height[low], height[high]);
            int current = minHeight * (high - low);
            maxVol = max(maxVol, current);

            if (height[low] < height[high]) {
                low++;
            } else {
                high--;
            }
        }

        return maxVol;
    }
};
