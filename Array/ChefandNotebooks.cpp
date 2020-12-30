#include<iostream>
using namespace std;

int main()
{
    int test,x,y,cash,n,page,price,flag;
    //x= page needed
    //y= page alreasy has
    // cash =available balance
    //n = number of notebooks shopkeeper showd

    cin>>test;
    while(test--)
    {
        flag=0;
        cin>>x>>y>>cash>>n;

        for(int j=0;j<n;j++)
        {
            cin>>page>>price;
            if(page>=(x-y) && price<= cash)
            {
                flag=1;
            }
        }
        if(flag==0)
            cout<<"UnluckyChef"<<endl;
        else
            cout<<"LuckyChef"<<endl;
    }

}
