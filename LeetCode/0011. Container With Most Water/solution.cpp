class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;
        while(j >= i){
            maxArea = max(maxArea, min(height[i], height[j]) * (j - i));
            (height[i] < height[j]) ? i++ : j--;
        }
        return maxArea;
    }
};