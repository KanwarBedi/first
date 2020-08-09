/*#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<val;
            //j=j+1;
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }

} */
#include<iostream>
using namespace std;
int main()
{

    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

