class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int greater = arr[n - 1];
        ans.push_back(-1);
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] > greater){
                ans.push_back(greater);
                greater = arr[i];
            }else{
                ans.push_back(greater);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};