#include <stdio.h>
//int main()
//{
//	 const char* p = "abcde";
//	                   ///  err *p = 'w';
//	printf("%s", p);
//	return 0;
//}
//
//void my_measure(char arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);  //���������Ԫ�صĵ�ַ ��sizeof ����Ԫ�ص�ַ�Ĵ�С����ָ��Ĵ�С��
//	printf("%d", sz);
//}
//int main()
//{
//	char arr[10] = { 0 };
//	/*int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);*/
//	my_measure(arr);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int(*p)[4] = &arr;  //  ����ָ�룬��һ��ָ�������ָ�롣
//	int* p[4] = arr; // ָ�����飬��һ�����ָ������顣
//
//	return 0;
//}
//int mian()
//{
//	char* arr[5];
//	char* (*pa)[50] = &arr;
//
//	int arr2[5];
//	int(*pa2)[5] = &arr2;
//	return 0;
//}
//
//
// int *p  ָ��
// int *p[]  ָ�����飬������int*����
// int (*p)[] ����ָ�룬ָ��ָ��һ��int�͵�����
// int(*p[])[] ����p���һ��ָ�룬����Ϊint*,����ŵ�ָ����ָ��int�͵�����