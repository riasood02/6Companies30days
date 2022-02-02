
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    
    int fnc(int n,int x,int num)
    {
        if(pow(num,x)<n)
        {
           return fnc(n,x,num+1)+fnc(n-pow(num,x),x,num+1);
        }
        else if(pow(num,x)==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int numOfWays(int n, int x)
    {
        // code here
        int res=fnc(n,x,1);
        return res % (1000000007);
     
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
