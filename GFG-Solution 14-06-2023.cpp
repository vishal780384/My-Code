class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        long long ans=0;
        priority_queue<int>vec;
      for(int i=0;i<N;i++){
          vec.push(A[i]);
      }
      while(K--){
        int t=vec.top();
        ans+=t; vec.pop();
        if(t>0) vec.push(t/2);
     }
       return ans;
    }
};
