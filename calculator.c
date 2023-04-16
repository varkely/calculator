#include <stdio.h>
#define MAX_LEN 100

int main(void) {
    char operator;
    double num1, num2, output;
    char buffer[MAX_LEN];
    printf("Enter Number (1): ");
    fgets(buffer, MAX_LEN, stdin);
    sscanf(buffer, "%lf", &num1);
    printf("Enter Number (2): ");
    fgets(buffer, MAX_LEN, stdin);
    sscanf(buffer, "%lf", &num2);
    printf("Enter Operator (+, -, *, /): ");
    fgets(buffer, MAX_LEN, stdin);
    sscanf(buffer, "%c", &operator);
    switch (operator) {
        case '+':
            output = num1 + num2;
            break;
        case '-':
            output = num1 - num2;
            break;
        case '*':
            output = num1 * num2;
            break;
        case '/':
            output = num1 / num2;
            break;
        default:
            printf("Failure To Enter Operator!");
            return 1;
    }
    printf("%lf %c %lf = %lf\n", num1, operator, num2, output);
    return 0;
}
