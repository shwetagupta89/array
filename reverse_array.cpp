/*Write a program to reverse an array*/
#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &arr)
{
    int l=0;
    int h=arr.size()-1;
    while(l<h)
    {
      int temp=arr[l];
      arr[l]=arr[h];
      arr[h]=temp;
      l++;
      h--;
    }
}

int main()
{
  
  cout<<"length of array: ";
  int n;
  cin>>n;
  vector<int> v(n);
  cout<<"enter element space seperated"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  reverse(v);
  cout<<"output:"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}


  
    
    
