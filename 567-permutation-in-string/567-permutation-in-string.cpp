class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>f1(26,0);
        if(s1.size()>s2.size()) return false;
        for(auto c:s1){
            f1[c-'a']++;
        }
        vector<int>f2(26,0);
        int i=0,j=0;
        while(j<s2.size()){
            f2[s2[j]-'a']++;
            if(j-i+1==s1.size()){
                if(f1==f2) return true;
            }
            if(j-i+1<s1.size()) j++;
            else{
                f2[s2[i]-'a']--;
                i++;j++;
                
            }
        }
        return false;
    }
};