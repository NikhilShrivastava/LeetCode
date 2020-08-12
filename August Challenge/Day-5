static int speed = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Trie{
    public:
    bool is_end;
    vector<Trie *> next;
    Trie(){
        next = vector<Trie *> (26,nullptr);
        is_end = false;
    }
};

class WordDictionary {
public:
    Trie *root;
    WordDictionary() {
        root = new Trie();
    }
    
    void addWord(string word) {
        Trie *q = root;
        for(char c: word){
            if(q->next[c-'a']==nullptr)
                q->next[c-'a'] = new Trie();
            q = q->next[c-'a'];
        }
        q->is_end = true;
    }
    
    
    bool search(string word){
        return search(root,word,0);
    }
	
	//Overloaded function
    bool search(Trie *q, string &word, int index) {
        if(q==nullptr)return false;
        if(index==word.size()) return q->is_end;
        
        if(isalpha(word[index])){//If it a valid character
            return search(q->next[word[index]-'a'],word,index+1);
        }else{
			//If it is a dot, we recursively search over all its children
            for(Trie *i: q->next){
                if(search(i,word,index+1))
                    return true;
            }
        }
        
        return false;
    }
};
