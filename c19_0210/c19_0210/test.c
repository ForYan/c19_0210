#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
//��ʾ���룬��ʾ����ַ����������м��ۡ�
//�ȶ�����ַ���
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
//��1��ӡ��10������5��
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

//��1��ӡ��10
//int main(){
//	int i = 1;
//	for (i = 1; i <= 10; i++){
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//��1ѭ����10���������5������5��
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
//��1ѭ����10������5�ͽ���ѭ����
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
//����һ����ʾ���ڵ����֣���������ڼ���
//int main(){
//	int num;
//	printf("����һ����ʾ���ڵ����֣�1-7����");
//	scanf("%d", &num);
//	switch (num){
//	case 1: 
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//���1-100֮�������
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
//�ж�һ�����Ƿ�������
//int main(){
//	int num;
//	printf("������һ��������");
//	scanf("%d", &num);
//	if (num % 2 == 1){
//		printf("����������\n");
//	}
//	else{
//		printf("������������\n");
//	}
//	system("pause");
//	return 0;
//}