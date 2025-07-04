class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int n=word1.length();
        int m=word2.length();
        int i=0;
        int j=0;
        while(i<n||j<m)
        {
            if(i>=n){
             s.push_back(word2[j]);
             j++;
            }
           else if(j>=m)
           {
             s.push_back(word1[i]);
             i++;
           }
           else{
             s.push_back(word1[i]);
             s.push_back(word2[j]);
             i++;
             j++;
           }
            
        }
    return s;}
};
