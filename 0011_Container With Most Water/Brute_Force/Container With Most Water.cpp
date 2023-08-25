class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int n = height.size();
        for(int i = 0; i < n; i++ ) // T: O(n)
        {
            for(int j = 1; j < n; j++ ) // T: O(n)
            {
                int area = min(height[i], height[j]) * abs(j-i);
                if (area > max_area)
                {
                    max_area = area;
                }
            }
        }
        return max_area;
    }
};