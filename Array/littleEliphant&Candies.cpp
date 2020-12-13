#include<iostream>
using namespace std;

int main()
{

    int choco,tests,elephants;

    long long chocholates,sum;


    cin>>tests;

    for(int i=0; i<tests; i++)
    {

        sum=0;

        cin>>elephants>>chocholates;

        for(int j=0; j<elephants; j++)
        {
            cin>>choco;
            sum+=choco;
        }
       if(sum<=chocholates)
        cout<<"Yes"<<endl;

    else
        cout<<"No"<<endl;
    }

}







