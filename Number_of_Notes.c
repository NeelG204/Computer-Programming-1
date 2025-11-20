#include<stdio.h>
int main()
{
    int Amount;
    int arr[]={500,200,100,50,20,10,5,2,1};
    int FH,TH,OH,FY,TY,TN,F,T,O;

    printf("Enter Amount: Rs.");
    scanf("%d",&Amount);

    while(Amount>0)
    {
        if(Amount>=500)
        {

            FH=Amount/500;
            Amount%=500;
            printf("%d notes of 500.\n",FH);
        }
        else if(Amount>=200)
        {

            TH=Amount/200;
            Amount%=200;
            printf("%d notes of 200.\n",TH);
        }
        else if(Amount>=100)
        {

            OH=Amount/100;
            Amount%=100;
            printf("%d notes of 100.\n",OH);
        }
        else if(Amount>=50)
        {

            FY=Amount/50;
            Amount%=50;
            printf("%d notes of 50.\n",FY);
        }
        else if(Amount>=20)
        {
            TY=Amount/20;
            Amount%=20;
            printf("%d notes of 20.\n",TY);
        }
        else if(Amount>=10)
        {
            TN=Amount/10;
            Amount%=10;
            printf("%d notes of 10\n",TN);
        }
        else if(Amount>=5)
        {
            F=Amount/5;
            Amount%=5;
            printf("%d notes of 5.\n",F);
        }
        else if(Amount>=2)
        {
            T=Amount/2;
            Amount%=2;
            printf("%d notes of 2.\n",T);
        }
        else if(Amount>=1)
        {
            O=Amount/1;
            Amount%=1;
            printf("%d notes of 1.\n",O);
        }
    }
    return 0;
}
