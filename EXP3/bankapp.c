#include<stdio.h>
#include<stdlib.h>
typedef struct
{
int acc_no;
    char acc_type;
    char name[20];
    float balance;
}account;

account customer[10];
account customer[]={{100,'s',"swap",1000.90},
                    {101,'r',"chilli",3000.50},
                    {102,'c',"kanade",5000},
                    {103,'s',"shreyas",4000.80},
                    {104,'s',"champuu",6000.3}
};
float amt;
int arin;
void balance()
{
printf("\n\nyour account balance is %0.2f",customer[arin].balance);

}
void deposit()
{

printf("please enter the amount to be deposited:");
scanf("%f",&amt);
    customer[arin].balance+=amt;
printf("\nrs.%0.2f is deposited in your account",amt);
printf("\n\nthe current balance is %0.2f",customer[arin].balance);

}
void withdraw()
{

printf("\nenter the amount to be withdrawn:");
scanf("%f",&amt);
    if(amt>customer[arin].balance)
printf("\nno sufficient balance:");
    else
    {
        customer[arin].balance-=amt;
printf("\nplease collect your amount--------.\n\nThe current balance is %0.2f\n",customer[arin].balance);
    }


}
int main()
{
int accnum,choice;
int i,flag=0;
printf("\n------------");
printf("\nwelcome to the WORLD bank");
printf("\n------------");
printf("\nplease enter your 3 digit acount number:");
scanf("%d",&accnum);
    for(i=0;i<5;i++)
    {
        if (customer[i].acc_no==accnum)
        {
            flag=1;
            break;
        }
        else
        {
            continue;

        }
    }
    if(flag==0)
    {
printf("\nsorry !!!!invalid account number\n");
exit(0);
    }
arin=accnum%100;
printf("\naccount number:%d\taccount type:%c\t\tname:%s",customer[arin].acc_no,customer[arin].acc_type,customer[arin].name);
do{
printf("\n\nplease enter your choice:");
printf("\n\n1.balance enquiry 2.deposit 3.withdraw 4.exit :");
scanf("%d",&choice);


    switch(choice)
    {
        case 1:balance();
        break;
        case 2:deposit();
        break;
        case 3:withdraw();
        break;
default:exit(0);
    };
}while(1);
    return 0;

}

