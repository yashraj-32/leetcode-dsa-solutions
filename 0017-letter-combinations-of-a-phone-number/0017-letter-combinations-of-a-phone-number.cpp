class Solution {
public:
    vector<string> letterCombinations(string digits) {     
       vector<string> ans ;
       string temp = "";
     momo(temp,digits,ans);
        return ans;
    }
    void momo(string temp, string digits, vector<string>& ans){
        if(digits ==""){
            ans.push_back(temp);
            return;
        }
        if (digits.front()=='2' ){
            digits.erase(0, 1);
            temp.push_back('a');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('b');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('c');
            momo(temp ,digits,ans);
            temp.pop_back();
            return;
            
        }
        if (digits.front()=='3' ){
            digits.erase(0, 1);
            temp.push_back('d');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('e');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('f');
            momo(temp ,digits,ans);
            temp.pop_back();
            return;
        }
        if (digits.front()=='4' ){
             digits.erase(0, 1);
            temp.push_back('g');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('h');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('i');
            momo(temp ,digits,ans);
            temp.pop_back();
            return;
        }
        if (digits.front()=='5' ){
             digits.erase(0, 1);
            temp.push_back('j');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('k');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('l');
            momo(temp ,digits,ans);
            temp.pop_back();
            return;
        }
        if (digits.front()=='6'){
            digits.erase(0, 1);
            temp.push_back('m');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('n');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('o');
            momo(temp ,digits,ans);
            temp.pop_back();
            return;
        }
        if (digits.front()=='7' ){
             digits.erase(0, 1);
            temp.push_back('p');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('q');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('r');
            momo(temp ,digits,ans);
            temp.pop_back();

             
            temp.push_back('s');
            momo(temp, digits,ans);
            temp.pop_back();
         return;
            
        }
        if (digits.front()=='8' ){
             digits.erase(0, 1);
            temp.push_back('t');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('u');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('v');
            momo(temp ,digits,ans);
            temp.pop_back();
            return;
        }
        if (digits.front()=='9' ){
            digits.erase(0, 1);
            temp.push_back('w');
            momo(temp, digits,ans);
            temp.pop_back();
             temp.push_back('x');
            momo(temp ,digits,ans);
            temp.pop_back();
            
             temp.push_back('y');
            momo(temp ,digits,ans);
            temp.pop_back();

            temp.push_back('z');
            momo(temp, digits,ans);
            temp.pop_back();
           return;
            
        }
        

    }

};