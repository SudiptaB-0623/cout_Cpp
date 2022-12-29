//Solved on Coding Ninjas

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    
    for(long long int i=1;i<=n;i++)
    {
        //ans[i].resize(i);
        vector<long long int> now;
        for(long long int j=1;j<=i;j++)
        {
            if((j==1)||(j==i))
                now.push_back(1);
            else
            {
                long long int sum = ans[i-2][j-1]+ans[i-2][j-2];
                now.push_back(sum);
            }
        }
        ans.push_back(now);
    }
    return ans;
}
