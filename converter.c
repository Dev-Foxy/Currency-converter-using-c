#include <stdio.h>
int main()
{
    int choice;
    float bdt, usd;
    printf("Unit Converter\n");
    printf("Enter 1 to convert BDT to USD\n");
    printf("Enter 2 to convert USD to BDT\n");
    scanf("%d", &choice);

    // Conversion
    if (choice == 1)
    {
        printf("Enter your BDT amount\n");
        scanf("%f", &bdt);
        usd = bdt / 101.08;
        printf("BDT %f to USD is %f", bdt, usd);
    }
    else if (choice == 2)
    {
        printf("Enter your USD amount\n");
        scanf("%f", &usd);
        bdt = usd * 101.08;
        printf("USD %f to BDT is %f", usd, bdt);
    }

    return 0;
}