// ve cac hinh dac biet tu duy khon 
//
// lam de nho chu y day co bi thua dau \n hay khong vi neu xuong dong sai la sai han luon ca bai
//
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben duoi tay trai
//
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
//========================================================================================================================================================================
//
// hinh tam giac vuong rong canh n, goc vuong nam ben duoi tay trai
//
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n-1;i++) {						// ve hang tu 1 den n-1
//		printf ("# ");							// in ra # o dau moi hang
//		for (j=1;j<=i-2;j++) printf("  ");		// in ra space
//		if (i!=1) printf("#");					// in ra # o cuoi moi hang
//		printf("\n"); 
//	}
//	for (i=1;i<=n;i++) printf("# ");			// in hang cuoi
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben tren tay trai
//
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
//========================================================================================================================================================================
//
// hinh tam giac vuong rong canh n, goc vuong nam ben tren tay trai
//
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) printf ("# ");			// ve hang dau tien
//	for (i=n-1;i>=1;i--) {						// ve cot thu 2 den cot n-1
//		printf("\n# ");							// ve # dau hang
//		for (j=i-2;j>=1;j--) printf("  ");		// ve space	
//		if (i!=1) printf("# ");					// ve # cuoi hang
//	}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben tren tay phai
//
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
//========================================================================================================================================================================
// 
// hinh tam giac vuong rong canh n, goc vuong nam ben tren tay phai
//
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {								// ve cot 
//		printf("\n");		
//		for (j=1;j<=n;j++) {							// ve hang
//			if (j==i || j==n || i==1) printf("# ");		// ve # cho hang
//			else printf("  ");							// ve space cho hang				
//		}
//	}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong dac canh n, goc vuong nam ben duoi tay phai
//
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
//========================================================================================================================================================================
//
// hinh tam giac vuong rong canh n, goc vuong nam ben duoi tay phai
//
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) {
//			if (j==n || j==n-i+1 || i==n) printf ("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh vuong dac canh n
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
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) {
//			if (j==i || i==1 || i==n) printf("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh chu z xuoi canh n
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) {
//			if (j==n-i+1 || i==1 || i==n) printf("# ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// ve hinh dong ho cat canh n dac
//
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
//========================================================================================================================================================================
//
// hinh vuong co 2 duong cheo
//
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
//========================================================================================================================================================================
// 
// tam giac can dac canh ben n dinh huong xuong
//
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
//========================================================================================================================================================================
//
// tam giac can dac canh ben n dinh huong len
//
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
//========================================================================================================================================================================
//
// ve hinh thoi dac canh n
//
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
//========================================================================================================================================================================
//
// ve tam giac vuong so tang theo hang canh n (n<10) goc vuong duoi trai
//
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=i;j++) printf("%d ",j);
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// ve tam giac vuong so tang theo hang canh n (n<10) goc vuong tren phai
//
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<i;j++) printf("  ");
//		for (k=1;k<=n-i+1;k++) printf("%d ",k);
//		printf("\n"); 
//	}
//}
//========================================================================================================================================================================
//
// ve tam giac vuong so giam theo hang canh n (n<10) goc vuong duoi phai
//
//#include<stdio.h> 
//main() 
//{
//	int n,i,j,k;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=n-i;j>0;j--) printf("  ");
//		for (k=i;k>=1;k--) printf("%d ",k);
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// ve tam giac vuong so giam theo hang canh n (n<10) goc vuong tren trai
//
//#include<stdio.h> 
//main() 
//{
//	int n,i,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=n;i>=1;i--) {
//		for (j=i;j>=1;j--) printf("%d ",j);
//		printf("\n");
//	}
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
// hinh tam giac vuong fibonacci
//
// cach 1: khong dung ham
//
//#include<stdio.h>
//main()
//{
//	int i,n,j,a,c,b;
//	printf ("n= "); scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		a=0;
//		b=1;
//		printf("%d ",b);
//		for (j=1;j<i;j++) {
//			c=a+b;
//			printf("%d ",c);
//			a=b;
//			b=c;
//		}
//		printf("\n");
//	}
//}
//
// cach 2: dung ham in ra so fibonacci
//
//#include<stdio.h>
//int InFibo(int n) {
//	if (n==1 || n==2) return 1;
//	else return InFibo(n-1) + InFibo(n-2);
//}
//main()
//{
//	int n,i,j;
//	printf ("n= "); scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=i;j++) {
//			printf ("%d ",InFibo(j));
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong floy
//
//#include<stdio.h> 
//main()
//{
//	int i,n,j,k;
//	printf ("n= "); scanf("%d",&n);
//	for (i=1;i<=n;i++) {			// in cot
//		for (k=1;k<=i;k++){			// in hang	
//			printf("%d ",j++);		// in ra cac so tang dan
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh tam giac vuong so nguyen to
//
//#include<stdio.h> 
//int CheckPrime(int n) {
//	if (n<=1) return 0;
//  	if (n==2) return 1;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//main()
//{
//	int n,i,j,k=2;
//	printf ("n= "); scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=i;j++) {
//			while (CheckPrime(k)==0) k++;
//			printf("%d ",k); 
//			k++;
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
//
// hinh tam guac can co so giam tu ngoai canh ben vao chieu cao
//
//#include<stdio.h>
//int vitri(int n){
//	n%=10;
//	return n;
//}
//main()
//{
//	int n,i,j,k;
//	printf("n= "); scanf("%d",&n);
//	k=2*n-1;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=k;j++) {
//			if (j>=n-i+1 && j<=k-n+i) {
//				if (j<=n) printf ("%d ",vitri(2*i+j-n-1));
//				else printf ("%d ",vitri(k-n-j+2*i));
//			}
//			else printf ("  ");	
//		}
//		printf ("\n");
//	}
//}
//========================================================================================================================================================================
// 
// hinh tam giac vuong so 1 va so 0
//
//#include<stdio.h>
//main()
//{
//	int i,j,n,cnt=0;
//	printf ("n= "); scanf("%d",&n);
//	for (i=1;i<n;i++) {
//		cnt=i;
//		for (j=1;j<=i;j++) {
//			printf("%d ",cnt%2);
//			cnt++;
//		}
//		printf("\n");
//	}
//	cnt=n;
//	for (i=1;i<=n;i++) {
//		printf("%d ",cnt%2);
//		cnt++;
//	}
//}
