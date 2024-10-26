class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        a = strs[0]
        for s in strs[1:]:
            for i in range(len(s)):
                if not len(s):
                    return ""
                if i >= len(a):
                    break
                if s[i] != a[i]:
                    a = a[:i]
                    break
                if i == len(s) -1:
                    a = s
        return a
                