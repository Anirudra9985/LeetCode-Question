class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string first_half = s.substr(0, n / 2);
        sort(first_half.begin(), first_half.end());
        
        // Find the middle character if the length is odd
      string mid_char = (n % 2 == 1) ? std::string(1, s[n / 2]) : "";
        
        // Create the reversed second half
       string reversed_half = first_half;
       reverse(reversed_half.begin(), reversed_half.end());
        
        // Combine all parts
        return first_half + mid_char + reversed_half;
    }
};