#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char name[20];
    int year;
    int month;
    int day;
} Student;

// 函数声明
void writeStudentInfoToFile(const char* filename, Student* students, int count);
void printStudentInfo(const Student* student);

int main() {
    // 创建学生信息数组
    Student students[] = {
        {1020, "张丽", 1995, 12, 21},
        {1022, "李林", 1996, 10, 1},
        {1026, "王一", 1998, 5, 16}
    };
    int studentCount = sizeof(students) / sizeof(students[0]);

    // 写入文件
    writeStudentInfoToFile("students.txt", students, studentCount);

    // 打印学生信息的标题
    printf("\t\t\tbirthday\n");
    printf("num\tname\tyear\tmonth\tday\n");

    // 打印学生信息
    for (int i = 0; i < studentCount; i++) {
        printStudentInfo(&students[i]);
    }

    return 0;
}

// 将学生信息写入文件的函数
void writeStudentInfoToFile(const char* filename, Student* students, int count) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // 写入标题
    fprintf(file, "\t\t\tbirthday\n");
    fprintf(file, "num\tname\tyear\tmonth\tday\n");

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\t%-8s\t%4d\t%2d\t%2d\n",
                students[i].num, students[i].name,
                students[i].year, students[i].month, students[i].day);
    }

    fclose(file);
}

// 打印学生信息的函数
void printStudentInfo(const Student* student) {
    printf("%d\t%-8s\t%4d\t%2d\t%2d\n",
           student->num, student->name,
           student->year, student->month, student->day);
}