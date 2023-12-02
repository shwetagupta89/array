/*Program to find the minimum (or maximum) element of an array*/
#include <iostream>
#include<stringstream>

#define SIZE 1000000
int main()
{
  cout"enter array: "<<endl;
  string str;
  vector<int> v;
  cin>>str;
  stringstream s(str);
  int i;
    while(ss>>i)
    {
      v.push_back(i);
      if(ss.peek()==',')
        ss.ignore();
    }
  cout<<v.size();
  
  return 0;
}
