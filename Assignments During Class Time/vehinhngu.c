// ve cac hinh dac biet tu duy ngu
//
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben duoi tay trai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,count=1,a;
//	printf("n= ");
//	scanf("%d",&n);
//	for (j=1;j<=n;j++) {
//		if (count<=j) {
//			for (a=1;a<=count;a++) printf("# ");
//		}
//		count++;
//		printf("\n");
//		}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong rong canh n, goc vuong nam ben duoi tay trai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,count;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("# \n");
//	count=1;
//	for (i=1;i<=n-2;i++) {
//		printf("#");
//		if (count<=2*n-5) {
//			for (j=1;j<=count;j++) printf(" ");
//		}
//		count+=2;
//		printf("# \n");
//	}
//	for (i=1;i<=n;i++) printf("# "); 
//}		
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben tren tay trai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,a,count;
//	printf("n= ");
//	scanf("%d",&n);
//	count=n;
//	for (j=1;j<=n;j++) {
//		if (count>=0) {
//			for (a=count;a>=1;a--) printf("# ");
//		}
//		count--;
//		printf("\n");
//		}
//}
//========================================================================================================================================================================
// 
// hinh tam giac vuong rong canh n, goc vuong nam ben tren tay trai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,count;
//	printf("n= ");
//	scanf("%d",&n);
//	count=2*n-5;
//	for (i=1;i<=n;i++) printf("# ");
//	for (i=1;i<=n-2;i++) {
//		printf("\n#");
//		if (count>=1) {
//			for (j=1;j<=count;j++) printf(" ");
//		}
//		count-=2;
//		printf("#");
//	}
//	printf("\n#");
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben tren tay phai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,counts,count;
//	printf("n= ");
//	scanf("%d",&n);
//	count=n;
//	counts=0;
//	for (i=1;i<=n;i++) {
//		if(counts<=(n-1)) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts++;
//		if (count>=1) {
//			for (j=1;j<=count;j++) printf("# ");
//		}
//		count--;
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong rong canh n, goc vuong nam ben tren tay phai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,counts,count;
//	printf("n= ");
//	scanf("%d",&n);
//	count=2*n-5;
//	counts=1;
//	for (i=1;i<=n;i++) printf("# ");
//	printf("\n");
//	for (i=1;i<=n-2;i++) {
//		if(counts<=n-1) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts++;
//		printf("#");
//		if (count>=1) {
//			for (j=1;j<=count;j++) printf(" ");
//		}
//		printf("#\n");
//		count-=2;
//	}
//	for (i=1;i<=2*n-2;i++) printf(" ");
//	printf("#");
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben duoi tay phai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,count,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=n-1;
//	count=1;
//	for (i=1;i<=n;i++) {
//		if (counts>=0) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts--;
//		if (count<=n) {
//			for (j=1;j<=count;j++) printf("# ");
//		}
//		count++;
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong rong canh n, goc vuong nam ben duoi tay phai
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,count,counts;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=n-2;
//	count=1;
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("#\n");
//	for (i=1;i<=n-2;i++) {
//		if (counts>=1) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts--;
//		printf("#");
//		if (count<=2*n-5) {
//			for (j=1;j<=count;j++) printf(" ");
//		}
//		printf("#");
//		count+=2;
//		printf("\n");
//	}
//	for (i=1;i<=n;i++) printf("# ");
//}
//========================================================================================================================================================================
//
// hinh vuong dac canh n
//
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) printf("# ");
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh vuong rong canh n
//
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
//========================================================================================================================================================================
//
// hinh chu z nguoc canh n
//
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
//========================================================================================================================================================================
//
// hinh chu z xuoi canh n
//
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
//========================================================================================================================================================================
//
// hinh tam giac can dac canh n dinh huong xuong
//
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
//========================================================================================================================================================================
//
//  hinh tam giac can rong canh n dinh huong xuong
//
//#include<stdio.h>
//main()
//{
//	int n,i,j,counts,count;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=1;
//	count=2*(2*n-1)-7;
//	for (i=1;i<=2*n-1;i++) printf("# ");
//	printf("\n");
//	for (i=1;i<=n-2;i++) {
//		if (counts<=n-2) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts++;
//		if (count>=3) {
//			printf("#");
//			for (j=1;j<=count;j++) printf(" ");	
//			printf("#");		
//		}
//		count-=4;
//		printf("\n");
//	}
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("#");																		
//}
//========================================================================================================================================================================
//
// hinh tam giac can dac canh n dinh huong len
//
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
//========================================================================================================================================================================
//
// hinh tam giac can rong canh n dinh huong len 
//
//#include<stdio.h>
//main()
//{
//	int n,i,j,counts,count;
//	printf("n= ");
//	scanf("%d",&n);
//	counts=n-2;
//	count=3;
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("#\n");
//	for (i=1;i<=n-2;i++) {
//		if (counts>=1) {
//			for (j=1;j<=counts;j++) printf("  ");
//		}
//		counts--;
//		if (count<=2*(2*n-1)-7) {
//			printf("#");
//			for (j=1;j<=count;j++) printf(" ");
//			printf("#");
//		}
//		count+=4;
//		printf("\n");
//	}
//	for (i=1;i<=2*n-1;i++) printf("# ");
//}
//========================================================================================================================================================================
//
// hinh thoi dac canh n
//
//#include<stdio.h>
//main()
//{
//	int n,i,j,countsu,countu,m,countsd,countd;
//	printf("n= ");
//	scanf("%d",&n);
//	countsu=n-1;
//	countu=1;
//	for (i=1;i<=n;i++) {
//		if (countsu>=0) {
//			for (j=1;j<=countsu;j++) printf("  ");
//		}
//		countsu--;
//		if (countu<=2*n-1) {
//			for (j=1;j<=countu;j++) printf("# ");
//		}
//		countu=countu+2;
//		printf("\n");
//	}
//	m=n-1;
//	countsd=1;
//	countd=2*m-1;
//	for (i=1;i<=m;i++) {
//		if (countsd<=m) {
//			for (j=1;j<=countsd;j++) printf("  ");
//		}
//		countsd++;
//		if (countd>=0) {
//			for (j=1;j<=countd;j++) printf("# ");
//		}
//		countd=countd-2;
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// ve hinh thoi rong canh n
//
//#include<stdio.h>
//main()
//{
//	int n,i,j,countsu,countu,countsd,countd;
//	printf("n= ");
//	scanf("%d",&n);
//	countsu=n-2;
//	countu=3;
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("#\n");
//	for (i=1;i<=n-1;i++) {
//		if (countsu>=1) {
//			for (j=1;j<=countsu;j++) printf("  ");
//		}
//		countsu--;
//		if (countu<=2*(2*n-1)) {
//			printf("#");
//			for (j=1;j<=countu;j++) printf(" ");
//			printf("#");
//		}
//		countu+=4;
//		printf("\n");
//	}
//	countsd=1;
//	countd=2*(2*n-1)-7;
//	for (i=1;i<=n-2;i++) {
//		if (countsd<=n-2) {
//			for (j=1;j<=countsd;j++) printf("  ");
//		}
//		countsd++;
//		if (countd>=3) {
//			printf("#");
//			for (j=1;j<=countd;j++) printf(" ");	
//			printf("#");		
//		}
//		countd-=4;
//		printf("\n");
//	}
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("#");
//}
//========================================================================================================================================================================
//
// hinh dong ho cat dac canh n
//
//#include<stdio.h>
//main()
//{
//	int n,i,j,countsu,countu,countsd,countd;
//	printf("n= ");
//	scanf("%d",&n);
//	countsu=0;
//	countu=2*n-1;
//	for (i=1;i<=n;i++) {
//		if (countsu<=n-1) {
//			for (j=1;j<=countsu;j++) printf("  ");
//		}
//		countsu++;
//		if (countu>=0) {
//			for (j=1;j<=countu;j++) printf("# ");
//		}
//		countu=countu-2;
//		printf("\n");
//	}
//	countsd=n-2;
//	countd=3;
//	for (i=1;i<=n-1;i++) {
//		if (countsd>=0) {
//			for (j=1;j<=countsd;j++) printf("  ");
//		}
//		countsd--;
//		if (countd<=2*n-1) {
//			for (j=1;j<=countd;j++) printf("# ");
//		}
//		countd=countd+2;
//		printf("\n");
//	}	
//}
//========================================================================================================================================================================
// 
// hinh dong ho cat rong canh n
//
//#include<stdio.h>
//main()
//{
//	int n,i,j,countsu,countu,countsd,countd;
//	printf("n= ");
//	scanf("%d",&n);
//	countsu=1;
//	countu=2*(2*n-1)-7;
//	for (i=1;i<=2*n-1;i++) printf("# ");
//	printf("\n");
//	for (i=1;i<=n-2;i++) {
//		if (countsu<=n-2) {
//			for (j=1;j<=countsu;j++) printf("  ");
//		}
//		countsu++;
//		if (countu>=3) {
//			printf("#");
//			for (j=1;j<=countu;j++) printf(" ");	
//			printf("#");		
//		}
//		countu-=4;
//		printf("\n");
//	}
//	for (i=1;i<=n-1;i++) printf("  ");
//	printf("#\n");	
//	countsd=n-2;
//	countd=3;
//	for (i=1;i<=n-2;i++) {
//		if (countsd>=1) {
//			for (j=1;j<=countsd;j++) printf("  ");
//		}
//		countsd--;
//		if (countd<=2*(2*n-1)-7) {
//			printf("#");
//			for (j=1;j<=countd;j++) printf(" ");
//			printf("#");
//		}
//		countd+=4;
//		printf("\n");
//	}
//	for (i=1;i<=2*n-1;i++) printf("# ");																	
//}
//========================================================================================================================================================================
//
// hinh tam giac can canh n (n<10) dem so doi xung day duoi
//
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
//========================================================================================================================================================================
//
// hinh tam giac can canh n (n<10) dem so doi xung day tren
//
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
//========================================================================================================================================================================
//
// 2 tam giac vuong can canh n (n<10) doi xung chung dinh o day duoi
//
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
//========================================================================================================================================================================
//
// 2 tam giac vuong can canh n (n<10) doi xung chung dinh o day tren
//
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
//========================================================================================================================================================================
//
// tam giac mu 2 can canh n (n<10) 
//
//#include<stdio.h> 
//#include<math.h>
//main() 
//{
//	int n,i,j,k,a,b;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=n-i;j>0;j--) printf("     ");
//		for (j=0;j<=i-1;j++) {
//			a=pow(2,j);
//			if (a<10) printf("  %d  ",a);
//			if (a>10) printf(" %d  ",a);
//			if (a>100) printf("%d ",a);
//		}
//		for (k=i-2;k>=0;k--) {
//			b=pow(2,k);
//			if (b<10) printf("  %d  ",b);
//			if (b>10) printf(" %d  ",b);
//			if (b>100) printf("%d ",b);
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// ve tam giac vuong pascal canh n
//
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
//========================================================================================================================================================================
//
// ve tam giac can pascal canh n
//
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




