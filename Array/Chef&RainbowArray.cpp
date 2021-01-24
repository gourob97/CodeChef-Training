#include<iostream>
using namespace std;

int main()
{

    int test, n, flag, p1, p2;
    int elem[100];
    cin >> test;

    while (test--)
    {
        flag = 1;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> elem[i];
        }

        p1 = 0;
        p2 = n - 1;

        if (elem[0] != 1) {
            flag = 0;

        }

        else
        {
            while (p1 < p2)
            {

                if (elem[p1] != elem[p2])
                {
                    flag = 0;
                    //printf("break from 1");
                    break;
                }

                if (!(elem[p1] == elem[p1+1] || (elem[p1]+1) == elem[p1+1]))
                {
                    flag = 0;
                    //cout<<"not consequntial"<<endl;
                     //printf("break from 2");
                    // cout<<p1<<p2<<endl;
                    break;
                }

                if (elem[p1] > 7)
                {
                    flag = 0;
                     //printf("break from 3");
                    break;
                }
                p1++;
                p2--;

            }

            if(elem[p1]!=7)
                flag=0;

        }

        if (flag == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;



    }

}
