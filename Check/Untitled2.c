// bt1: nhap n, in ra tu 1 den n chia het cho 2 nhung khong chia het cho 3 va tinh tong
//#include<stdio.h>
//main()
//{
//	int n,i,t=0;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		if (i%2==0 && i%3!=0) printf("%d",i);
//		t+=i;
//	}
//	printf("t= %d",t);
//}
//
// bt2: nhap vao n tinh tong cac chu so cua n
//#include<stdio.h>
//main()
//{
//	int n,i,t=0;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=n;i!=0;i=i/10) {
//		t=t+(i%10);
//	}
//	printf("tong cac chu so bang %d",t);
//}
//
// bt3: nhap so nguyen n, kiem tra xem co phai so nguyen to khong, neu phai in ra la snt neu khong in ra uoc cua no
//#include<stdio.h>
//main()
//{
//	int n,i;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		if (n%i==0) printf("%d ",i); 
//		else printf("n la so nguyen to");
//	}
//}
// bt4: nhap vao n, in ra cac so nguyen to tu 1 den n
//#include<stdio.h>
//main()
//{
//	int n,i,t;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=2;i<=n;i++) {
//		t=i;
//		if (n%i==0) break;
//		if (t%i==0) break;
//		printf("%d",i);
//	}
//}
//
// bt5: ve hinh thoi canh n 
//#include<stdio.h>
//main()
//{
//	int n,i,j,k,l,m,a,b,c,countspaceup,countup=1,countspacedown=1,countdown;
//	printf("n= ");
//	scanf("%d",&n);
//	countspaceup=n-1;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=countspaceup;j++) printf(" ");
//		for (k=1;k<=countup;k++) printf("##");
//		countspaceup--;
//		countup++;
//		printf("\n");
//	}
//	countdown=n-1;
//	for (l=1;l<=n-1;l++) {
//		for (m=1;m<=countspacedown;m++) printf(" ");
//		for (a=1;a<=countdown;a++) printf("##");
//		countspacedown++;
//		countdown--;		
//		printf("\n");
//	}
//}
//
// bt6: thay so nguyen to thanh so fibonacci, palindrome, amstrong
//#include<stdio.h>
//#include<math.h>
// ham check so nguyen to
//int CheckPrime(int n) {
//	if (n<=1) return 0;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//
// ham check so fibonacci cach 1:
//int CheckFibo(int n) {
//	int i,a=0,b=1,c,d;
//	if (n==0) return 1;
//	for (i=1;i<=10;i++) {
//		c=a+b;
//		d=b+c;
//		a=c+d;
//		b=d+a;
//		if (n==a || n==b || n==c || n==d) return 1;
//	}
//	return 0;
//}
// 
// ham check so fibonacci cach 2:
//int CheckFibo(int n) {
//	int a=0,b=1,c;
//	if (n==0) return 1;
//	while (n>a) {
//		if (n=b) return 1;
//		c=b;
//		b=b+a;
//		a=c;
//	}
//}
// ham check so palindrome
//int CheckPalin(int n) {
//	int count=0,a,b,c;
//	c=n;
//	while (c!=0) {
//		c/=10;
//		count++;
//	}
//	while (n!=0) {
//		a=pow(10,count-1);
//		if (n%10 == n/a) return 1;
//		n%=a;
//		n/=10;
//		count-=2;
//	}	
//}
//
// ham check so amstrong 
//
//int CheckArm(int n) {
//	int i,digits=0,a,b,t=0;
//	for (i=n;i!=0;i=i/10) {
//		digits++;
//	}
//	for (i=n;i!=0;i=i/10) {
//		a=i%10;
//		b=pow(a,digits);
//		t+=b;
//	}
//	if (t==n) return 1;
//	return 0;
//}
//
//main()
//{
//	int n,i,count=0;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("the %d first fibonacci numbers are: ",n);
//	for (i=0;;i++) {
//		if (CheckFibo(i)==1) {
//      if (CheckPalin(i)==1) {
//      if (CheckArm(i)==1) {
//			printf("%d ",i);
//			count++;
//		}
//		if (count==n) break;
//	}
//}
//
// ham tinh tong cac chu so cua n
//#include<stdio.h>
//int SumDigit(int n) {
//	int i,sum=0,a;
//	for (i=n;i!=0;i/=10) {
//		a=i%10;
//		sum+=a;
//	}
//	return sum;
//}
//
//int main() 
//{
//	int n;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("\ntong cac chu so cua n la: %d",SumDigit(n));
//}
// 
// ham check so hoan hao
//#include<stdio.h>
//int CheckPN(int n) {
//	int i,sum=0;
//	for (i=1;i<n;i++) {
//		if (n%i==0) sum+=i;
//	}
//	if (n==sum) return 1;
//	return 0;
//}

//int main() 
//{
//	int n;
//	printf("n= ");
//	scanf("%d",&n);
//	if (CheckPN(n)==1) printf("\nn la so hoan hao");
//	else printf("\nn khong la so hoan hao");
//}
//
// Nhap a,b,c tinh xem can tang toi thieu bao nhieu don vi cua a,b,c de la 3 canh cua 1 tam giac
//#include<stdio.h>
//int CheckTg(int a,int b,int c) {
//	if (a<=0 | b<=0 | c<=0) return 0;
//	if (a+b<=c) return 2;
//	if (a+c<=b) return 3;
//	if (b+c<=a) return 4;
//	return 1;
//}
//main() 
//{
//	int a,b,c,count1=0,count2=0;
//	printf("a= ");
//	scanf("%d",&a);
//	printf("b= ");
//	scanf("%d",&b);
//	printf("c= ");
//	scanf("%d",&c);	
//	if (CheckTg(a,b,c)==1) printf("a,b,c la 3 canh cua 1 tam giac");
//	else {
//		if (CheckTg(a,b,c)==2) {
//			while (a+b<=c) {
//				a++;
//				count1++;
//				b++;
//				count2++;
//			} 
//			printf("a can them %d don vi",count1);
//			printf(" b can them %d don vi",count2);
//			printf(" de a,b,c la 3 canh 1 tam giac");
//		}
//		else if (CheckTg(a,b,c)==3) {
//			while (a+c<=b) {
//				a++;
//				count1++;
//				c++;
//				count2++;
//			} 
//			printf("a can them %d don vi",count1);
//			printf(" c can them %d don vi",count2);
//			printf(" de a,b,c la 3 canh 1 tam giac");
//		}
//		else if (CheckTg(a,b,c)==4) {
//			while (b+c<=a) {
//				b++;
//				count1++;
//				c++;
//				count2++;
//			} 
//			printf("b can them %d don vi",count1);
//			printf(" c can them %d don vi",count2);
//			printf(" de a,b,c la 3 canh 1 tam giac");
//		}
//	}
//}
//
// chuyen so binary sang decimal
//#include<stdio.h>
//#include<math.h>
//int BinToDec(long long n) {
//	int dec=0,p=0,cs,check;
//	while (n!=0) {
//		check=n%10;
//		cs=n%10*pow(2,p);
//		if (check!=0 && check!=1) {
//			return 0;
//			break;
//		} 
//		p++;
//		dec+=cs;
//		n/10;
//	}
//	return dec;
//} 
//main()
//{
//	long long n;
//	printf("n= ");
//	scanf("%lld",&n);
//	if (BinToDec(n)==0) printf("hay nhap n dang binary");
//	else printf("n to decimal = %d",BinToDec(n));
//}
//
// ve hinh vuong dac canh bang n 
//#include<stdio.h>
//main() 
//{
//	int i,n,j;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=n;j++) printf("# ");
//		printf("\n");
//	}
//}
// ve hinh vuong rong canh n
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
// ve tam giac dac canh n (goc duoi trai)
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
// ve tam giac dac canh n (goc tren trai)
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
// ve tam gia n canh (goc duoi phai)
//#include<stdio.h>
//main()
//{
//	int i,n,j,count=1,a;
//	printf("n= ");
//	scanf("%d",&n);
//	for (j=1;j<=n;j++) {
//		if (count<=j) {
//			for (a=1;a<=count;a++) printf(" ");
//		}
//		count++;
//		printf("\n");
//		}
//}
//
// chuong trinh cai dat so nguyen to 
//#include<stdio.h>
//int CheckPrime(int n) {
//	int i;
//	if (n==1 || n==0) return 0;
//	if (n==2) return 1;
//	for (i=2;i<n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1; 
//}
//void Input(int a[], int n) {
//	int i=0,j,count;
//	while (i<n) {
//		printf("a[%d] = ",i);
//		scanf("%d",&a[i]);
//		if (CheckPrime(a[i])==0) printf ("a[%d] khong la so nguyen to.\n",i);
//		else if (i!=0) {
//			count=0;
//			for (j=i-1;j>=0;j--) {
//				if (a[i]==a[j]) {
//					printf ("a[%d] da trung voi a[%d].\n",i,j);
//					count++;
//				}
//			}
//			if (count==0) i++;
//		}
//		else i++;
//	}
//}
//void Output(int a[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		printf("\na[%d] = %d ",i,a[i]);
//	}
//}
//main()
//{
//	int a[100],n;
//	printf("danh sach n so nguyen to voi n= "); 
//	scanf("%d",&n);
//	if (n<0 || n>100) printf("nhap n voi 0<n<=100");
//	Input(a,n);
//	Output(a,n);
//}
//
// check so chinh phuong
//#include<stdio.h>
//int CheckSqNum(int n) {
//	int i;
//	if (n%10==2 || n%10==3 || n%10==7 || n%10==8) return 0;
//	else if (n==1 || n==0) return 1;
//	else for (i=2;i<=n/2;i++) {
//		if (n%(i*i)==0) return 1;
//	}
//}
//main() 
//{
//	int n;
//	printf("n= "); scanf("%d",&n);
//	if (CheckSqNum(n)) printf("n la so chinh phuong");
//	else printf("n khong la so chinh phuong");
//}
//
// tam giac fibonacci
//
//cach 1: khong dung ham
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
// tam giac floy
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
//
// tam giac snt
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
//
// chuyen so thap phan sang decimal
//
//#include<stdio.h>
//int a[100];
//main()
//{
//	int n,i=0,j,b;
//	printf("n= "); scanf("%d",&n);
//	b=n;
//	while (n!=0) {
//		a[i]=n%2;
//		n/=2;
//		i++;
//	}
//	printf ("%d chuyen sang binary la: ",b);
//	for (j=i-1;j>=0;j--) printf("%d",a[j]);
//}
//
// chuyen binary sang decimal
//
//#include<stdio.h>
//#include<math.h>
//int a[100];
//main() 
//{
//	long long int n;
//	int i=0,j,b,dec,cs=0;
//	printf("n= "); scanf("%d",&n);
//	while (n!=0) {
//		a[i]=n%10;
//		n/=10;
//		cs++;
//		i++;
//	}
//	for (j=0;j<i;j++) {
//		b=a[j]*pow(2,j);
//		dec+=b;
//	}
//	printf("n sang decimal la: %d",dec);
//}
//
// chuyen so thuc decimal sang binary
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
//	int i=0,j,a=(int)n/1;
//	float b=n-a,c,d;
//	while (b!=0) {
//		c=b*2;
//		arr[i]=(int)c/1;
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
// chuyen 1 so binary co phan sau dau phay sang he thap phan
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
//	while (b!=0) {
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
//	double n;
//	printf("n= "); scanf("%lf",&n);
//	printf("%f",sau(n)+truoc(n));
//}
//
// chuyen decimal sang hexadecimal
//
//#include<stdio.h>
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
//main()
//{
//	long int n;
//	printf ("n= ");	scanf("%d",&n);
//	dectohex(n);
//}
//
// chuyen so hexadecimal sang decimal
//#include<stdio.h>
//#include<math.h>
//int arr[100];
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
//	int n;
//	printf("n= "); scanf("%d",&n);
//	printf("n sang decimal: %d",hextodec(n));
//}
//
// Nhap n, a, b. chuyen 1 so n do tu he a sang he b bat ki
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
//
// nhap mang gom n phan tu tim min max vi tri 
//#include<stdio.h>
//int arr[100];
//main()
//{
//	int i,n,max=-1e9,min=1e9,vt,count=0;
//	printf("n= "); scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&arr[i]);
//	printf ("can tim so: "); scanf("%d",&vt);
//	for (i=0;i<n;i++) {
//		if (arr[i]<min) min=arr[i];
//		if (arr[i]>max) max=arr[i];
//		if (arr[i]!=vt) count++;
//	}
//	printf("max= %d.\n",max);
//	printf("min= %d.\n",min);
//	printf("vi tri so can tim = %d.\n",count);
//}
//
// nhap mang gom n tinh tong cac so chi so chan
//
//#include<stdio.h>
//int arr[100];
//main()
//{
//	int i,n,sum=0;
//	printf("n= "); scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&arr[i]);
//	for (i=0;i<n;i++) {
//		if (i%2==0) sum+=arr[i];
//	}
//	printf ("sum= %d",sum);
//}
//
// bai toan sap xep mang nhap vao
//#include<stdio.h>
//int arr[100];
//void tangdan(int arr[], int n) {
//	int i,j,tem;
//	for (i=0;i<n-1;i++) {
//		for (j=i+1;j<n;j++) {
//			if (arr[i]>arr[j]) {
//				tem=arr[i];
//				arr[i]=arr[j];
//				arr[j]=tem;
//			}
//		}
//	}
//	for (i=0;i<n;i++) printf ("%d ",arr[i]);
//}
//main()
//{
//	int n,i;
//	printf ("day n so voi n= "); scanf ("%d",&n);
//	for (i=0;i<n;i++) {
//		printf ("so thu %d = ",i+1);
//		scanf ("%d",&arr[i]);
//	}
//	tangdan(arr,n);
//}
//
// dao nguoc so
//#include<stdio.h>
//int Reverse(int n) {
//	int dao=0,last;
//	while (n>0) {
//		last=n%10;
//		dao=dao*10+last;
//		n/=10;
//	}
//	return dao;
//}
//main()
//{
//	int n;
//	scanf("%d",&n);
//	printf ("%d",Reverse(n));
//}
//
// sap xep chi so chan le
//#include<stdio.h>
//int arr[100],arr1[100],arr2[100];
//void selectde(int arr[], int n) {
//	int min,i,j,tem;
//	for (i=1;i<n-1;i+=2) {
//		min=i;
//		for (j=i+2;j<n;j+=2) {
//			if (arr[min]<arr[j]) min=j;
//		}
//		tem=arr[i];
//		arr[i]=arr[min];
//		arr[min]=tem;
//	}
//}
//void selectin(int arr[], int n) {
//	int min,i,j,tem;
//	for (i=0;i<n-1;i+=2) {
//		min=i;
//		for (j=i+2;j<n;j+=2) {
//			if (arr[min]>arr[j]) min=j;
//		}
//		tem=arr[i];
//		arr[i]=arr[min];
//		arr[min]=tem;
//	}
//}
//void output(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",arr[i]);
//}
//main()
//{
//	int i,n;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&arr[i]);
//	for (i=0;i<n;i++) {
//		if (i%2==0) selectin(arr,n);
//		if (i%2==1) selectde(arr,n);
//	}
//	output(arr,n);
//}
//
// sap xep 4 so nguyen to cuoi cung
// bai toan dao nguoc mang
// cach 1:
//#include<stdio.h>
//int arr[100];
//void input(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		printf ("a[%d]= ",i);
//		scanf("%d",&arr[i]); 
//	}
//}
//void output(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",arr[i]);
//}
//void dao(int arr[], int n) {
//	int i,tem;
//	for (i=0;i<n/2;i++) {
//		tem=arr[i];
//		arr[i]=arr[n-1-i];
//		arr[n-1-i]=tem;
//	}
//}
//main()
//{
//	int n;
//	scanf("%d",&n);
//	input(arr,n);
//	output(arr,n); printf("\n");
//	dao(arr,n); 
//	output(arr,n);
//}
// cach 2:
//#include<stdio.h>
//int arr[100],arr1[100];
//void input(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		printf ("a[%d]= ",i);
//		scanf("%d",&arr[i]); 
//	}
//}
//void output(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",arr[i]);
//}
//void daover2(int arr[], int n, int arr1[]) {
//	int i;
//	for (i=0;i<n;i++) {
//		arr1[n-1-i]=arr[i];
// }
//}
//main()
//{
//	int n;
//	scanf("%d",&n);
//	input(arr,n);
//	output(arr,n); printf("\n");
//	daover2(arr,n,arr1);
//	output(arr1,n);
//}
// dao 4 snt dau tien
//#include<stdio.h>
//int arr[100],arr1[100];
//int CheckPrime(int n) {
//	if (n<2) return 0;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//void input(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		printf ("a[%d]= ",i);
//		scanf("%d",&arr[i]); 
//	}
//}
//void output(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",arr[i]);
//}
//void daosnt(int arr[], int n, int arr1[]) {
//	int i,count=0,tem;
//	for (i=0;i<n;i++) {
//		if (CheckPrime(arr[i])==1) {
//			arr1[count]=arr[i];
//			count++;
//		}
//		if (count==4) break;
//	}
//	for (count=0;count<2;count++) {
//		tem=arr1[count];
//		arr1[count]=arr1[3-count];
//		arr1[3-count]=tem;
//	}
//	count=0;
//	for (i=0;i<n;i++) {
//		if (CheckPrime(arr[i])==1) {
//			arr[i]=arr1[count];
//			count++;
//		}
//		if (count==4) break;
//	}
//}
//main()
//{
//	int n;
//	scanf("%d",&n);
//	input(arr,n);
//	output(arr,n); printf("\n");
//	daosnt(arr,n,arr1);
//	output(arr,n);
//}
//
// cach 2
//#include<stdio.h>
//int a[100],b[100],c[100];
//int CheckPrime(int n) {
//	if (n<2) return 0;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//main()
//{
//	int i,n,count=0,tem;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) {
//			b[count]=i;
//			printf ("%5d\n",b[count]);
//			count++;
//		}
//		if (count==4) break;
//	}
//	for (count=0;count<2;count++) {
//		tem=a[b[count]];
//		a[b[count]]=a[b[3-count]];
//		a[b[3-count]]=tem;
//	}
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
// them sua xoa
//#include<stdio.h>
//int CheckPrime(int n) {
//	if (n<2) return 0;
//	if (n==2) return 1;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//int arr[100];
//void input(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		printf ("a[%d]= ",i);
//		scanf("%d",&arr[i]); 
//	}
//}
//void output(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",arr[i]);
//}
//main()
//{
//	int n,i,m,o;
//	scanf("%d",&n);
//	input(arr,n);
//	output(arr,n);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(arr[i])==1) arr[i]=99;
//	}
//	printf ("\n");
//	output(arr,n);
//	scanf("%d",&m);
//	scanf("%d",&o);
//	for (i=0;i<n;i++) {
//		if ()
//	}
//}
//#include<stdio.h>
//int a[100];
//int checkdif(int a[], int n) {
//	int i,j,count,check;
//	check=n;
//	for (i=0;i<n-1;i++) {
//		count=0;
//		if (a[i]==a[i])
//		for (j=i+1;j<n;j++) {
//			if(a[j]==a[i-1]) continue;
//			else if (a[j]==a[i]) count++;
//		}
//		if (count!=0) check-=count;
//	}
//	return check;
//}
//main()
//{
//	int n,i;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	printf ("%d",checkdif(a,n));
//}
//sum=0,cnt=0;
//for (i=n-1;i<=0;i++) {
//	if (a[i]%2==0) {
//		sum+=a[i];
//		count++;
//	}
//	if (count==4) break;
//}
//
// thay snt thu 2 tu cuoi len
//
//# include<stdio.h>
//int a[100];
//int CheckPrime(int n) {
//	if (n<2) return 0;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//main()
//{
//	int i,n,cnt=0;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=n-1;i>=0;i--) {
//		if (CheckPrime(a[i])==1) cnt++;
//		if (cnt==2) {
//			a[i]=a[i]*a[i];
//			break;
//		}
//	}
//	for (i=0;i<n;i++) printf("%5d",a[i]);
//}
//
// thay the so cach 3 vi tri so voi so nguyen to thu 2 tinh nguoc tu cuoi len bang 1 so binh phuong cua no
//
//# include<stdio.h>
//int a[100];
//int CheckPrime(int n) {
//	if (n<2) return 0;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//main()
//{
//	int i,n,cnt=0;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=n-1;i>=0;i--) {
//		if (CheckPrime(a[i])==1) cnt++;
//		if (cnt==2) {
//			a[i-3]=a[i-3]*a[i-3];
//			break;
//		}
//	}
//	for (i=0;i<n;i++) printf("%5d",a[i]);
//}
//
//#include<stdio.h>
//int a[100];
//int CheckPrime(int n) {
//	if (n<2) return 0;
//	if (n==2) return 1;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//void input(int a[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		printf ("a[%d]= ",i);
//		scanf("%d",&a[i]); 
//	}
//}
//void output(int a[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
//void them(int a[], int n, int k) {
//	int i,cnt=0,index; 
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) cnt++; // neu co snt cnt tang 1
//		if (cnt==3) {
//			index=i-2; // vi tri so can chen
//			break;
//		}
//	}
//	if (index<0) index=0; 
//	if (index>n) index=n-1;
//	for (i=n;i>index;i--) a[i]=a[i-1]; // tao khoang trong
//	a[index]=k;
//	n++;	
//}
//main()
//{
//	int n,k;
//	printf("n= "); scanf("%d",&n); 
//	input(a,n);
//	printf ("mang vua nhap: ");
//	output(a,n);
//	printf("\nk= "); scanf("%d",&k); // nhap so can chen
//	them(a,n,k);
//	printf ("them %d vao vi tri da cho:",k);
//	output(a,n+1); // in mang sau khi them
//}
//#include<stdio.h>
//#include<string.h>
//char a[100],tem;
//main()
//{
//	int i,j,n,min;
//	scanf("%d",&n);
//	getchar();
//	for (i=0;i<n;++i) {
//		scanf("%c",&a[i]);
//		getchar();
//	}
////	scanf("%c",&a[n-1]);
//	for (i=0;i<n-1;++i) {
//		min=i;
//		for (j=i+1;j<n;++j) {
//			if (a[min]>a[j]) min=j;
//		}
//		tem=a[i];
//		a[i]=a[min];
//		a[min]=tem;
//	}
//	for (i=0;i<n;++i) printf("%c ",a[i]); 
//}
//
// nhap vao mang hoc sinh sap xep, tim, sua, xoa, them
//#include<stdio.h>
//#include<string.h>
//char s[100][100],s1[100],s2[100];
//void in(char s[][100], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		scanf("%[^\n]",s[i]);
//		getchar();
//	}
//}
//void out(char s[][100],int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%d.%s\n",i+1,s[i]);
//}
//void add(char s[][100],int n) {
//	printf ("them sinh vien: "); scanf("%[^\n]",s[n]);
//}
//void change(char s[][100], int n) {
//	int a,i;
//	printf ("the order number of the student needed to change: "); scanf("%d",&a); getchar();
//	printf ("change to: "); scanf("%[^\n]",s1); getchar();
//	for (i=0;i<n;i++) {
//		if (i==a-1) {
//			strcpy(s[i],s1);
//			break;
//		}
//	}	
//}
//void xoa(char s[][100],int n) {
//	int a,i;
//	printf("the order number of student needed to delete is: "); scanf("%d",&a);
//	if (a<1) a=1;
//	if (a>n) a=n;
//	for (i=0;i<n;i++) {
//		if (i==a-1) strcpy(s[i],s[i+1]);
//	}	
//}
//void find(char s[][100], int n) {
//	int cnt=0,i;
//	printf ("the student' first name needed to find is: "); scanf("%s",s2); getchar();
//	for (i=0;i<n;i++) {
//		if (strstr(s[i],s2)!=NULL) {
//			printf ("%d.%s\n",i+1,s[i]);
//			cnt=1;
//		} 
//	}
//	if (cnt==0) printf ("error 404 not found!");	
//}
//main()
//{
//	int i,n=5,a,check=0,cnt;
//	strcpy(s[0],"Pham Long Vu");
//	strcpy(s[1],"Nguyen Doanh Thinh");
//	strcpy(s[2],"Mai Ngoc Giang");
//	strcpy(s[3],"Phan Minh Hieu");
//	strcpy(s[4],"Nguyen Chi Hung");
//	out(s,n);
//	add(s,n); n++;
//	out(s,n);
//	change(s,n); 
//	out(s,n);
//	xoa(s,n); n--;
//	out(s,n);
//	find(s,n);
//}
//
//#include<stdio.h>
//#include<string.h>
//char s[100],sl[100],su[100];
//main()
//{
//	int i,cnt;
//	scanf("%[^\n]s",s); getchar();
//	strcpy(sl,strlwr(s));
//	strcpy(su,strupr(s));
//	for (i=0;i<strlen(s);i++) {
//		if (i==0 || s[i-1]==' ') {
//			s[i]=su[i];
//			cnt=1;
//			while (s[i+cnt]!=' ') {
//				s[i+cnt]=sl[i+cnt];
//				cnt++;
//			}
//		}
//	}
//	printf("%s\n",s);
//}
//
//#include<stdio.h>
//#include<string.h>
//char s[100],g[100];
//main()
//{
//	int i,l,j;
//	do {
//		scanf("%s",s);
//	} while (strlen(s)%2==0 && strlen(s)<5);
//	l=strlen(s);
//	j=l/2-2;
//	for (i=0;i<5;i++) {
//		g[i]=s[j];
//		j++;
//	}
//	printf("%s",g);
//}











