class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       vector<int>vec(2000,0);
       for(int &x:arr)
       {
        vec[x+1000]++;
       }
       sort(begin(vec), end(vec));
       for(int i=1;i<2000;i++){
        if(vec[i]!=0 && vec[i]==vec[i-1])
            return false;
           
        }
           return true;
    }
};