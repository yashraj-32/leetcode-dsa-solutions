class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> p;
        string ans;

        if(s.size()==0)return s;
        p.push(s[0]);
        for (int i = 1; i<s.size();i++){
            if(p.empty()){
                p.push(s[i]);
                continue;
            }
            if(s[i]==p.top()){
               
                    p.pop();
                    continue;
                
            }
            else {
                p.push(s[i]);
            }

        }
        while(p.empty()==false){
            ans.push_back(p.top());
            p.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};