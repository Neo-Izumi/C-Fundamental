// file 1: PRF292_PE_Trial
// 
// q1: 
//#include<stdio.h>
//main()
//{
//	int a;
//	scanf("%d",&a);
//	if (a%2==1) printf("a is odd");
//	else printf("a is not odd");
//}
//
// q2: nhap vao n, in tong cac so chan nho hon hoac bang n
//#include<stdio.h>
//main()
//{
//	int n,i,sum=0;
//	do {
//		scanf("%d",&n);
//	} while (n<0);
//	for (i=2;i<=n;i+=2) sum+=i;
//	printf ("%d",sum);
//}
//
// q3: nhap 4 so thuc in ra day sap xep giam dan cac so thuc nay va moi so chi co 2 phan thap phan
//#include<stdio.h>
//float a[10];
//main()
//{
//	int i;
//	for (i=0;i<4;i++) scanf("%f",&a[i]);
//	for (i=0;i<3;i++) printf("%.2f ",a[i]);
//	printf("%.2f ",a[3]);
//}
//
// q4: ve tam giac can rong day huong xuong
//#include<stdio.h>
//main()
//{
//	int i,j,n;
//	scanf("%d",&n);
//	for (i=1;i<=2*n-1;i++) printf ("*"); printf("\n");
//	for (i=1;i<n-1;i++) {
//		for (j=1;j<=2*n-1-i;j++) {
//			if (j==i+1) printf("*");
//			else if (j==2*n-1-i) printf("*");
//			else printf(" ");
//			
//		}
//		printf("\n");
//	}
//		for (j=1;j<=n;j++) {
//		if (j==n) printf("*");
//		else printf(" ");
//	}
//}
//
// q5:  nhap vao n so nguyen, in ra tong cua binh phuong cac so le trong mang n 
//#include<stdio.h>
//int a[100];
//main()
//{
//	int i,n,sum=0;
//	do {
//		scanf("%d",&n);
//	} while (n<=0 || n>10);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (a[i]%2==1) sum+=a[i]*a[i];
//	}
//	printf("%d",sum);
//}
//
// q6: nhap 1 chuoi dai va 1 chuoi ngan, tim chuoi ngan trong chuoi dai va sua thanh dao nguoc chuoi ngan trong chuoi dai
//#include<stdio.h>
//#include<string.h>
//char o[100],p[100],a[100],b[100];
//main()
//{
//	int i=0,j,check,c;
//	scanf("%s",o); getchar();
//	scanf("%s",p); getchar();
//	strcpy(a,p);
//	strcpy(b,o); // can 2 string de xet 1 cai theo vi tri va 1 cai de doi cho
//	strrev(a);
//	while (o[i]!=0) {
//		j=0;
//		check=0;
//		c=i;
//		while (p[j]!=0) {
//			if (p[j]!=o[c]) {	// xet o string cu vi string moi se bi doi cho va neu ki ty trung nhau thi lai sai
//				check=1;
//				break;
//			}
//			j++;
//			c++;
//		}
//		if (check==0) {
//			c=i;
//			j=0;
//			while (a[j]!=0) {
//				b[c]=a[j];	// dung string khac de sau khi doi thi xet o string cu van khong sai vi tri
//				c++;
//				j++;
//			}
//		}
//		i++;
//	}
//	puts(p);
//	puts(a);
//	printf ("%s",b);
//}
//
// q7: tim so chan xuat hien nhieu nhat trong mang
//#include<stdio.h>
//int a[100],b[100];
//main()
//{
//	int i,j,max,check=0;
//	for (i=0;i<7;i++) {
//		scanf("%d",&a[i]);
//		if (a[i]%2==0) check=1;
//	}
//	if (check==0) printf ("Pew!!");
//	else {
//		for (i=0;i<6;i++) {
//			for (j=i+1;j<7;j++) {
//				if (a[i]==a[j] && a[i]%2==0 && a[j]%2==0) b[i]+=1;
//			}
//		}
//		max=0;
//		for (i=1;i<7;i++) if (b[max]<b[i]) max=i;
//		for (i=0;i<7;i++) if (b[max]==b[i]) printf ("%d ",a[i]);
//	}
//}
//
// q8: nhapj 1 ky tu, hien thi ma ascii cua ki tu do
//#include<stdio.h>
//main()
//{
//	int a;
//	do {
//		scanf("%d",&a);
//	} while (a<48 || a>90);
//	printf("%c",a);
//}
//
// q9: nhap n, tinh tich  cac chu so cua n
//#include<stdio.h>
//main()
//{
//	int a,b,prd=1,n;
//	scanf("%d",&n);
//	if (n<0) n=-n;
//	if (n==0) printf("0");
//	else {
//		while (n!=0) {
//			prd*=(n%10);
//			n/=10;
//		}
//		printf("%d",prd);
//	}
//}
//
// q10: nhap n tinh tong chu so dau va cuoi cua n
//#include<stdio.h>
//#include<math.h>
//int cs(int n) {
//	int cnt=0;
//	while (n!=0) {
//		cnt++;
//		n/=10;
//	}
//	return cnt;
//}
//main()
//{
//	int a,b,n,sum=0,cnt=0;
//	scanf("%d",&n); 
//	if (n<0) n=-n;
//	a=n%10;
//	b=n/pow(10,cs(n)-1);
//	printf("%d",a+b);
//}
//
// file 2: PE_PRF192_Fall2019.docx
//
// q1:
//#include<stdio.h>
//main()
//{
//	float a,b;
//	scanf("%f",&a);
//	scanf("%f",&b);
//	if (a>b) printf("float a>b");
//	else printf("float a<=b");
//}
//
// q2:even numbers that are greater than or equal to 2 and smaller than or equal to half of n.

//#include<stdio.h>
//main()
//{
//	int i,n,prd=1;
//	do {
//		scanf("%d",&n);
//	} while (n<0);
//	if (n<4) printf ("0");
//	else {
//		for (i=2;i<=n/2;i+=2) prd*=i;
//		printf ("%d",prd);
//	}
//}
//
// q3:  displays the entered numbers in descending order
//#include<stdio.h> 
//float a[100];
//main()
//{
//	int i,j,max;
//	float tem;
//	for (i=0;i<5;i++) scanf("%f",&a[i]);
//	for (i=0;i<4;i++) {
//		max=i;
//		for (j=i+1;j<5;j++) if (a[max]<a[j]) max=j;
//		tem=a[i];
//		a[i]=a[max];
//		a[max]=tem; 
//	}
//	for (i=0;i<4;i++) printf("%f ",a[i]);
//	printf("%f",a[4]);
//}
//
// q4: enter n, displays an inverted right triangle with the height = n.
//#include<stdio.h>
//main()
//{
//	int i,j,n;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) {
//		for (j=1;j<=n;j++) {
//			if (j<=i) printf(" ");
//			else printf("*");
//		}
//		printf("\n");
//	}
//}
//
// q5: the sum of squared of each even integer.
//#include<stdio.h>
//int a[100];
//main()
//{
//	int i,n,sum=0;
//	do {
//		scanf("%d",&n);
//	} while (n<=0||n>10);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) if (a[i]%2==0) sum+=(a[i]*a[i]);
//	printf("%d",sum);
//}
//
// q6: enter a long string ‘o’ and a short string ‘p’ finds the occurrences of ‘p’ in ‘o’ and replaces them by the reversed of ‘p’
//#include<stdio.h>
//#include<string.h>
//char o[100],p[100],a[100],b[100];
//main()
//{
//	int i=0,j,check,c;
//	scanf("%s",o); getchar();
//	scanf("%s",p); getchar();
//	strcpy(a,p);
//	strcpy(b,o); // can 2 string de xet 1 cai theo vi tri va 1 cai de doi cho
//	strrev(a);
//	while (o[i]!=0) {
//		j=0;
//		check=0;
//		c=i;
//		while (p[j]!=0) {
//			if (p[j]!=o[c]) {	// xet o string cu vi string moi se bi doi cho va neu ki ty trung nhau thi lai sai
//				check=1;
//				break;
//			}
//			j++;
//			c++;
//		}
//		if (check==0) {
//			c=i;
//			j=0;
//			while (a[j]!=0) {
//				b[c]=a[j];	// dung string khac de sau khi doi thi xet o string cu van khong sai vi tri
//				c++;
//				j++;
//			}
//		}
//		i++;
//	}
//	puts(p);
//	puts(a);
//	printf ("%s",b);
//}
//
// q7: find the two-digit number(s) that appear(s) the most in the array of 7 integers
//#include<stdio.h>
//int a[100],b[100];
//int dg(int a) {
//	if (a>=10 && a<=99) return 1;
//	else return 0;
//}
//main()
//{
//	int i,j,max,check=0;
//	for (i=0;i<10;i++) b[i]=0;
//	for (i=0;i<7;i++) {
//		scanf("%d",&a[i]);
//		if (dg(a[i])==1) check=1;
//	}
//	if (check==0) printf ("no two-digit number");
//	else {
//		for (i=0;i<6;i++) {
//			for (j=i+1;j<7;j++) if (a[i]==a[j] && dg(a[i])==1 && dg(a[j])==1) b[i]+=1;
//		}
//		max=0;
//		for (i=1;i<7;i++) if (b[max]<b[i]) max=i;
//		for (i=0;i<7;i++) if (b[i]==b[max]) printf("%d ",a[i]);
//	}
//}
//
// q8: enter a character, display the location of that character in the ASCII table and its octal format.
//#include<stdio.h>
//main()
//{
//	char a;
//	scanf("%c",&a);
//	printf ("%d 0%o",a,a);
//}
//
// q9: enter an integer n, display the sum of all the digits forming n
//#include<stdio.h>
//main()
//{
//	int n,i,sum=0;
//	scanf("%d",&n);
//	if (n<0) n=-n;
//	while (n!=0) {
//		sum+=(n%10);
//		n/=10;
//	}
//	printf("%d",sum);
//}
//
// q10: check prime
//#include<stdio.h>
//int check(int n) {
//	int i;
//	if (n<2) return 0;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//main()
//{
//	int n;
//	scanf("%d",&n);
//	if (check(n)==1) printf("Prime");
//	else printf("Not Prime");
//}
