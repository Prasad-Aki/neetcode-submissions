class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        int n = s.length();

        for(int i = 0; i < n; i++){
            mp1[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            mp2[t[i]]++;
        }

        if(mp1 == mp2){
            return true;
        }
        return false;
    } 

};
