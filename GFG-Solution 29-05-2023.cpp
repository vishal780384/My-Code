class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dict, string Patt) {
        vector<string>ans; 
        for(int i=0;i<N;i++){
            string mat="";
            int len=Dict[i].length();
            for(int j=0;j<len;j++){
                if(Dict[i][j]>=65 && Dict[i][j]<=90) mat+=Dict[i][j];
            }
            int haha=0; 
            int ctn=0;
            for(int k=0;k<Patt.size();k++){
              if(haha<Patt.size()) 
              if(mat[haha]==Patt[ctn]) { haha++;  ctn++; }
              else haha++;   
            }
            if(ctn==Patt.size())  ans.push_back(Dict[i]);
        }
     if(ans.size()) return ans;
     ans.push_back("-1");
     return ans;
    }
};
