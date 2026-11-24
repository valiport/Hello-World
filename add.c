#include <stdio.h>
// zum Compilieren: gcc add.c -o add
int main(void){
    int x,y;
    int sum;
    int rem;//reminder
    float div;
    printf("Geben Sie erste ganze Zahlen ein: ");
    scanf("%d", &x);
    printf("Geben Sie zweite ganze Zahlen ein: ");
    scanf("%d", &y);
    sum =x+y;
    div = (float)x/(float)y;
    rem = x%y;
    printf("Die Summe von x+y:%d\n",sum);
    printf("Die Summe von x/y:%.2f\n",div);
    printf("Die Summe von x/y:%d\n",x/y);
    printf("Der Rest von x%%y:%d\n",rem);
    return 0;
}