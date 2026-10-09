#include <stdio.h>

int main(void)
{
    double a, b, result;
    char op;

    printf("请输入表达式：");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("输入格式错误！\n");
        return 1;
    }

    switch (op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0) {
            printf("错误：除数不能为 0！\n");
            return 1;
        }
        result = a / b;
        break;
    default:
        printf("错误：不支持的运算符 '%c'！\n", op);
        return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", a, op, b, result);

    return 0;
}
