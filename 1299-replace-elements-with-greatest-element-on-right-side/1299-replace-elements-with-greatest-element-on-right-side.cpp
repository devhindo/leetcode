class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = -1,tmp;
        for(int i=arr.size()-1; i >= 0; i--) {
            tmp = arr[i];
            arr[i] = greatest;
            greatest = tmp > greatest ? tmp : greatest;
        }
        return arr;
    }
};