class OrderedStream {
public:
    OrderedStream(int n) {
        s = vector<string>(n+1);
        ptr = 1;
    }
    
    vector<string> insert(int id, string value) {
        s[id] = value;
        vector<string> result;
        if (ptr == id) {
            while (ptr < s.size() && !s[ptr].empty()) {
                result.push_back(s[ptr]);
                ++ptr;
            }
        }
        return result;
    }
private:
    vector<string> s;
    int ptr;
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */