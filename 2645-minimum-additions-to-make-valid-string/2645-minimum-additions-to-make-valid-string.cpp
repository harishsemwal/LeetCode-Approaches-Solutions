class Solution {
public:
    int addMinimum(string word) {
        int count = 0;
         for(int i = 0; i < word.size(); i++) {
             if(i == 0) {
                 if(word[i] == 'b') count++;
                 else if(word[i] == 'c') count += 2;
             }
             if(i == word.size() - 1) {
                 if(word[i] == 'a') count += 2;
                 else if(word[i] == 'b') count++;
             }
             else {
                 if(word[i] == word[i + 1]) count += 2;
                 else if(word[i] == 'a' && word[i + 1] == 'c') count++;
                 else if(word[i] == 'a' && word[i + 1] == 'c') count++;
                 else if(word[i] == 'b' && word[i + 1] == 'a') count++;
                 else if(word[i] == 'c' && word[i + 1] == 'b') count++;
             }
         }
        return count;
    }
};