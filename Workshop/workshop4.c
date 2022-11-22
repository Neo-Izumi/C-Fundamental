// Nguyen Doanh Thinh - HE161890
// workshop 4:
// 
// ve hinh a
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) { 					// ve cot
//		for (j=1;j<=i;j++) printf("# ");	// ve hang
//		printf("\n"); 	
//	}
//}
//
// ve hinh b
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=n;i>=1;i--) {					// ve cot
//		for (j=1;j<=i;j++) printf("# ");	// ve hang
//		printf("\n");
//	}
//}
//
// ve hinh c
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=n;i>=1;i--) {						// ve cot
//		for (j=1;j<=n-i;j++) printf("  ");		// ve space o tung hang
//		for (j=i;j>=1;j--) printf("# ");		// ve # o tung hang
//		printf("\n");
//	}
//}
// 
// ve hinh d
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n-i;j++) printf("  ");
//		for (j=i;j>=1;j--) printf("# ");
//		printf("\n");
//	}
//}
//
// ve hinh e 
//#include<stdio.h>
//main() 
//{
//	int i,n,j,a,b;
//	printf("n= ");
//	scanf("%d",&n);
//	for (a=1;a<=n;a++) printf("# ");
//	for (i=2;i<=n-1;i++) {
//		printf("\n#");
//		for (j=1;j<=2*n-3;j++) printf(" ");
//		printf("#");
//	}
//	printf("\n");
//	for (b=1;b<=n;b++) printf("# ");
//}
//
// ve hinh f
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) printf("# ");
//	printf("\n");
//	for (i=1;i<=n-2;i++) {
//		for (j=1;j<=n;j++) {
//			if (j==i+1) printf("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//	for (i=1;i<=n;i++) printf("# ");
//}
//
// ve hinh g
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) printf("# ");
//	printf("\n");
//	for (i=1;i<=n-2;i++) {
//		for (j=1;j<=n;j++) {
//			if (j==n-i) printf("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//	for (i=1;i<=n;i++) printf("# ");
//}
//
// ve hinh h
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) {
//			if (i==1 || i==n || j==i || j==n-i+1) printf("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}
//
// ve hinh i
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) {
//			if (i==1 || i==n || j==1 || j==n || j==n-i+1 || j==i) printf("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//} 
//
// ve hinh j
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,count,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=0;
//	count=2*n-1;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=counts;j++) printf("  ");
//		counts++;
//		for (j=1;j<=count;j++) printf("# ");
//		count-=2;
//		printf("\n");
//	}
//}
//
// ve hinh k
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,count,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=n-1;
//	count=1;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=counts;j++) printf("  ");
//		counts--;
//		for (j=1;j<=count;j++) printf("# ");
//		count+=2;
//		printf("\n");
//	}
//}
//
// ve hinh l
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,countu,countsu,countsd,countd;
//	printf("n= ");
//	scanf("%d",&n);
//	countsu=n-1;
//	countu=1;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=countsu;j++) printf("  ");
//		countsu--;
//		for (j=1;j<=countu;j++) printf("# ");
//		countu+=2;
//		printf("\n");
//	}
//	countsd=1;
//	countd=2*(n-1)-1;
//	for (i=1;i<=n-1;i++) {
//		for (j=1;j<=countsd;j++) printf("  ");
//		countsd++;
//		for (j=1;j<=countd;j++) printf("# ");
//		countd-=2;
//		printf("\n");
//	}
//}
//
// ve hinh m
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {						// in so hang
//		for (j=1;j<=i;j++) printf("%d ",j);		// in ra so tu 1 den i o hang
//		printf("\n");
//	}
//}
//
// ve hinh n
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {							// ve n cot 
//		for (j=1;j<i;j++) printf("  ");				// ve khoang cach
//		for (k=1;k<=n-i+1;k++) printf("%d ",k);		// ve so tu 1 den n o hang
//		printf("\n"); 
//	}
//}
//
// ve hinh o
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {						// ve n cot
//		for (j=n-i;j>0;j--) printf("  ");		// ve khong cach
//		for (k=i;k>=1;k--) printf("%d ",k);		// ve so tu i den 1
//		printf("\n");
//	}
//}
//
// ve hinh p
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=n;i>=1;i--) {						// ve n cot
//		for (j=i;j>=1;j--) printf("%d ",j);		// ve tu i den 1 o moi hang
//		printf("\n");
//	}
//}
//
// ve hinh q
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,l;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=n-i+1;j>0;j--) printf("  ");
//		for (k=1;k<=i;k++) printf("%d ",k);
//		for (l=i-1;l>0;l--) printf("%d ",l);
//		printf("\n");
//	}
//} 
//
// ve hinh r
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,l;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<i;j++) printf("  ");
//		for (k=1;k<=n-i+1;k++) printf("%d ",k);
//		for (l=n-i;l>0;l--) printf("%d ",l);
//		printf("\n");
//	}	
//}
//
// ve hinh s
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,l,a;
//	printf("n= ");
//	scanf("%d",&n);
//	a=n;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=i;j++) printf("%d ",j);
//		a--;
//		for (k=2*a-1;k>0;k--) printf("  ");
//		if (i!=n) for (l=i;l>0;l--) printf("%d ",l);
//		else for (l=i-1;l>0;l--) printf("%d ",l); 
//		printf("\n");
//	}
//}
//
// ve hinh t
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k,l,a;
//	printf("n= ");
//	scanf("%d",&n);
//	a=-1;
//	for (i=n;i>=1;i--) {
//		for (j=1;j<=i;j++) printf("%d ",j);
//		if (i!=n) for (k=1;k<=a;k++) printf("  ");
//		a+=2;
//		if (i==n) for (l=i-1;l>0;l--) printf("%d ",l);
//		else for (l=i;l>0;l--) printf("%d ",l); 
//		printf("\n");
//	}
//}
//
// ve hinh power of 2 triangle
#include<stdio.h> 
#include<math.h>
main() 
{
	int n,i,j,k,a,b;
	printf("n= ");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		for (j=n-i;j>0;j--) printf("     ");
		for (j=0;j<=i-1;j++) {
			a=pow(2,j);
			if (a<10) printf("  %d  ",a);
			if (a>10) printf(" %d  ",a);
			if (a>100) printf("%d ",a);
		}
		for (k=i-2;k>=0;k--) {
			b=pow(2,k);
			if (b<10) printf("  %d  ",b);
			if (b>10) printf(" %d  ",b);
			if (b>100) printf("%d ",b);
		}
		printf("\n");
	}
}
//
// ve tam giac vuong pascal
//#include<stdio.h> 
//int tohop(int m, int n) {
//	int i,a=1,b=1,c=1;
//	for (i=1;i<=n;i++) a*=i;
//	for (i=1;i<=m;i++) b*=i;
//	for (i=1;i<=n-m;i++) c*=i;
//	return a/(b*c);
//}
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("1\n");
//	for (i=1;i<=n-1;i++) {
//		for (j=0;j<=i;j++) {
//			printf("%d ",tohop(j,i));
//		}
//		printf("\n");
//	}
//}
//
// ve tam giac can pascal 
//#include<stdio.h> 
//int tohop(int m, int n) {
//	int i,a=1,b=1,c=1;
//	for (i=1;i<=n;i++) a*=i;
//	for (i=1;i<=m;i++) b*=i;
//	for (i=1;i<=n-m;i++) c*=i;
//	return a/(b*c);
//}
//main() 
//{
//	int n,i,j,k;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("1  \n");
//	for (i=2;i<=n;i++) {
//		for (k=1;k<=n-i;k++) printf ("  ");
//		for (j=0;j<=i;j++) {
//			if (tohop(j,i)<10) printf("%d",tohop(j,i));
//			printf(" ");
//			if (tohop(j,i)>=10) printf("%d",tohop(j,i));
//			printf(" ");
//		}
//		printf("\n");
//	}
//}

