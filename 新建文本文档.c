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
//	int sz = sizeof(arr) / sizeof(arr[0]);  //传入的是首元素的地址 ，sizeof 是首元素地址的大小，即指针的大小；
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
//	int(*p)[4] = &arr;  //  数组指针，是一个指向数组的指针。
//	int* p[4] = arr; // 指针数组，是一个存放指针的数组。
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
// int *p  指针
// int *p[]  指针数组，数组存放int*类型
// int (*p)[] 数组指针，指针指向一个int型的数组
// int(*p[])[] 数组p存放一组指针，类型为int*,而存放的指针又指向int型的数组