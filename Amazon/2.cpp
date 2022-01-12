 #include<iostream>
 using namespace std; 
 #include <vector>
 int longestMountain(vector<int>& arr) 
 {
        int perlen=0;
        
        for(int i=1;i<arr.size()-1;i++)
        {
          if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
          {
              int j=i-1;
              int k=i+1;
              int templen=3;
              
              while( j!=0 && arr[j]>arr[j-1] )
              {
                templen++;
                j--;
              }
              while(k!=arr.size()-1 && arr[k]>arr[k+1])
              {
                templen++;
                k++;
              }
              if(templen>perlen)
              {
                  perlen=templen;
              }
          }
        }
        return perlen;
        
        
        
    }
    int main(){
    	vector<int> v;
//    	[2,1,4,7,3,2,5]
    	v.push_back(2);
//    	v.push_back(1);
//    	v.push_back(4);
//    	v.push_back(7);
//    	v.push_back(3);
    	v.push_back(2);
    	v.push_back(2);
    	cout<<longestMountain(v);
	}
