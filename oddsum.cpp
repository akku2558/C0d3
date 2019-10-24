include<iostream.h>
using namespace std;
void oddsum(int x)
{
 int i,j,sum=0,c=0;
 int arr[100];
 for ( i=0;i<x;i++)
 {
  cin>>arr[i];
  }
  for(i=0;i<x-1;i++)
  {
   for( j=i+1;j<x;j++)
    {
     sum=arr[i]+arr[j];
     if(sum%2==1){
     c++;}
     }
     }
     cout<<"number of odd sum pairs are:"<<c;
     }
  void main()
  {
  int n;
  cout<<"number elements of array:";
  cin>>n;
  oddsum(n);
  }
