class Solution:
    # @param A : string
    # @return an integer
    def solve(self, s):
        count = 0
        for i in range(len(s)):
            for j in range(i,len(s)):
                if s[i:j] == s[j:i:-1]:
                    count += 1
        return count
