class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char,int> m;
        for(auto i:magazine)
        {
            m[i]++;
        }

        for(int i=0;i<ransomNote.length();i++)
        {
            if(!m.count(ransomNote[i]))return false;
            m[ransomNote[i]]--;
            if(m[ransomNote[i]]==0)m.erase(ransomNote[i]);
        }
        return true;
        
    }
};