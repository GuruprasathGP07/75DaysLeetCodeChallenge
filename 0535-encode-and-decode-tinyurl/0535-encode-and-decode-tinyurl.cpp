class Solution {
public:
    unordered_map<string,string>mp;
    int i=1;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s_url="http://tinyurl.com/"+to_string(i);
        mp[s_url]=longUrl;
        i++;
        return s_url;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));