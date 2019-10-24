#include <iostream.h>
using namespace std;
void divby3(int x)
{
 int i,j,sum=0,count=0;
 int arr[100];
 for(i=0;i<x;i++)
 {
  cin>>arr[i];
  }
  for (i=0;i<x-1;i++)
  {
    for(j=i+1;j<x;j++)
     {
       sum=arr[i]+arr[j];
       if(sum%3==0){
       count++;}
      }
 }
 cout<<"number of divisible by 3 pairs are:"<<count;
 }
 void main()
 {
 int n;
 cout<<"Enter number of element in array:";
 cin>>n;
 divby3(n);
 }
 
    
