#include<stdio.h>
int main(){
    int foodType=0,itemNumber=0;
    puts("Welcome to our restaurant The Hills");
    do{
    puts("What you wish to have Veg:1, Non-veg:2. Your choice please: ");
    scanf("%d",&foodType);
    switch(foodType){
        case 1 : puts("1:Mysuru masala Dosa 2:ChowChowBath 3:Idly-Vada 4:BisiBeleBath . Your choice please: ");
        scanf("%d", &itemNumber);
        switch(itemNumber)
        {
            case 1: puts("Here's your yummy Mysuru masala Dosa with red chutney mam");
            break;
            case 2: puts("Yummy ChowChowBath mam");
            break;
            case 3: puts("Yummy Idly-Vada mam");
            break;
            case 4: puts("Yummy BisiBeleBath mam");
            break;
            default:puts("Sorry we don't serve");
        }
        break;
        case 2 : puts("1:Chicken biriyani 2:Fish fry 3:MP 4:Egg biriyani . Your choice please: ");
        scanf("%d", &itemNumber);
        switch(itemNumber)
        {
            case 1: puts("Yummy Chicken biriyani mam");
            break;
            case 2: puts("Yummy Fish fry mam");
            break;
            case 3: puts("Yummy MP mam");
            break;
            case 4: puts("Yummy Egg biriyani mam");
            break;
            default:puts("Sorry we don't serve");
        }
        break;
        default:puts("This is restaurant, not Garden");
    }
    puts("Do you wish to have more? Yes:1, No:Any number");
    scanf("%d",&itemNumber);
    }while(itemNumber==1);
    puts("Thank you visit again");
}