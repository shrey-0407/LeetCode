class Solution {
public:
    string removeDuplicates(string s) {
        string s1;
        for(auto c:s){
            if(s1.size() and s1.back()==c) s1.pop_back();
            else s1.push_back(c);
        }
        return s1;
   
    }
};


 string removeDuplicates(string S) {
        string a;
        for (auto& c : S) 
            if (a.size() && a.back() == c) a.pop_back();
            else a.push_back(c);
        return a;
    }