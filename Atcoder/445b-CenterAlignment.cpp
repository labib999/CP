#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t,i = 0,max = 0;
    cin>>t;
    vector<string> a(t);
    char dot = '.';
    for(i = 0; i < t; i++)
    {
        cin>>a[i];
        if((int)a[i].length() > max)
            max = a[i].length();
        
    }


    for(i = 0; i < t; i++)
    {
        if((int)a[i].length() == max)
        {
            cout<<a[i]<<endl;
        }
        else
        {
            int diff = max - a[i].length();
            for(int j = 0; j < diff/2; j++)
            {

                a[i] = dot + a[i];
                a[i] += dot;                
            }
            cout<<a[i]<<endl;
        }
    }
}