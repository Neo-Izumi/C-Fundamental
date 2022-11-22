// Nguyen Doanh Thinh - HE161890
// Workshop3
//
// bai tap ve cac day so
//
#include<stdio.h>
#include<math.h>
//
// bt1: Tinh S=1^2+2^3+3^4+...+n^(n+1)
//int S1(int n) {
//	int i,sum=0,a,b,c;
//	for (i=1;i<=n;i++) {
//		a=i;
//		b=i+1;
//		c=pow(a,b);
//		sum+=c;
//	}
//	return sum;
//}
//
// bt2: Tinh S=x^1+x^2+...+x^n
//int S2(int x, int n) {
//	int i,sum=0,a;
//	for (i=1;i<=n;i++) {
//		a=pow(x,i);
//		sum+=a;
//	}
//	return sum;
//}
//
// bt3: Tinh S=1/1+1/(1+2)+1/(1+2+3)+...+1/(1+2+...+n) 
//float S3(int n) {
//	int i;
//	float sum=0.0,a=0.0,b;
//	for (i=1;i<=n;i++) {
//		a+=i; 		// tinh mau
//		b=1.0/a; 	// tinh so hang
//		sum+=b;
//	}
//	return sum;
//}
//
// bt4: Tinh S= 1/1!+1/(2!)+1/(3!)+...+1/(n!)
//float S4(int n) {
//	int i;
//	float sum=0.0,a=1.0;
//	for (i=1;i<=n;i++) {
//		a*=i; 			// tinh mau
//		sum+=1.0/a; 	// tinh tong
//	}
//	return sum;
//}
//
// bt5: Tinh S=1-1/2+1/3-1/4+1/5-...+(/-)1/n
float S5(int n) {
	int i,j=0,a;
	float sum=0.0,b;
	for (i=1;i<=n;i++) {
		a=pow(-1,j); // lay -1 mu le va mu chan
		j++;
		b=a*(1.0/i); // tinh so hang
		sum+=b;
	}
	return sum;
}
//
// bt6: Tinh S=1+x^2/2!+x^4/4!+...+x^(2n)/(2n!)
//float S6(int x, int n) {
//	int i,j;
//	float sum=0.0,a=1.0,b,c;
//	for (i=0;i<=2*n;i+=2) { 
//		for (j=1;j<=i;j++) {
//			a*=j; 		// tinh giai thua cua i
//		}
//		b=(float)i/a; 	// tinh so mu
//		c=pow(x,b); 	// tinh so hang
//		sum+=c;
//	}
//	return sum;
//}
main() 
{
	int n,x;
//	printf("x= ");
//	scanf("%d",&x);
	printf("n= ");
	scanf("%d",&n);
//	printf("S1= %d",S1(n));
//	printf("S2= %d",S2(x,n));
//	printf("S3= %f",S3(n));
//	printf("S4= %f",S4(n));
	printf("S5= %f",S5(n));
//	printf("S6= %f",S6(x,n));
}

