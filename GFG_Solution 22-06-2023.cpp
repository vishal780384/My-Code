class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &arr) {
     int ctn_5=0,ctn_10=0;
     for(int i=0;i<N;i++){
          if(arr[i]==5)  ctn_5++;
          else if(arr[i]==10){ 
               if(ctn_5>0){  ctn_10++; ctn_5--;  }
               else return false;
         }    
          else { 
               if(ctn_5>0 && ctn_10>0){  ctn_5--; ctn_10--;  }
               else if(ctn_5>=3) { ctn_5=ctn_5-3;  }
               else return false;
            }
        }
      return true;
    }
};
