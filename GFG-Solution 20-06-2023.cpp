class Solution {
  public:
    int matchGame(long long N) {
        int ans=N%5;
        if(ans==0)   return -1;
        return ans;
    }
};
