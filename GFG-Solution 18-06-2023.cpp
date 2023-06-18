class Solution {
    public static int distributeTicket(int N,int K){
        int ans=0;
        int i=1;  int j=N; boolean dir=false;
        while(i<=j){
             if(!dir){ i+=K;  ans=j; }
             else if(dir){ j-=K;  ans=i; }
             dir=!dir;
        }
        return ans;
    }
};
