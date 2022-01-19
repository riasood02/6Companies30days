// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string> v;
    void findCombinations(vector<char> keypad[], 
                      int input[], string res, int index, int n)
{
    
    if (index == n) {
        v.push_back(res);
        return;
    }

    int digit = input[index];

    
    int len = keypad[digit].size();

  
    for (int i = 0; i < len; i++) {
        findCombinations(keypad, input, res + keypad[digit][i], index + 1, n);
    }
}

  
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
         vector<char> keypad[] =
    {
        {}, {},       
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
    findCombinations(keypad, a, string(""), 0, N );
    return v;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends
