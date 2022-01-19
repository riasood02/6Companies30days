// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to return a list of integers denoting spiral traversal of matrix.
vector<int> arr;
int* spirallyTraverse(int r, int c, int matrix[][c])
{  
     int w,x,y,z;
    int u=0;
    int size=r*c;

  w=0;x=r-1;y=0;z=c-1;
  int dir=0;
  while(w<=x && y<=z)
  {
      if(dir==0)
      {
          for(int i=y;i<=z;i++)
         {
		   arr.push_back(matrix[w][i]);
             
         }
          dir=1;
          w++;
          
      }
      else if(dir==1)
      {
          for (int i=w;i<=x;i++)
         {
		   arr.push_back(matrix[i][z]);
             
         }
          dir=2;
          z--;
          
      }
      else if(dir==2)
      {
          for(int i=z;i>=y;i--)
          {
		  arr.push_back(matrix[x][i]);
              
          }
          dir=3;
          x--;
          
      }
      else if(dir==3)
      {
          for(int i=x;i>=w;i--)
          {
		  arr.push_back(matrix[i][y]);
              
          }
		  dir=0;
          y++;
      }
      else
      ;
}
return arr;
    
}

// { Driver Code Starts.

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int r, c;
		scanf("%d", &r);
		scanf("%d", &c);
		int matrix[r][c];
	 
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				scanf("%d", &matrix[i][j]);
			}
		}
		
		int *result = spirallyTraverse(r, c, matrix);
		for(int i = 0; i < r*c; i++)
			printf("%d ", result[i]);
		printf("\n");
	}
	return 0;
}  // } Driver Code Ends
