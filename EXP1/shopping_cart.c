#include<stdio.h>
#include<stdlib.h>
void additem();
void deleteitem();
void updatebill();
void displaycart();

int stock[5][3]={{0,0,0},{1,8,100},{2,10,200},{3,15,150},{4,20,250}}; //initialising the stock
typedef struct{ int code;      //initialising structure
                int quantity;
                float cost;
              }cartitems;
cartitems c[10];    //array of structure
int inum=0;
float total=0;

int main()
{
    int i,j,n,choice;
    do{
        printf("\n\nitem code\tquantity\tprice\n");  //item code which is available in stock
        for(i=1;i<5;i++)   //for loop to print the stock
        {
            for(j=0;j<3;j++)
                printf("%d\t\t",stock[i][j]);
            printf("\n");
        }
    printf("\n please enter your choice:");
    printf("\n\n 1: add item to cart 2:delete item from cart 3:display 4:exit:");
    scanf("%d",&choice);

    switch(choice)    //custumer choice case statement
    {
        case 1:additem();
            break;
        case 2:deleteitem();
            break;
        case 3:displaycart();
            break;
        default: exit(0);
    };
    }while(1);
    return 0;
}
void additem()   //function to add item in cart
{
    printf("\nenter the code and quantity of the item to be added to your cart:");
    scanf("%d %d",&c[inum].code,&c[inum].quantity);

    c[inum].cost=c[inum].quantity*stock[c[inum].code][2];

    printf("\n the item with code%d is added to the cast\n", c[inum].code);
    printf("\n your cart contains....\n");
    printf("\n item code\t quantity\tcost\n");
    printf("%d\t\t%d\t\t%0.2f",c[inum].code,c[inum].quantity,c[inum].cost);

    stock[c[inum].code][1]=stock[c[inum].code][1]-c[inum].quantity;
    inum++;
    updatebill();
    return;
}

void deleteitem()  //function to delete last item in cart
{
    printf("\n last item from your cart deleted\n");
    inum--;

    stock[c[inum].code][1]=stock[c[inum].code][1]+c[inum].quantity;
    updatebill();
    return;
}
void updatebill()   //function to update total cost using latest cart item
{
    int i;
    total=0;
    printf("\n there are %d items in your cart...\n\n",inum);

    for(i=0;i<inum;i++)
        total=total+c[i].cost;
    return;
}

void displaycart() //function which shows final cart with grand total
{
    int i;
    printf("\n there are %d items in your cart...\n\n",inum);
    printf("\n itemcode\tquantity\tamount\n");

    for(i=0;i<inum;i++)
        printf("\n%d\t\t%d\t\t%5.2f",c[i].code,c[i].quantity,c[i].cost);
    printf("\n\n\n\t\t\tGrand total is:%5.2f\n",total);
    return;
}

