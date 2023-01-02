class Solution {

    void solve(int ind , vector<vector<int>>&ans , vector<int>&ds, int length , int target)
    {
        if(length==0)
        {
            if(target==0)
            {
                ans.push_back(ds);
                return ;
            }
        }

      //  if(target>n)return ;

        for(int i = ind ; i<= 9 ;i++)
        {
            if(i>target)break;
            ds.push_back(i);
            solve(i+1,ans,ds,length-1,target-i);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int length, int target) {
        vector<vector<int>>ans;
        vector<int>ds;

         solve(1,ans,ds,length,target);
         return ans;
    }
};