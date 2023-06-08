class Solution{
public:
    string kthPermutation(int n, int k){
        vector<int> vec(n);
        for(int i=0;i<n;i++) vec[i]=i+1;
        k--;
        while(k--){   next_permutation(vec.begin(),vec.end());   }
        string ans="";
        for(auto x:vec){   ans+=(x+'0');   }
        return ans;
    }
};
