#include <stdio.h>
int main()
{
    float marks, income;
    printf("Enter student marks percentage: ");
    scanf("%f", &marks);
    printf("Enter family monthly income: ");
    scanf("%f", &income);
    if (marks >= 80 || income < 50000) {
        printf("You qualify for the scholarship.\n");
    } else {
        printf("You do not qualify for the scholarship.\n");
    }
    return 0;
}