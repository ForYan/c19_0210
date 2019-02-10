#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
//演示代码，演示多个字符从两端向中间汇聚。
//先定义好字符串
int main(){
	char str1[] = { "welcome to bit!" };
	char str2[] = { "###############" };
	int left = 0;
	int right = strlen(str1) - 1;
	printf("%s\n", str2);
	while (left <= right){
		Sleep(100);
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n", str2);
		left++;
		right--;
	}
	system("pause");
	return 0;
}
//从1打印到10，跳过5。
//int main(){
//	int i = 1;
//	for (i = 1; i <= 10; i++){
//		if (i == 5){
//			continue;
//		}
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//从1打印到10
//int main(){
//	int i = 1;
//	for (i = 1; i <= 10; i++){
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//从1循环到10，如果遇到5就跳过5。
//int main(){
//	int num = 1;
//	while (num <= 10){
//		if (num == 5){
//			num += 1;
//			continue;
//		}
//		printf("%d ", num);
//		num+=1;
//	}
//	system("pause");
//	return 0;
//}
//从1循环到10，遇到5就结束循环。
//int main(){
//	int num = 1;
//	while (num <= 10){
//		printf("%d ", num);
//		if (num == 5){
//			break;
//		}
//		num += 1;
//	}
//	system("pause");
//	return 0;
//}
//输入一个表示星期的数字，则输出星期几。
//int main(){
//	int num;
//	printf("输入一个表示星期的数字（1-7）：");
//	scanf("%d", &num);
//	switch (num){
//	case 1: 
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//输出1-100之间的奇数
//int main(){
//	int num = 1;
//	while(num<=100) {
//		if (num % 2 == 1){
//			printf("%d ", num);
//		}
//		num += 1;
//	}
//	system("pause");
//	return 0;
//}
//判定一个数是否是奇数
//int main(){
//	int num;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	if (num % 2 == 1){
//		printf("该数是奇数\n");
//	}
//	else{
//		printf("该数不是奇数\n");
//	}
//	system("pause");
//	return 0;
//}