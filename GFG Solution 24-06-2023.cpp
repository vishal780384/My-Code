class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
         if(k>str.size())  return 0;
         int a=0;
         for(int i=0;i<n;i++){
             if(arr[i].size()>=k && arr[i].substr(0,k)==str.substr(0,k))  a++;
         }
         return a;
    }
};
