class Solution {
public:
    bool recur(string& s, string& p, int i, int j, vector<vector<int>>& dp){
        int n = s.size(), m = p.size();

        if(dp[i][j]!=-1) return dp[i][j];

        if(i==n && j==m) return dp[i][j] = true;
        if((i<n && j==m) || (i==n && j<m)) return dp[i][j] = false;

        if(j+1<m && p[j+1]=='*') return dp[i][j] = recur(s, p, i, j+1, dp);
        if(s[i]==p[j] || p[j]=='.'){
            return dp[i][j] = recur(s, p, i+1, j+1, dp);
        }
        else if(p[j]=='*'){
            bool skip_star = recur(s, p, i, j+1, dp);
            if(s[i]==p[j-1] || p[j-1]=='.'){
                return dp[i][j] = skip_star || recur(s, p, i+1, j, dp) || recur(s, p, i+1, j+1, dp) ;
            }
            return dp[i][j] = skip_star;
        }
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<bool>> dp(n+1, vector<bool>(m+1,false));
        // vector<vector<int>> dp(n+1, vector<int>(m+1,-1)); for recursion only
        dp[n][m] = true; // base cases
        for(int j=m-1; j>=0; j-=2){
            if(p[j]!='*') break;
            dp[n][j] = true;
            dp[n][j-1] = true;
        }

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                if(j+1<m && p[j+1]=='*') dp[i][j] = dp[i][j+1];
                else if(s[i]==p[j] || p[j]=='.'){
                    dp[i][j] = dp[i+1][j+1];
                }
                else if(p[j]=='*'){
                    bool skip_star = dp[i][j+1];
                    if(s[i]==p[j-1] || p[j-1]=='.'){
                        dp[i][j] = skip_star || dp[i+1][j] || dp[i+1][j+1];
                    }
                    else dp[i][j] = skip_star;
                }
            }
        }
        // recur(s, p, 0, 0, dp);
        return dp[0][0];
    }
};