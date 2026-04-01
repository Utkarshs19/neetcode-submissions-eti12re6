class WordDictionary {
public:
    map<string,int> m;

    void helper(int i,string word)
    {
        if(i==word.length())
        {
            m[word]++;
            return;
        }

        string str=word;
        str[i]='.';
        helper(i+1,str);
        str[i]=word[i];
        helper(i+1,str);
    }

    WordDictionary() {
        
    }
    
    void addWord(string word) {
        
        m[word]++;

        helper(0,word);
    }
    
    bool search(string word) {
        if(m.count(word))return true;
        return false;
    }
};
