class Solution{
public:
static void merging(int arr[],int start,int mid,int end){
            int i=start;
          while(i<=mid && arr[i]<0)i++;
            int j = mid+1;
          while(j<=end && arr[j]<0)j++;
            int k=i,l=j-1;
            int temp = mid;
          while(i<temp){
                int t = arr[i];
                arr[i]=arr[temp];
                arr[temp]=t;
                i++;
                temp--;
            }
            temp=mid+1;
            j--;
          while(temp<j){
                int t = arr[temp];
                arr[temp]=arr[j];
                arr[j]=t;
                temp++;
                j--;
            }
          while(k<l){
                int t= arr[k];
                arr[k]=arr[l];
                arr[l]=t;
                k++;
                l--;
            }
    }
    static void mergesort(int arr[],int start,int end){
            if(start<end){
                int mid = (start+end)/2;
                mergesort(arr,start,mid);
                mergesort(arr,mid+1,end);
                merging(arr,start,mid,end);
            }
    }
   void Rearrange(int arr[], int n) {
        mergesort(arr,0,n-1);
    }
};
