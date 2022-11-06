//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void summer(int ind, vector<int>&ds, vector<int>&ans, vector<int>&arr, int N) {
        if(ind == N) {
            int sum = 0;
            for(int i: ds) { sum += i; }
            ans.push_back(sum);
            return;
        }
        ds.push_back(arr[ind]);
        summer(ind + 1, ds, ans, arr, N);
        
        ds.pop_back();
        summer(ind + 1, ds, ans, arr, N);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        vector<int> ds;
        summer(0, ds, ans, arr, N);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends