class Solution {
public:

 vector<int> patterncreater(string s){
    vector<int> v;
    int count = 1;
    v.push_back(count);
    for(int i = 1 ; i < s.length() ; i++){
        for(int j = 0 ; j < s.length() ; j++){
                if(s[i] != s[j]){
                count++;
                v.push_back(count);}
                else{
                    count = 1;
                    v.push_back(count);
                }
             }
        }
    return v;
 }

    bool patternchecker(string s,vector<int>& v){
        vector<int> arr = patterncreater(s);
        for(int i = 0 ; i < v.size() ; i++){
            if(arr[i] != v[i])
            return false;
        }
        return true;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<int> v = patterncreater(pattern);
        vector<string> s;
        for(int i = 0 ; i < words.size() ; i++){
            string str = words[i];
            if(patternchecker(str,v) == 1)
            s.push_back(words[i]);
            else{
                continue;
            }
        }
        return s;
    }
};