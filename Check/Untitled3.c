// Nguyen Doanh Thinh - HE161890
// workshop 4:
//
// ve hinh a
//#include<stdio.h>
//main()
//{
//	int i,n,j,count=1,a;
//	printf("n= ");
//	scanf("%d",&n);
//	for (j=1;j<=n;j++) {
//		if (count<=j) {
//			for (a=1;a<=count;a++) printf("#");
//		}
//		count++;
//		printf("\n");
//		}
//}
//
// ve hinh b
//#include<stdio.h>
//main()
//{
//	int i,n,j,a,count;
//	printf("n= ");
//	scanf("%d",&n);
//	count=n;
//	for (j=1;j<=n;j++) {
//		if (count>=0) {
//			for (a=count;a>=1;a--) printf("#");
//		}
//		count--;
//		printf("\n");
//		}
//}
// // ve hinh c
//#include<stdio.h>
//main()
//{
//	int i,n,j,a,count,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	count=n;
//	for (j=1;j<=n;j++) {
//		counts=n-count;
//		if (counts<=n) {
//			for (i=1;i<=counts;i++) printf(" ");
//		}
//		if (count>=0) {
//			for (a=count;a>=1;a--) printf("#");
//		}
//		count--;
//		printf("\n");
//		}
//}
//
// ve hinh d
//#include<stdio.h>
//main()
//{
//	int i,n,j,count=1,a,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	for (j=1;j<=n;j++) {
//		counts=n-count;
//		if (counts>=0) {
//			for (a=1;a<=counts;a++) printf(" ");
//		}
//		if (count<=n) {
//			for (i=1;i<=count;i++) printf("#");
// 		}
//		count++;
//		printf("\n");
//		}
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
//	int i,n,j,a,counts=1;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) printf("# ");
//	printf("\n");
//	for (j=1;j<=n-2;j++) {
//		if(counts<=n-2) {
//			for (a=1;a<=counts;a++) printf("  ");
//			counts++;
//		}
//		printf("#\n");
//	}
//	for (i=1;i<=n;i++) printf("# ");
//}
//
// ve hinh g
//#include<stdio.h>
//main() 
//{
//	int i,n,count,j,a,b,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=n-2;
//	for (i=1;i<=n;i++) printf("# ");
//	printf("\n");
//	for (j=1;j<=n-2;j++) {
//		if(counts>=0) {
//			for (a=1;a<=counts;a++) printf("  ");
//			counts--;
//		}
//		printf("#\n");
//	}
//	for (i=1;i<=n;i++) printf("# ");
//}
//
// ve hinh j 
//#include<stdio.h>
//main()
//{
//	int n,i,j,counts,count;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=0;
//	count=2*n-1;
//	for (i=1;i<=n;i++) {
//		if (counts<=n-1) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts++;
//		if (count>=0) {
//			for (j=1;j<=count;j++) printf("# ");
//		}
//		count=count-2;
//		printf("\n");
//	}
//}
//
// ve hinh k
//#include<stdio.h>
//main()
//{
//	int n,i,j,counts,count;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=n-1;
//	count=1;
//	for (i=1;i<=n;i++) {
//		if (counts>=0) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts--;
//		if (count<=2*n-1) {
//			for (j=1;j<=count;j++) printf("# ");
//		}
//		count=count+2;
//		printf("\n");
//	}
//}
//
// ve hinh l
#include<stdio.h>
main()
{
	int n,i,j,countsu,countu,m,countsd,countd;
	printf("n= ");
	scanf("%d",&n);
	countsu=n-1;
	countu=1;
	for (i=1;i<=n;i++) {
		if (countsu>=0) {
			for (j=1;j<=countsu;j++) printf("  ");
		}
		countsu--;
		if (countu<=2*n-1) {
			for (j=1;j<=countu;j++) printf("# ");
		}
		countu=countu+2;
		printf("\n");
	}
	m=n-1;
	countsd=1;
	countd=2*m-1;
	for (i=1;i<=m;i++) {
		if (countsd<=m) {
			for (j=1;j<=countsd;j++) printf("  ");
		}
		countsd++;
		if (countd>=0) {
			for (j=1;j<=countd;j++) printf("# ");
		}
		countd=countd-2;
		printf("\n");
	}
}



