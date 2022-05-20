#include <stdio.h>

int main()
{
    printf("%d/%d is %d. \n", 3, 2, 3/2);

    printf("0: 3/2 is 1.5.\n");

    printf("1: %d/%d is %d.%d. \n", 3, 2, 1, 5);
    printf("2: %d/%d is %.1f. \n", 3, 2, 1.5);
    printf("3: %d/%d is %.1f. \n", 3, 2, 3.0/2);
    printf("4: %d/%d is %f. \n", 3, 2, 3.0/2.0);
    printf("5: %d/%d is %s. \n", 3, 2, "1.5");
    printf("6: %d/%d is %.1f. \n", 3, 2, (double)3/2);
    printf("7: %d/%d is %1.1f. \n", 3, 2, 3/2);
    printf("8: %d/%d is %.1f. \n", 3, 2, 3/2);
    printf("9: %d/%d is %d0.1f \n", 3, 2, 3/2);
    printf("10: %d/%d is %c, \n", 3, 2, 1.5);
    printf("11: %d/%d is %.1f. \n", 3, 2, (double)3/2);
    printf("12: %d/%d is %.1lf. \n", 3, 2, 1.5);
    printf("13: %d/%d is %.1f. \n", 3, 2, (double)3/(double)2);
    return 0;
}