#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����

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
//	//����
//	printf("Please enter three num you need.\n");
//	scanf("%d %d %d",&a,&b,&c);
//
//	//ָ�봫�뺯���������
//	sort_print(&a , &b, &c);
//
//	return 0;
//}



//�ַ���

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
//    // ����
//    printf("Please enter three characters you need.\n");
//    scanf(" %c %c %c", &a, &b, &c); // ע����%cǰ�ӿո��������κοհ��ַ�
//
//    // ָ�봫�뺯���������
//    sort_print(&a, &b, &c);
//
//    return 0;
//}

//�ַ�����
#include<string.h>
void comp(char** m, char** n) {
    if (strcmp(*m, *n) > 0) { // ʹ�� strcmp ���Ƚ��ַ���
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
    char a[100], b[100], c[100]; // �����ַ������Ȳ�����99

    // ����
    printf("Please enter three strings you need.\n");
    scanf("%99s", a); // ��ȡ��һ���ַ��������Ƴ���Ϊ99
    scanf("%99s", b); // ��ȡ�ڶ����ַ���
    scanf("%99s", c); // ��ȡ�������ַ���

    // ָ�봫�뺯���������
    sort_print(a, b, c);

    return 0;
}