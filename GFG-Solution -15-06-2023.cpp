class Solution {
  public:
    string dost(string str,int start,int end){
        int n=str.length();
        while(start>=0 and end<n){
            if(str[start]==str[end]){ start--; end++; }
            else { break; }
        }
        return str.substr(start+1,end-start-1);
    }
    
    string longestPalin (string S) {
        int n=S.length();  int len=0;
        string temp="";
        for(int i=0;i<n;i++){
            string curr=dost(S,i,i);
            if(curr.length()>len){
                temp=curr;
                len=curr.length();
            }
            
            curr=dost(S,i,i+1);
            if(curr.length()>len){
                temp=curr;
                len=curr.length();
            }
        }
        return temp;
    }
};
