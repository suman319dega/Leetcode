class Solution(object):
    def countSeniors(self, details):
        count = 0
        for i in details:
            if int(i[11:13]) > 60:
                count += 1
        return count 

        