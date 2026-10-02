 #include<stdio.h>
#include<stdlib.h>
int main()
{
int accountnumber;
char name[20];
float balance=0,amount;
int choice;
printf("BANK MANAGEMENT SYSTEM\n");

printf("enter account number:");
scanf("%d",&accountnumber);
printf("enter name:");
scanf("%S",&name);
printf("select menu");

while(choice!=4)
{
    printf("\n1.deposite money");
    printf("\n2.withdrawal money");
    printf("\n3.check balance");
    printf("\n4.exit");
printf("\n\n enter  choise:");
scanf("%d",&choice);
switch(choice)
{
    case 1:  printf("enter deposite to amount:");
             scanf("%f",&amount);
             balance=balance+amount;
             printf("money deposite succesfull\n");
             break;       
case 2:     printf("enter amount to wihdrawal:");
            scanf("%f",&amount);
            if(amount>balance)
            {
                printf("INSUFFICENT BALANCE\n");
            }

            else
            {
                balance=balance-amount;
                printf("withdawal succesfull\n");
            }
            break;

case 3:    printf("\nACCOUNT  NUMBER:%d",accountnumber);
           printf("\nNAME :",name);
           printf("\nBALANCE:%2f\n",balance);
           break;
case 4:   printf("thank you\n");
          return(0);
default:   printf("INVALID COISE\n");
        }
    }
    return(0);
}                     









