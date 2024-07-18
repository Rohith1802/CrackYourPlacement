class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        int ans = INT_MAX;
        sort(a.begin(),a.end());
        for(int i = 0 ; i <= a.size()-m ; ++i)
        {
            if(a[i+m-1]-a[i]<ans)
            {
                ans = a[i+m-1]-a[i];
            }
        }
        return ans;
        
        //1 3 4 7 9 9 12 56
    
    }   
};