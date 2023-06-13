class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int>a(n,0);
	    for(int i=0;i<n;i++){
	        a.push_back(arr[i]);
	    }
	    sort(a.begin(),a.end(),greater<int>());
	    vector<int>ans;
	    int i=0;
	    while(i<n and k--){
	        ans.push_back(a[i]);
	        i++;
	    }
	   return ans;
	}

};
