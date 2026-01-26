#include <stdio.h>

int main(){
    int firstNum;
    int secondNum;
    char operator;
    printf("Enter the firstNum: ");
    scanf("%d", &firstNum);
    printf("firstNum: %d\n", firstNum);
    printf("Enter the secondNum: ");
    scanf("%d", &secondNum);
    printf("secondNum: %d\n", secondNum);
    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Operator: %c\n", operator);
    return 0;
}