#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//整型

//void comp(int* m, int* n) {
//	if (*m < *n)
//	{
//		int temp = 0;
//		temp = *n;
//		*n = *m;
//		*m = temp;
//	}
//}
//
//void sort_print(int* a, int* b, int* c) {
//	comp(a ,b);
//	comp(a, c);
//	comp(b, c);
//	
//  printf("This is the sorted value:\n");
//	printf("%d %d %d", *a, *b, *c);
//	printf("\n");
//}
//
//int main() {
//	int a, b, c;
//
//	//输入
//	printf("Please enter three num you need.\n");
//	scanf("%d %d %d",&a,&b,&c);
//
//	//指针传入函数排序输出
//	sort_print(&a , &b, &c);
//
//	return 0;
//}



//字符型

//void comp(char* m, char* n) {
//    if (*m < *n) {
//        char temp = 0;
//        temp = *n;
//        *n = *m;
//        *m = temp;
//    }
//}
//
//void sort_print(char* a, char* b, char* c) {
//	  comp(a ,b);
//	  comp(a, c);
//	  comp(b, c);
//
//    printf("This is the sorted characters:\n");
//    printf("%c %c %c", *a, *b, *c);
//    printf("\n");
//}
//
//int main() {
//    char a, b, c;
//
//    // 输入
//    printf("Please enter three characters you need.\n");
//    scanf(" %c %c %c", &a, &b, &c); // 注意在%c前加空格，以跳过任何空白字符
//
//    // 指针传入函数排序输出
//    sort_print(&a, &b, &c);
//
//    return 0;
//}

//字符串型
#include<string.h>
void comp(char** m, char** n) {
    if (strcmp(*m, *n) > 0) { // 使用 strcmp 来比较字符串
        char* temp = *m;
        *m = *n;
        *n = temp;
    }
}

void sort_print(char* a, char* b, char* c) {
    char* arr[3] = { a, b, c };
    comp(&arr[0], &arr[1]);
    comp(&arr[0], &arr[1]);
    comp(&arr[1], &arr[2]);
    
    printf("This is the sorted strings:\n");
    printf("%s %s %s", arr[0], arr[1], arr[2]);
    printf("\n");
}

int main() {
    char a[100], b[100], c[100]; // 假设字符串长度不超过99

    // 输入
    printf("Please enter three strings you need.\n");
    scanf("%99s", a); // 读取第一个字符串，限制长度为99
    scanf("%99s", b); // 读取第二个字符串
    scanf("%99s", c); // 读取第三个字符串

    // 指针传入函数排序输出
    sort_print(a, b, c);

    return 0;
}