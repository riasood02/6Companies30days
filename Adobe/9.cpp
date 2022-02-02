// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    void reverse(string &num, int i, int j)
   {
     while (i < j) 
     {
        swap(num[i], num[j]);
        i++;
        j--;
      }
    }

    string nextPalin(string N) { 
        //complete the function here
        int n=N.length();
        if(n<=3)
        {
            return "-1";
        }
        int m=n/2-1;
        int i;
        for(i=m-1;i>=0;i--)
        {
            if(N[i]<N[i+1])
            {
                break;
            }
        }
        if(i<0)
        {
            return "-1";
        }
        int s=i+1;
        int j;
        for (j = i + 2; j <= m; j++)
        if (N[j] > N[i] && N[j] <= N[s])
            s = j;
        swap(N[i], N[s]);
        swap(N[n - i - 1], N[n - s - 1]);
        reverse(N, i + 1, m);
        if (n % 2 == 0)
            reverse(N, m + 1, n - i - 2);
        else
            reverse(N, m + 2, n - i - 2);
            
        return N;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}  // } Driver Code Ends
