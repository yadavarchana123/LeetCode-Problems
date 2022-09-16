class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
         vector<string>word1,word2;
         stringstream ss(sentence1); stringstream ss1(sentence2);
         string word; 
         while(ss >> word)
         {
           word1.push_back(word);
         }
         while(ss1 >> word)
         {
           word2.push_back(word);
         }
        int n1 = word1.size(), n2 = word2.size();
        if(n1 > n2)
           return areSentencesSimilar(sentence2, sentence1);
         int i=0;
        while(i<word1.size() and word1[i]==word2[i])
            i++;
        while(i<word1.size() and word1[i]==word2[n2-n1+i])
            i++;
        return i==n1;
    }
};