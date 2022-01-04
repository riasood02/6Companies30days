// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        int num=1;
        stack<int> st;
       
        string ans="";
        for(int i=0;i<S.length();i++)
        {
            char c=S[i];
            if(c=='D')
            {
                st.push(num);
                num++;
            }
            else
            {
                st.push(num);
                num++;
                while(!st.empty())
                {
                  int n=st.top();
                  st.pop();
                  ans+=to_string(n);  
                }
            }
        }
        st.push(num);
        while(!st.empty())
        {   int n=st.top();
            st.pop();
            ans+=to_string(n);
        }
        return ans;
       
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
