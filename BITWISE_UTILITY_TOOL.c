
#include <stdio.h>

int main() {
    int n;
    unsigned int a,b,result;

     printf("\nBitwise Operations Menu:\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR (^)\n");
    printf("4. NOT (~) on first number\n");
    printf("5. Left Shift (<<) first number by second number\n");
    printf("6. Right Shift (>>) first number by second number\n");
    printf("Enter your choice (1-6): ");
    scanf("%d",&n);

    printf("Enter first integer: ");
    scanf("%u", &a);
    
    printf("Enter second integer: ");
    scanf("%u", &b);
    
    switch (n) {
        case 1:result=a&b;
            printf("Result of %u & %u = %u\n", a,b,result);
            break;
        case 2:result=a|b;
            printf("Result of %u | %u = %u\n",a,b,result);
            break;
        case 3:result=a^b;
            printf("Result of %u ^ %u = %u\n",a,b,result);
            break;
        case 4:result=a<<b;
            if(a>b)printf("Result of %u << %u = %u\n",a,b,result);
            break;
        case 5:result=a>>b;
            if(a>b)printf("Result of %u >> %u = %u\n",a,b,result);
            break;
           
        default:
            printf("Invalid choice! Please select between 1 and 6.\n");
    }

    return 0;
}

