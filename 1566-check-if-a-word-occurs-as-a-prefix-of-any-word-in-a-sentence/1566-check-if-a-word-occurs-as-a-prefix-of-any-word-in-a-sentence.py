class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        string = sentence.split()
        n = len(searchWord)
        ans = -1
        for i in range(len(string)):
            if(len(string[i]) >= n):
                if(string[i][:n] == searchWord):
                    ans = i+1
                    break
        return ans

        