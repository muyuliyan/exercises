#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 //计算平均分的函数
int average(int scores[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    double average_score = sum / size;

    return average_score;
}

//查找最高分的函数
int max_index(int scores[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (scores[max_index] < scores[i]) {
            max_index = i;
        }
    }
    return max_index; // 返回最高分的索引
}

//初始化结构体
struct student {
    int number;
    char name[10];
    int sc_Eng;
    int sc_Math;
    int sc_Chi;
};

int main() {
    struct student stu[10];
    char buffer[256];
    int sc_Chi[10] = { 0 }; // 存储所有学生的语文成绩
    int sc_Math[10] = { 0 }; // 存储所有学生的数学成绩
    int sc_Eng[10] = { 0 }; // 存储所有学生的英语成绩

    //利用fgets和sscanf直接读取所有数据并分析
    printf("Please enter all students' data, one student per line.\n");
    for (int i = 0; i < 10; i++) {
        //错误处理
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error reading data.\n");
            return 1;
        }
        sscanf(buffer, "%d %s %d %d %d", &stu[i].number, stu[i].name, &stu[i].sc_Chi, &stu[i].sc_Eng, &stu[i].sc_Math);
        sc_Chi[i] = stu[i].sc_Chi;
        sc_Math[i] = stu[i].sc_Math;
        sc_Eng[i] = stu[i].sc_Eng;
    }

    ////打印测试
    //printf("Here are all students' datas:\nnumber\tname\tChinese\tEnglish\tMath\n");
    //for (int i = 0; i < 10; i++) {
    //    printf("%03d\t%s\t%d\t%d\t%d\n", stu[i].number, stu[i].name, stu[i].sc_Chi, stu[i].sc_Eng, stu[i].sc_Math);
    //}

    //求总平均分并打印
    printf("The average score of Chinese is:%d\n",average(sc_Chi, 10));
    printf("The average score of English is:%d\n", average(sc_Eng, 10));
    printf("The average score of Math is:%d\n", average(sc_Math, 10));
    
    //查找三门课最高分同学
    printf("The highest score of Chinese student's number is:%03d\n", stu[max_index(sc_Chi, 10)].number);
    printf("The highest score of English student's number is:%03d\n", stu[max_index(sc_Eng, 10)].number);
    printf("The highest score of Math student's number is:%03d\n", stu[max_index(sc_Math, 10)].number);

    return 0;
}


//data
//001 Ao 84 77 56
//002 Pao 88 67 99
//003 Huang 90 89 88
//004 Shu 87 85 86
//005 Yen 90 91 99
//006 Xu 85 95 78
//007 Pai-li 100 90 67
//008 Tsai 89 89 88
//009 Yeh 98 98 98
//010 Yang 95 89 87