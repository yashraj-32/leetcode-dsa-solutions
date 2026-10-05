class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> p;
        int count = 0 ;
        int cf = 0;
        for (int i = 0 ; i<s.size(); i++){
            if(s[i]!=' '){
                p.push(s[i]);
                count++;
            }
            if(s[i]==' '||i == s.size()-1){
                if(count != 0){
                cf = count;
                count = 0;}
                 while(!p.empty()){
                    p.pop();
                 }
            }
            
        }
        return cf;
        
    }
};