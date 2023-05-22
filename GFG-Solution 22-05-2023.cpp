class Solution {
    public:
    int solve(int N, vector<int> p){
        int aaa=N-1;
        vector<int>Node(N+1,0);
        for(int i=1;i<N;i++){
            Node[p[i]]++;
            Node[i]++;
        }
        for(int i=0;i<N;i++)
              if(Node[i]==1) aaa--;
        if(aaa<0)return 0;
        return aaa;  
    }
};
