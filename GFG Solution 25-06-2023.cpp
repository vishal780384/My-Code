class Solution{
    public:
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col){
        vector<vector<int>>arr;
        set<vector<int>>S;
        
        for(int i=0;i<row;i++){
            vector<int>vec;
            for(int j=0;j<col;j++){
                 vec.push_back(M[i][j]);
            }
            if(!S.count(vec)){
                arr.push_back(vec);
                S.insert(vec);
            }
        }
        return arr;
    }
};
