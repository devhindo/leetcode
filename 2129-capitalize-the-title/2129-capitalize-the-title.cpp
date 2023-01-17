class Solution {
public:
    string capitalizeTitle(string title) {
        int i=0,j=0;
        while(j<title.size()) {
            if(j+1<title.size() && title[j+1] != ' ') {
                j++;
                continue;
            } else {
                if((j-i) > 1) {
                    title[i] = toupper(title[i]);
                    i++;
                }
                while(i!=j+1) {
                    title[i] = tolower(title[i]);
                    i++;
                }
            }
            j += 2;
            i=j;
        }
    return title;
    }
};