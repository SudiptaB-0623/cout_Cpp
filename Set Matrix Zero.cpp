//Solved on Coding Ninjas

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int row[matrix.size()];
    int col[matrix[0].size()];
    
    for(int i=0;i<matrix.size();i++)
            row[i]=1;
        for(int i=0;i<matrix[0].size();i++)
            col[i]=1;
    
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=0;
                col[j]=0;
            }           
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        if(row[i]==0)
        {
            for(int j=0;j<matrix[0].size();j++)
                matrix[i][j]=0;
        }
    }
    for(int i=0;i<matrix[0].size();i++)
    {
        if(col[i]==0)
        {
            for(int j=0;j<matrix.size();j++)
                matrix[j][i]=0;
        }
    }
}
