class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        if(s.size() % 2 == 1)return false;
        if( s.size() == 0) return true;


        for (int i = 0 ;i<s.size();i++ ){
            if(p.empty()== true){ 
                if( s[i] =='}'||
                    s[i] ==')'||
                    s[i] ==']')return false;
            }
           

            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                p.push(s[i]);
                continue;
            }
            else if(p.empty() == false )
                { 
                    if(p.top() == '('&& s[i]==')'
                    ||p.top() == '{'&& s[i]=='}'
                    ||p.top() == '['&& s[i]==']')
                    {
                    p.pop();
                    continue;
                    }
                    else return false;
                }
                
        }
        

        return p.empty()
        ;
    }


};