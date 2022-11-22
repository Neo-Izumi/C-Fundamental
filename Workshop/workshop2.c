// Nguyen Doanh Thinh - HE161890
// Workshop 2
// Bai tap ve so nguyen to
//
//#include<stdio.h>
//int CheckPrime(int n) {
//	if (n<=1) return 0;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
// g) in ra 3 snt lon hon n
//main()
//{
//	int n,i,count=0;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("the three prime numbers that are greater than n are: ");
//	for (i=n;i>=n;i++) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d ",i);
//			count++;
//		}
//		if (count==3) break;
//	}
//}
//
// h) in ra 2 snt 1 so lon hon n, 1 so nho hon n
//main()
//{
//	int n,i,count;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("the prime numbers that are greater than n are: ");
//	count=0;
//	for (i=n;i>=n;i++) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d .\n",i);
//			count++;
//		}
//		if (count==1) break;
//	}
//	count=0;
//	printf("the prime numbers that are less than n are: ");
//	for (i=n;i<=n;i--) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d .",i);
//			count++;
//		}
//		if (count==1) break;
//	}
//}
//
// i) in ra 4 snt 2 so lon hon va 2 so nho hon n
//main()
//{
//	int n,i,count;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("the two prime numbers that are greater than n are: ");
//	count=0;
//	for (i=n;i>=n;i++) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d ",i);
//			count++;
//		}
//		if (count==2) break;
//	}
//	count=0;
//	printf("\nthe two prime numbers that are less than n are: ");
//	for (i=n;i<=n;i--) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d ",i);
//			count++;
//		}
//		if (count==2) break;
//	}
//}
//
// j) nhap vao n,p,q, in ra p snt nho hon n va q snt lon hon n
//main()
//{
//	int n,p,q,i,count;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("p= ");
//	scanf("%d",&p);
//	printf("q= ");
//	scanf("%d",&q);
//	printf("the %d prime numbers that are greater than n are: ",p);
//	count=0;
//	for (i=n;i>=n;i++) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d ",i);
//			count++;
//		}
//		if (count==p) break;
//	}
//	count=0;
//	printf("\nthe %d prime numbers that are less than n are: ",q);
//	for (i=n;i<=n;i--) {
//		if (CheckPrime(i)==1 && i!=n) {
//			printf("%d ",i);
//			count++;
//		}
//		if (count==q) break;
//	}
//}
//
// k) in ra cac snt (co 3 hoac 4 chu so) ma tong cac chu so chia het cho 5
//#include<stdio.h>
//main()
//{
//	int i,t,c;
//	printf("the numbers satisfying the problem are: \n");
//	for (i=100;i<=9999;i++) {
//		t=0;
//		if (CheckPrime(i)==1) {
//			for (c=i;c!=0;c/=10) {
//				t+=c%10;
//			}
//			if (t%5==0) printf("%5d ",i);
//		}
//	}
//}


