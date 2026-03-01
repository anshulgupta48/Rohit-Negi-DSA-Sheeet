// ******** Given two strings s1 and s2 in lowercase, the task is to make them anagrams. The only allowed operation is to remove a character from any string. Find the minimum number of characters to be deleted to make both the strings anagram. Two strings are called anagrams of each other if one of them can be converted into another by rearranging its letters. ********

// <======== Example ========>
// Input: s1 = "bcadeh", s2 = "hea"
// Output: 3

// Input: s1 = "cddgk", s2 = "gcd"
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int remAnagram(string &str1, string &str2) {
        int n = str1.size();
        int m = str2.size();
        int ans = 0;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[str1[i]]++;
        }
        
        for(int i = 0; i < m; i++) {
            mp[str2[i]]--;
        }
        
        for(auto x: mp) {
            ans += abs(x.second);
        }
        
        return ans;
    }
};