class Solution{
    public:
    void vishal(int i,long long arr[], int n){
        if(i>=n)  return ;
        long long t=arr[arr[i]];
        vishal(i+1,arr,n);
        arr[i]=t;
    }
    
    void arrange(long long arr[], int n) {
         int i=0;
         vishal(i,arr,n);
    }
};
