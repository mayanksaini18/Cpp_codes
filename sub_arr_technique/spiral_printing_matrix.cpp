#include <iostream>
#include <vector>
#include <climits>
using namespace std;



int main() {
   vector <vector<int>> v (4 , vector<int>(4));
   v[0] = {1, 2 ,3 , 4};
   v[1] = {5, 6 , 6, 7,};
   v[2] = {9,8,7,6};
   v[3] = {1,5,3,5};
int n = v.size();


int i=0 , j=0;
  while (n>1)
  {
    
for (int l = 1; l<n ; l++){
    cout<<v[i][j]<<" ";
    j++;
}
for (int l = 1; l<n ; l++){
    cout<<v[i][j]<<" ";
    i++;
}
for (int l = 1; l<n ; l++){
    cout<<v[i][j]<<" ";
    j--;
}
for (int l = 1; l<n ; l++){
    cout<<v[i][j]<<" ";
    i--;
}


 j++ ;i++;
 n-=2;
  }


  if (n==1)
{
    cout<<v[i][j]<<" ";
}
  
    return 0;
}
