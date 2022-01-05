// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
      int s=n*(n+1)/2;
      int *ans=new int[2];
      int s1=0;
      int rep,mis;
      for(int i=0;i<n;i++)
      {
          s1+=arr[i];
      }
      //cout<<s1;
      int s2=(n*(n+1)*((2*n)+1))/6;
      int s12=0;
      for(int i=0;i<n;i++)
      {
          s12+=arr[i] * arr[i];
      }
      //cout<<s12<<" ";
      int a=s-s1;
      int b=s2-s12;
      mis=((b/a)+a)/2;
      rep=((b/a)-a)/2;
      ans[0]=abs(rep);
      ans[1]=abs(mis);
      return ans;
      
      
      
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
