// Nguyen Doanh Thinh - HE161890
// Workshop 5
// 
// bai 1: chuyen 1  so thuc sang binary
//
//#include<stdio.h>
//int arr[100];
//void truoc(float n) {
//	int i=0,j;
//	int a=(int)n/1;
//	while (a!=0) {
//		arr[i]=a%2;
//		a/=2;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) printf("%d",arr[j]);
//}
//void sau(float n) {
//	int i=0,j,a=(int)n;
//	float b=n-a,c,d; 
//	while (b!=0) {
//		c=b*2;
//		arr[i]=(int)c;
//		b=c-arr[i];
//		i++;
//	}
//	for (j=0;j<i;j++) printf("%d",arr[j]);
//}
//main() 
//{
//	float n;
//	printf("n= "); scanf("%f",&n);
//	truoc(n);
//	printf(".");
//	sau(n);
//}
//
// bai 2: chuyen so binary co dau phay sang decimal
//
//#include<stdio.h> 
//#include<math.h>
//int arr[100];
//long int truoc(double n) {
//	int i=0,a=(int)n/1,sum,count=0;
//	while (a!=0) {
//		arr[i]=a%10;
//		i++;
//		count++;
//		a/=10;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(2,i));
//	return sum;
//}
//float sau(double n) {
//	int i=0,count=0,a=(int)n/1,j;
//	float b=n-a,sum=0.0,c;
//	while (b!=0.0) {
//		c=b*10;
//		arr[i]=(int)(b*10);
//		b=c-arr[i];
//		i++;
//		count++;
//	}
//	for (j=1;j<count;j++) sum+=(arr[j-1] * pow(2,-j));
//	sum*=pow(10,-(count));
//	return sum;
//}
//main()
//{
//	double n,a;
//	printf("n= "); scanf("%lf",&n);
//	a=n;
//	printf("%f",sau(n)+truoc(a));
//}
//
// bai 3: chuyen decimal sang hexadecimal va nguoc lai
//
//#include<stdio.h>
//#include<math.h>
//int arr[100];
//void dectohex(long int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%16;
//		n/=16;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) {
//		if (arr[j]==10) printf("A");
//		else if (arr[j]==11) printf("B");
//		else if (arr[j]==12) printf("C");
//		else if (arr[j]==13) printf("D");
//		else if (arr[j]==14) printf("E");
//		else if (arr[j]==15) printf("F");
//		else printf("%d",arr[j]);
//	}
//}
//int hextodec(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<=count;i++) sum+=(arr[i]*pow(16,i));
//	return sum;
//}
//main()
//{
//	long int n;
//	printf ("n= ");	scanf("%d",&n);
//	dectohex(n);
//	printf("n sang decimal: %d",hextodec(n));
//}
//
// bai 4: nhap n,a,b chuyen n tu he co so a sang b bat ki
//
//#include<stdio.h>
//#include<math.h>
//int arr[100];
//// decimal sang binary
//void detobi(int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%2;
//		n/=2;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) printf("%d",arr[j]);
//}
//// decimal sang octal
//void detooc(int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%8;
//		n/=8;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) printf("%d",arr[j]);
//}
//// decimal sang hexadecimal
//void detohe(long int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%16;
//		n/=16;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) {
//		if (arr[j]==10) printf("A");
//		else if (arr[j]==11) printf("B");
//		else if (arr[j]==12) printf("C");
//		else if (arr[j]==13) printf("D");
//		else if (arr[j]==14) printf("E");
//		else if (arr[j]==15) printf("F");
//		else printf("%d",arr[j]);
//	}
//}
//// binary sang decimal
//int checkbi(int n) {
//	int i=0,count;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		if (arr[i]!=0 && arr[i]!=1) count++;
//	}
//	if (count==0) return 1;
//	else return 0;
//}
//int bitode(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(2,i));
//	return sum;
//}
//// octal sang decimal
//int octode(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(8,i));
//	return sum;
//}
//// hexadecimal sang decimal
//int hetode(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(16,i));
//	return sum;
//}
//// binary sang octal
//void bitooc(int n) {
//	int a=bitode(n);
//	detooc(a);
//} 
//// binary sang hexadecimal
//void bitohe(int n) {
//	int a=bitode(n);
//	detohe(a);
//}
//// octal sang binary
//void octobi(int n) {
//	int a=octode(n);
//	detobi(a);
//}
//// octal to hexadecimal
//void octohe(int n) {
//	int a=octode(n);
//	detohe(a);
//}
//// hexadecimal to binary
//void hetobi(int n) {
//	int a=hetode(n);
//	detobi(a);
//}
//// hexadecimal to octal
//void hetooc(int n) {
//	int a=hetode(n);
//	detooc(a);
//}
//main()
//{
//	int n,a,b;
//	printf("a= "); scanf("%d",&a);
//	printf("b= "); scanf("%d",&b);
//	printf("n= "); scanf("%d",&n);
//	if (a==10 && b==2) detobi(n);
//	if (a==10 && b==8) detooc(n);
//	if (a==10 && b==16) detohe(n);
//	if (a==2 && b==10) {
//		while (checkbi(n)==0) {
//			printf("nhap binary n= "); scanf("%d",&n);
//		}
//		printf("%d",bitode(n));
//	}
//	if (a==8 && b==10) printf("%d",octode(n));
//	if (a==16 && b==10) printf("%d",hetode(n));
//	if (a==2 && b==8) {
//		while (checkbi(n)==0) {
//			printf("nhap binary n= "); scanf("%d",&n);
//		}
//		bitooc(n);
//	}
//	if (a==2 && b==16) {
//		while (checkbi(n)==0) {
//			printf("nhap binary n= "); scanf("%d",&n);
//		}
//		bitohe(n);
//	}
//	if (a==8 && b==2) octobi(n);
//	if (a==8 && b==16) octohe(n);
//	if (a==16 && b==2) hetobi(n);
//	if (a==16 && b==8) hetooc(n);
//}
