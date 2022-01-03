// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
//   for(int i=0;i<src.length();i++)
//   {
//       int j=i+1;
//       int count=1;
//       while(src[j]==src[i])
//       {
//           j++;
//           count++;
//       }
//       src[i+1]=count;
      
//   }
int i;
 for(i=0;i<src.size();i++){
     int c=1;
     while(i<src.size()-1 && src[i]==src[i+1]){
         c++; i++;
    }
   cout<<src[i]<<c;      
 }
}     
 

