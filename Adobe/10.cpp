// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int> votes;
        for(int i=0;i<n;i++)
        {
            if (votes.find(arr[i]) == votes.end())
            {
                votes.insert(make_pair(arr[i],1)); 
            }
            else
            {
                votes[arr[i]]++;
            }
           
        }
         int mx=INT_MIN;
         string ans="";
         unordered_map<string, int>:: iterator itr;
         for (itr = votes.begin(); itr != votes.end(); itr++)
         {
            if(itr->second>mx)
            {
                mx=itr->second;
                ans=itr->first;
            }
            else if(itr->second==mx && lexicographical_compare(itr->first, itr->first+itr->first.length(),ans ,ans+ans.length())
            {
              mx=itr->second;
              ans=itr->first;
            }
         }
         vector<string> v;
         v.push_back(ans);
         v.push_back(mx);
         return v
    }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
