class Solution(object):
    def isCircularSentence(self, sentence):
        words = sentence.split()
        if len(words) == 1:
            return words[0][0] == words[0][-1]

        for i in range(len(words) - 1):
            if words[i][-1] != words[i + 1][0]:
                return False

        return words[-1][-1] == words[0][0]
