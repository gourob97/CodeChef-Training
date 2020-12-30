#include<iostream>
using namespace std;

int main()
{
    int step,test,n,sum,wage;

    cin>>test;

    while(test--)
    {
        sum=0;
        cin>>n;
        int minimum=10000;
        for(int i=0; i<n; i++)
        {
            cin>>wage;
            if(minimum>wage)
                minimum = wage;

            sum+=wage;
        }

        step = sum - (n*minimum);

        cout<<step<<endl;

    }

}
