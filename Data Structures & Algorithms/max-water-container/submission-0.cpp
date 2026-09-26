class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int i = 0;
        int j = n - 1;

        int maxi = 0;

        while(i < j){
            int base = j - i;
            int height = min(heights[i], heights[j]);

            int area = height * base;

            maxi = max(area, maxi);

            if(heights[i] < heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxi;
    }
};
