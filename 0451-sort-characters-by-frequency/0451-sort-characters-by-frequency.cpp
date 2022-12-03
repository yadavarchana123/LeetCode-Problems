  
class Solution {
public:
bool static compare(pair <int, char> p, pair <int, char> q){
    return p.first > q.first;
}

    string frequencySort(string s) {
        map <char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }
        vector < pair <int, char> > vec;
        for (auto i : m) {
            vec.push_back({i.second, i.first});
        }
        sort(vec.begin(), vec.end(), compare);
        string str = "";
        for (auto i : vec){
        
            char ch = i.second;
            while (i.first--) str += ch;
        }
        return str;
    }
};