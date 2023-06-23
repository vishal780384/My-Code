class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        vector<int>arr(26,0);
        for(auto i:tasks){   arr[i-'A']++;  }
        int mx=-1;  int ctn=0;
        for(int i=0;i<26;i++){
            if(arr[i]==mx)   ctn++;
            else if(arr[i]>mx){  mx=arr[i];  ctn=1;  }
        }
        int temp=max(N,mx+(mx-1)*K+ctn-1);
        return temp;
    }
};
