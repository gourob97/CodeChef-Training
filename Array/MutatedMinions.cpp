#include<iostream>
using namespace std;

int main()
{
    int test,n,k,intrinsic,wolverine;

    cin>>test;

    while(test--)
    {
       wolverine=0;
      cin>>n>>k;
      while(n--){
        cin>>intrinsic;
        if((intrinsic+k)%7==0)
            wolverine++;
      }
        cout<<wolverine<<endl;
    }


}
