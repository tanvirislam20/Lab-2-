#include<stdio.h>
int main (){
double cost_price,selling_price,profit,lose;
printf("Enter the cost price of an item:");
scanf("%lf",&cost_price);
printf("Enter the selling price of the item:");
scanf("%lf",&selling_price);
profit=selling_price-cost_price;
lose=cost_price-selling_price;
if(cost_price<selling_price){
printf("profit:%.2lf", profit);
}
else
{
printf("lose:%.2lf", lose);
}
return 0;
}
    