# probably my dirtiest code ever

class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        dic = {}
        for email in emails:
            em = ''
            for i in range(len(email)):
                if email[i] == '.':
                    continue
                elif email[i] == '+':
                    while email[i] != '@':
                        i += 1
                    em += email[i:len(email)]
                    break
                elif email[i] == '@':
                    em += email[i:len(email)]
                    break

                else:
                    em += email[i]
            dic[em] = dic.setdefault(em,0)+1
        return len(dic)
                
        
        