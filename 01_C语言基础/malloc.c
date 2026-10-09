#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("请输入数组长度：");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("输入无效！\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }

    printf("请输入 %d 个整数：\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("输入无效！\n");
            free(arr);
            return 1;
        }
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("平均值 = %.2f\n", sum / n);

    free(arr);
    arr = NULL;

    return 0;
}
