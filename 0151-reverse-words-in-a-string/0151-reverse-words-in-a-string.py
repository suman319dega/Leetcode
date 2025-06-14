class Solution(object):
    def reverseWords(self, s):
        a = s.strip()
        b = a.split()
        b = b[::-1]
        return " ".join(b)
