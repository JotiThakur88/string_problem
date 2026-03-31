#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char c : s) {
            freq[c]++;
        }

        // Move to vector
        vector<pair<char, int>> v(freq.begin(), freq.end());

        // Sort by frequency (descending)
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build result
        string result = "";
        for (auto &p : v) {
            result += string(p.second, p.first);
        }

        return result;
    }
};