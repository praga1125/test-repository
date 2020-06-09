#include <stdio.h>
#include<conio.h>
void main() {    
    int amount, notes;   
    int currency[7] = { 2000, 500, 100, 50, 20, 10, 1};
    printf("Enter amount: \n");
    scanf("%d", &amount);
    for (int i = 0;i < 7;i++) {
        notes = amount / currency[i];
        if (notes) {
            amount = amount % currency[i];
            printf("%d * %d = %d \n", notes, currency[i], notes * currency[i]);
        }                
    }
}