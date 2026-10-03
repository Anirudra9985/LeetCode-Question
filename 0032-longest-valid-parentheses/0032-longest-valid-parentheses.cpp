class Solution {
public:
    int longestValidParentheses(string s) {
        // stack<int> st;
        // st.push(-1);
        // int mx = 0;

        // for (int i = 0; i < s.size(); i++) {

        //     if (s[i] == '(') {
        //         st.push(i);
        //     } else {
        //         st.pop();
        //         if (st.empty()) {
        //             st.push(i);
        //         }
        //         mx = max(mx, i - st.top());
        //     }
        // }
        // return mx;

  
        int n = s.size();
        int ans = 0;
        stack<int> st;

        // base for valid substring start
        st.push(-1);

        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    // no base, set current index as base
                    st.push(i);
                } else {
                    // valid substring from st.top()+1 to i
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;

    }
};