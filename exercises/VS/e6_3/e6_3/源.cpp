#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 40

typedef struct {
    char id[10];     
    char name[9];    
    int score;       
    char remarks[21];
} Student;

Student students[MAX_STUDENTS]; // 存储学生信息的数组
int studentCount = 0;          // 实际学生人数

// 函数声明
void inputStudentInfo();
void printStudentInfo();
void queryStudentsByScore_up(int score);
void queryStudentsByScore_down(int score);
void sortStudentsByScore();
void printMenu();

int main() {
    int choice;
    do {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            inputStudentInfo();
            break;
        case 2:
            printStudentInfo();
            break;
        case 3:
        {
            int score;
            printf("Enter the score to query(up): ");
            scanf("%d", &score);
            queryStudentsByScore_up(score);
            break;
        }
        case 4:
        {
            int score;
            printf("Enter the score to query(down): ");
            scanf("%d", &score);
            queryStudentsByScore_down(score);
            break;
        }
        case 5:
            sortStudentsByScore();
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// 函数定义
void inputStudentInfo() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum student limit reached.\n");
        return;
    }
    printf("Enter student ID: ");
    scanf("%s", students[studentCount].id);
    printf("Enter student name: ");
    scanf("%s", students[studentCount].name);
    printf("Enter student score: ");
    scanf("%d", &students[studentCount].score);
    printf("Enter remarks (optional): ");
    scanf("%s", students[studentCount].remarks);
    studentCount++;
}

void printStudentInfo() {
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %s, Name: %s, Score: %d, Remarks: %s\n", students[i].id, students[i].name, students[i].score, students[i].remarks);
    }
}

void queryStudentsByScore_up(int score) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].score >= score) {
            printf("ID: %s, Name: %s, Score: %d, Remarks: %s\n", students[i].id, students[i].name, students[i].score, students[i].remarks);
        }
    }
}

void queryStudentsByScore_down(int score) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].score < score) {
            printf("ID: %s, Name: %s, Score: %d, Remarks: %s\n", students[i].id, students[i].name, students[i].score, students[i].remarks);
        }
    }
}

void sortStudentsByScore() {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (students[j].score < students[j + 1].score) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printMenu() {
    printf("\nMenu:\n");
    printf("1. Input Student Info\n");
    printf("2. Print All Student Info\n");
    printf("3. Query(up) Students by Score\n");
    printf("4. Query(down) Students by Score\n");
    printf("5. Sort Students by Score\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}