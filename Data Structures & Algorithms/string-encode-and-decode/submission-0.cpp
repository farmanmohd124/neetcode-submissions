class Solution {
public:
    string encode(vector<string>& strs) {
        string str = "";
        for (string &word : strs) {
            str += to_string(word.size()) + "#" + word;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            // find '#'
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i)); // length of word
            string word = s.substr(j + 1, len);
            ans.push_back(word);
            i = j + 1 + len; // move index after the word
        }
        return ans;
    }
};
