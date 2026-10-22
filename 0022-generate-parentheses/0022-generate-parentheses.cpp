class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        if(n == 0)return ans;
        string cur ;
        cur.push_back('(');
        momo(n - 1,n,cur,ans);
        return ans;
    }
    void momo(int n ,int m , string cur, vector<string>& ans){
        if(n==0 && m==0 ){
            ans.push_back(cur);
            return;
        }
        if(n > 0 && m >= n){
    momo(n-1, m, cur + '(', ans);
}

if(m > 0 && n < m){
    momo(n, m-1, cur + ')', ans);
}

    }

};