#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int caculation(int a, int b, int c) {
	int count = 0;
	if ((a % 4 == 0 && a % 100 !=0) || a % 400 ==0){
		if (b <= 2) {
			count = (b - 1) * 31 + c;
		}
		else if (b > 2 && b <= 8) {
			if ((b - 3) % 2 == 0) {
				count = 60 + (b - 3) / 2 * 61 + c;
			}
			else {
				count = 60 + (b - 3) / 2 * 61 + 31 + c;
			}
		}
		else {
			if ((b - 9) % 2 == 0) {
				count = 244 + (b - 9) / 2 * 61 + c;
			}
			else {
				count = 244 + (b - 9) / 2 * 61 + 30 + c;
			}

		}
	}
	
	else{
		if (b <= 2) {
			count = (b - 1) * 31 + c;
		}
		else if (b > 2 && b <= 8) {
			if ((b - 3) % 2 == 0) {
				count = 59 + (b - 3) / 2 * 61 + c;
			}
			else {
				count = 59 + (b - 3) / 2 * 61 + 31 + c;
			}
		}
		else {
			if ((b - 9) % 2 == 0) {
				count = 243 + (b - 9) / 2 * 61 + c;
			}
			else {
				count = 243 + (b - 9) / 2 * 61 + 30 + c;
			}

		}
	}
	return count;
}

int main() {
	//建立结构体变量
	struct num_year {
		int year;
		int month;
		int day;
	}Tyear;

	//输入
	printf("Please enter the year, month and day.\n");
	scanf("%d %d %d", &Tyear.year, &Tyear.month, &Tyear.day);

	////输出年份
	//printf("%d",Tyear.year);

	//函数计算第几天
	printf("The day is the %d day of %d year.", caculation(Tyear.year, Tyear.month, Tyear.day), Tyear.year);

	return 0;
}