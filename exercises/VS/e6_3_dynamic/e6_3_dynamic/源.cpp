#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 40

typedef struct node {
    char id[10];
    char name[9];
    int score;
    char remarks[21];
    struct node *next;
} Node , *pNode;

int studentCount = 0; // 实际学生人数

//函数声明
// 函数声明
void inputStudentInfo(pNode *head);
void printStudentInfo(pNode head);
void queryStudentsByScore_up(pNode head, int score);
void queryStudentsByScore_down(pNode head, int score);
void sortStudentsByScore(pNode *head);
void printMenu();
pNode creat();

int main() {
    //创建链表并申请存储空间
    pNode head = NULL;
    head = creat();

    //打印操作菜单
    int choice;
    do {
        printMenu();
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            inputStudentInfo(&head);
            break;
        case 2:
            printStudentInfo(head);
            break;
        case 3:
            int score_temp;
            printf("Enter the score to query (up): ");
            scanf("%d", &score_temp);
            queryStudentsByScore_up(head, score_temp);
            break;
        case 4:
            printf("Enter the score to query (down): ");
            scanf("%d", &score_temp);
            queryStudentsByScore_down(head, score_temp);
            break;
        case 5:
            sortStudentsByScore(&head);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    // 释放链表内存
    pNode temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

//函数定义
pNode creat() {
    pNode head = (pNode)malloc(sizeof(Node));
    if (head == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
    }

    head->next = NULL;
    return head;
}

void inputStudentInfo(pNode *head) {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum student limit reached.\n");
        return;
    }
    pNode new_node = (pNode)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter student ID: ");
    scanf("%s", new_node->id);
    printf("Enter student name: ");
    scanf("%s", new_node->name);
    printf("Enter student score: ");
    scanf("%d",&new_node->score);
    printf("Enter remarks (optional): ");
    scanf("%s", new_node->remarks);
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        pNode temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    studentCount++;
}

void printStudentInfo(pNode head) {
    pNode temp = head->next; // 从头节点的下一个节点开始打印，因为头节点是空的
    while (temp != NULL) {
        printf("ID: %s, Name: %s, Score: %d, Remarks: %s\n", temp->id, temp->name, temp->score, temp->remarks);
        temp = temp->next;
    }
}

void queryStudentsByScore_up(pNode head, int score) {
    pNode temp = head->next; // 从头节点的下一个节点开始查询，因为头节点是空的
    while(temp != NULL) {
        if (temp ->score >= score){
            printf("ID: %s , Name: %s, Score: %d, Remarks: %s\n", temp->id, temp->name, temp->score, temp->remarks);
        }
        temp = temp->next;
    }
}

void queryStudentsByScore_down(pNode head, int score) {
    pNode temp = head->next; // 从头节点的下一个节点开始查询，因为头节点是空的
    while (temp != NULL) {
        if (temp->score < score) {
            printf("ID: %s , Name: %s, Score: %d, Remarks: %s\n", temp->id, temp->name, temp->score, temp->remarks);
        }
        temp = temp->next;
    }
}

void sortStudentsByScore(pNode *head) {
    int swapped;
    pNode ptr1;
    pNode lptr = NULL;

    if (*head == NULL || (*head)->next == NULL) {
        return; // 如果链表为空或只有一个节点，则不需要排序
    }

    do {
        swapped = 0;
        ptr1 = *head;
        while (ptr1->next != lptr) {
            if (ptr1->score < ptr1->next->score) {
                // 交换两个节点的数据
                char temp_id[10];
                char temp_name[9];
                int temp_score;
                char temp_remarks[21];
                //创建临时数据空间

                strcpy(temp_id, ptr1->id);
                strcpy(temp_name, ptr1->name);
                temp_score = ptr1->score;
                strcpy(temp_remarks, ptr1->remarks);

                strcpy(ptr1->id, ptr1->next->id);
                strcpy(ptr1->name, ptr1->next->name);
                ptr1->score = ptr1->next->score;
                strcpy(ptr1->remarks, ptr1->next->remarks);

                strcpy(ptr1->next->id, temp_id);
                strcpy(ptr1->next->name, temp_name);
                ptr1->next->score = temp_score;
                strcpy(ptr1->next->remarks, temp_remarks);

                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void printMenu() {
    printf("\nMenu:\n");
    printf("1. Input Student Info\n");
    printf("2. Print All Student Info\n");
    printf("3. Qury(up) Students by Score\n");
    printf("4. Qury(down) Students by Score\n");
    printf("5. Sort Students by Score\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}