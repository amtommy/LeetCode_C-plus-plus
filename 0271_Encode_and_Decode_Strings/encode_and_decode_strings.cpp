class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& str : strs) {
            encoded += to_string(str.size()) + "#" + str;
        }
        return encoded;
    }
};

    // Decodes a single string to a list of strings.
    vector<string> decode(string &str) {
        vector<string> decoded;
        int i = 0;
        while (i < str.size()) {
            int j = str.find('#', i);
            int length = stoi(str.substr(i, j - i));
            i = j + 1;
            decoded.push_back(str.substr(i, length));
            i += length;
        }
        return decoded;
    }
};