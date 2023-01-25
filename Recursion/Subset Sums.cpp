void Helper(int ind, vector<int> arr, int N,vector<int> &ans, int sum){
        if(ind == N){
            ans.push_back(sum);
            return;
        }
        
        Helper(ind+1, arr, N, ans, sum + arr[ind]);  //If picked
        
        
        Helper(ind+1, arr, N, ans, sum);    //Not picked
        
    }


    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        Helper(0, arr, N, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
