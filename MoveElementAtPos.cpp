/*Move all negative numbers to beginning and positive to end with constant extra space*/
#include <iostream>
#include<vector>
#include <sstream>
using namespace std;

void moveElement(vector<int> &v)
{
    int l=0;
    int h=v.size()-1;
    while(l<h)
    {
        if(v[l]>0)
        {
            if(v[h]<0)
            {
                int temp=v[h];
                v[h]=v[l];
                v[l]=temp;
                l++;
                h--;
            }
            else
            {
                h--;
            }
        }
        else
        l++;;
    }

}

int main()
{
    cout<<"enter array";
    string s;
    cin>>s;
    stringstream str(s);
    int i;
    vector<int> v;
    while(str>>i)
    {
        v.push_back(i);
        if(str.peek()==',')
        {
            str.ignore();
        }
    }
    moveElement(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}
