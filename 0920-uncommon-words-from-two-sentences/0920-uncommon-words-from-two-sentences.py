class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        a = s1.strip().split()
        b = s2.strip().split()
        list_1 = []
        for i in a:  
            if i not in b and a.count(i) == 1:
                list_1.append(i)
        for i in b:
            if i not in a and b.count(i) == 1:
                list_1.append(i)
        return list_1
