 class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        queue<int>Q;int ctn=0;
        while(!q.empty()){
            int a=q.front();
            Q.push(a); q.pop();
            if(a==k) ctn++;
        }
        while(!Q.empty()){
            q.push(Q.front());   Q.pop();
        }
        return ctn;
    }
};
