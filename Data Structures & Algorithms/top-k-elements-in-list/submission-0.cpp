class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        vector<pair<int, int>> ans;

        for(auto it : mp){
            ans.push_back({it.first, it.second});
        }

        sort(ans.begin(), ans.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        vector<int> temp;

        for(int i = 0; i < k; i++){
            temp.push_back(ans[i].first);
        }

        return temp;
    }
};