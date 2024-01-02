vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       // Write your Code
       vector<int>ans;
       int i=0;
       int sum=0;
       for(int j=i;j<n;j++) {
           sum=sum+arr[j];
           
            while (sum > s && i < j) {
            sum -= arr[i];
            i++;
        }
          
           if(sum==s){
               ans.push_back(i+1);
               ans.push_back(j+1);
               return ans;
           }
        
       }
       ans.push_back(-1);
       return ans;
    }


    // Here Using Vector does not mean using extra Space because it contains ---(below)
    // only two elements(right and left)  Or -1. So it is Constant . 
    // Time complexity = O(n)
    // Space Complexity = O(1)
    