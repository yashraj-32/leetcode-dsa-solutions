class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> ans;
        string s = "";

        momo(n, 0, s, ans);
        momo(n, 1, s, ans);

        return ans;
    }
    void momo(int n, int op, string curr, vector<string>& ans) {

        if (op == 0) {
            curr.push_back('0');
            n--;
            if (n == 0) {
                ans.push_back(curr);
                return;
            }
            momo(n, 1, curr, ans);
        }
        if (op == 1) {
            curr.push_back('1');
            n--;
            if (n == 0) {
                ans.push_back(curr);
                return;
            }
            momo(n, 0, curr, ans);
            momo(n, 1, curr, ans);
        }
    }
};