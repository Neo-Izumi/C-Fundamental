// PART 3: POINTER
//
// ex 1: the basic information about pointer
//
#include<stdio.h>
main()
{
	int a;
	a=10;
	printf(" value of variable 'a': %d",a);
	printf("\n address of 'a': %d",&a);
	// to declare a pointer, we use:
	int* p=&a;
//	int *p=&a; 
//	int *p; p=&a;
	// khi khai bao, ki ty '*' la thuoc cu phap khai bao 1 con tro chu khong phai la toan tu '*' dung de lay gia tri bien ma con tro tro toi
	printf("\n value of pointer 'p': %d",p);
	printf("\n addressof pointer 'p': %d",&p);
	printf("\n value of variale 'a' that is pointed by pointer 'p': %d",*p);
	// here, 'p' is pointer variable, '&p' is the address of pointer variable 'p', '*' is dereference operator (when working with pointers)
	// to change the value of variable through a pointer, we use:
	*p=100;
	printf("\n value of variable 'a' %d",a);
	printf("\n value of variale 'a' that is pointed by pointer 'p': %d",*p);
}
