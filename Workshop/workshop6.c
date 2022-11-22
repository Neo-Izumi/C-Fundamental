// Nguyen Doanh Thinh - HE161890
// 
// workshop 5:
//
// nhap mang gom n phan tu, viet code sap xep cac phan tu theo 4 thuat toan
//
#include<stdio.h>
int arr[100];
void input(int arr[], int n) {
	int i;
	for (i=0;i<n;i++) {
		printf ("so thu %d = ",i+1);
		scanf ("%d",&arr[i]);
	}
}
void output(int arr[], int n) {
	int i;
	for (i=0;i<n;i++) printf ("%5d",arr[i]);
}
//
// selection sort
// tang dan
void selectin(int arr[], int n) {
	int min,i,j,tem;
	for (i=0;i<n-1;i++) {
		min=i;
		for (j=i+1;j<n;j++) {
			if (arr[min]>arr[j]) min=j;
		}
		tem=arr[i];
		arr[i]=arr[min];
		arr[min]=tem;
	}
}
// giam dan
void selectde(int arr[], int n) {
	int min,i,j,tem;
	for (i=0;i<n-1;i++) {
		min=i;
		for (j=i+1;j<n;j++) {
			if (arr[min]<arr[j]) min=j;
		}
		tem=arr[i];
		arr[i]=arr[min];
		arr[min]=tem;
	}
}
//
// interchange sort
// tang dan
void interin(int arr[], int n) {
	int i,j,tem;
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (arr[i]>arr[j]) {
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;	
			}
		}
	}
}
// giam dan
void interde(int arr[], int n) {
	int i,j,tem;
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (arr[i]<arr[j]) {
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;	
			}
		}
	}
}
//
// inserttion sort
// tang dan
void insertin(int arr[], int n) {
	int pos,i,key;
	for (i=1;i<n;i++) {
		key=arr[i];
		pos=i-1;
		while (pos>=0 && arr[pos]>key) {
			arr[pos+1]=arr[pos];
			pos--;
		}
		arr[pos+1]=key;
	}
}
// giam dan
void insertde(int arr[], int n) {
	int pos,i,key;
	for (i=1;i<n;i++) {
		key=arr[i];
		pos=i-1;
		while (pos>=0 && arr[pos]<key) {
			arr[pos+1]=arr[pos];
			pos--;
		}
		arr[pos+1]=key;
	}
}
//
// bubble sort
// tang dan 
void bubin(int arr[], int n) {
	int i,j,tem;
	for (i=n-1;i>0;i--) {
		for (j=0;j<i;j++) {
			if (arr[j]>arr[j+1]) {
				tem=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=tem;
			}
		}
	}
}
// giam dan
void bubde(int arr[], int n) {
	int i,j,tem;
	for (i=n-1;i>0;i--) {
		for (j=0;j<i;j++) {
			if (arr[j]<arr[j+1]) {
				tem=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=tem;
			}
		}
	}
}
// bubble sort ver2
// tang dan
void bubinver2(int arr[], int n) {
	int i,j,tem;
	for (i=0;i<n-1;i++) {
		for (j=n-1;j>i;j--) {
			if (arr[j]<arr[j-1]) {
				tem=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tem;
			}
		}
	}
}
// giam dan
void bubdever2(int arr[], int n) {
	int i,j,tem;
	for (i=0;i<n-1;i++) {
		for (j=n-1;j>i;j--) {
			if (arr[j]>arr[j-1]) {
				tem=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tem;
			}
		}
	}
}
main()
{
	int n;
	printf("so phan tu cua mang: "); scanf("%d",&n);
	input(arr,n);
	printf ("\ninput mang: "); output(arr,n);
	printf ("\nsap xep tang dan: ");
	selectin(arr,n);
//	interin(arr,n);
//	insertin(arr,n);
//	bubinver2(arr,n);
	output(arr,n);
	printf ("\nsap xep giam dan: ");
//	selectde(arr,n);
//	interde(arr,n);
//	insertde(arr,n);
//	bubde(arr,n);
//	bubdever2(arr,n);
	output(arr,n);
}


