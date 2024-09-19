class Solution {
public:
    int lengthOfLastWord(string s) {
         vector<string> vec;
         string str = "";
         int c = 0;
         for(int i=0;i<s.size();i++) {
             if(s[i] != ' ' )
             {
                str+=s[i];
             } else if(s[i] == ' ' && str != "") {
                vec.push_back(str);
                str = "";
             };
             if(i == s.size() - 1 && str != "") {
                vec.push_back(str);
             }
         }
         return vec[vec.size()-1].size();
    }
};