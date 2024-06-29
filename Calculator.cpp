//by Sushant Gaurav

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}

int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}

int main()
{
    int choice,num1,num2,i;
    while(true)
    {
        cout<<"\n1. ADD"<<endl
        <<"2. SUBTRACT"<<endl
        <<"3. MULTIPLY"<<endl
        <<"4. DIVIDE (get quotient and remainder)"<<endl
        <<"5. SQUARE ROOT"<<endl
        <<"6. POWER(a number to power other number)"<<endl
        <<"7. LCM"<<endl
        <<"8. HCF"<<endl
        <<"9. FACTORIAL"<<endl
        <<"10. FACTORS"<<endl
        <<"11. nPr"<<endl
        <<"12. EXIT"<<endl
        <<"\nEnter your choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"\nEnter the two numbers"<<endl;
                cin>>num1>>num2;
                cout<<"\nSum = "<<num1 + num2<<endl;
                break;
            }

        case 2:
            {
                cout<<"\nEnter the two numbers"<<endl;
                cin>>num1>>num2;
                cout<<"\nDifference = "<<(num1 - num2)<<endl;
                break;
            }

        case 3:
            {
                cout<<"\nEnter the two numbers"<<endl;
                cin>>num1>>num2;
                cout<<"\nProduct = "<<num1 * num2<<endl;
                break;
            }

        case 4:
            {
                cout<<"\nEnter the two numbers"<<endl;
                cin>>num1>>num2;
                cout<<"\nQuotient = "<<num1/num2;
                cout<<"\nRemainder = "<<num1%num2<<endl;
                break;
            }

        case 5:
            {
                cout<<"\nEnter the number : ";
                cin>>num1;
                cout<<"\nSquare root = "<<sqrt(num1)<<endl;
                break;
            }

        case 6:
            {
                cout<<"\nEnter the number : ";
                cin>>num1;
                cout<<"Enter its power : ";
                cin>>num2;
                cout<<num1<<" to the power "<<num2<<" = "<<pow(num1,num2)<<endl;
                break;
            }

        case 7:
            {
                cout<<"\nEnter the numbers"<<endl;
                cin>>num1>>num2;

                int maximum = (num1 > num2) ? num1 : num2;
                do
                {
                    if (maximum % num1 == 0 && maximum % num2 == 0)
                    {
                        cout<<"LCM = "<<maximum<<endl;
                        break;
                    }
                    else
                        ++maximum;
                }while(true);

                break;
            }

        case 8:
            {
                cout<<"\nEnter the numbers"<<endl;
                cin>>num1>>num2;

                while(num1 != num2)
                {
                    if(num1 > num2)
                        num1 -= num2;
                    else
                        num2 -= num1;
                }
                cout<<"HCF = "<<num1;

                break;
            }

        case 9:
            {
                int ans=1;
                cout<<"\nEnter the number : ";
                cin>>num1;
                for(i=1 ; i <= num1 ; i++)
                {
                    ans = ans * i;
                }
                cout<<"\nFactorial of "<<num1<<" = "<<ans<<endl;

                break;
            }

        case 10:
            {
                cout<<"\nEnter the number : ";
                cin>>num1;

                cout<<"Factors are : ";
                for(i=1 ; i <= num1 ; i++)
                {
                    while(num1 % i == 0)  //we can also write if
                    {
                        num1%i==0;
                        cout<<i<<"  ";
                        i++;
                    }
                }
                cout<<endl;
                break;
            }

        case 11:
            {
                cout<<"\nEnter the number : ";
                cin>>num1;
                cout<<"Enter the r : ";
                cin>>num2;
                cout<<num1<<"P"<<num2<<" = "<<nPr(num1 , num2)<<endl;

                break;
            }

        case 12:
            {
                exit(0);
            }

        default :
            cout<<"\nINVALID CHOICE"<<endl;
        }
    }
}
