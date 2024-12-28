#include<stdio.h>

//union u_type {
//	int i;
//	char ch;
//}temp;
//
//
//int main() {
//	temp.i = 266;
//
//	return 0;
//}

struct book_list {
	char name[30];
	char author[30];
	int pub_date;
	int price;
};

void sort(struct book_list * p , int n) {
	int small, i, j;

	for (i = 0; i < n; i++){
		int count = 0;
		for (j = 0; j < n - i - 1; j++){
			if (p[j].pub_date > p[j + 1].pub_date) {
				small = p[j + 1].pub_date;
				p[j + 1].pub_date = p[j].pub_date;
				p[j].pub_date = small;
				count = 1;
			}
		}
		if (count == 0){
			break;
		}
	}
}

void print(struct book_list* p, int n) {
	int i;

	printf("This the list of the book:\n");
	for ( i = 0; i < n; i++){
		printf("%s\t%s\t%d\t%d\n",p[i].author,p[i].name,p[i].price,p[i].pub_date);
	}
}

int main() {
	//初始化结构体
	struct book_list list[5] = {{"light" , "white", 20210105, 28},{"night" , "black", 20231111, 48},{"might" , "green", 20220731, 66},{"right" , "red", 20100922, 37},{"thought" , "pink", 20230911, 98}};
	struct book_list* p = list;

	//排序
	sort(p , 5);

	//打印
	print(p , 5);


	return 0;
}