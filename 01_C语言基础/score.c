#include <stdio.h>

#define NAME_LEN 32

struct Student {
    char name[NAME_LEN];
    int score;
};

int main(void)
{
    struct Student students[] = {
        {"张三", 88},
        {"李四", 92},
        {"王五", 76},
        {"赵六", 95},
    };
    int count = sizeof(students) / sizeof(students[0]);

    printf("%-10s %s\n", "姓名", "分数");
    printf("----------------\n");

    double sum = 0;
    for (int i = 0; i < count; i++) {
        printf("%-10s %d\n", students[i].name, students[i].score);
        sum += students[i].score;
    }

    printf("----------------\n");
    printf("平均分：%.2f\n", sum / count);

    return 0;
}
