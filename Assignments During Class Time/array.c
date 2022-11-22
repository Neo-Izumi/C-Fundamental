// PHAN 2: MANG - ARRAY
//
// bt1: nhap n, nhap vao cac so nguyen to, in ra danh sach cac so nguyen to nhap vao nhung khong trung nhau
//
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
//	Input(a,n);
//	Output(a,n);
//}
//========================================================================================================================================================================
//
// bt2: tam giac vuong canh n pascal theo mang
//
//#include<stdio.h> 
//int a[100],b[100]; 	// mang a luu gia tri hang truoc
//main()
//{
//	int i,j,n;
//	printf ("n= "); scanf("%d",&n);
//	a[0]=0;
//	a[1]=1;
//	a[2]=0;
//	for (i=1;i<=n;i++) {
//		for (j=1;j<=i;j++) b[j]=a[j]+a[j-1];	// tinh gia tri hang hien tai
//		for (j=1;j<=i;j++) {
//			printf(" %2d",b[j]);
//			a[j]=b[j];		// luu gia tri hang hien tai vao mang a de mang b tinh hang tiep theo
//		}
//		printf("\n");
//	}
//}
//========================================================================================================================================================================
// 
// bt3: bai toan doi tien sao cho doi duoc it so to tien nhat
//
//#include<stdio.h> 
//int a[9]={1,2,5,10,20,50,100,200,500};
//main()
//{
//	int i,n,count,b;
//	printf ("so tien can doi la: "); scanf("%d",&n);
//	for (i=8;i>=0;) {
//		count=n/a[i];
//		if (count!=0) printf ("\n%d k: %d to.",a[i],count);
//		n%=a[i];
//		i--;   
//	}
//}
//========================================================================================================================================================================
// 
// bt4: chuyen so nguyen decimal sang binari
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
//========================================================================================================================================================================
//
// bt5: chuyen so nguyen binary sang decimal
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
//========================================================================================================================================================================
//
// bt6: chuyen so thuc decimal sang binary
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
//========================================================================================================================================================================
//
// bt7: nhap mang n phan tu tim min, max, vi tri min, max, vi tri 1 so bat ki
//
//#include<stdio.h>
//int arr[100];
//main()
//{
//	int i,n,max,min,vt,count=0,a,b,m;
//	printf("n= "); scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&arr[i]);
//	printf ("m= "); scanf("%d",&vt);
//	max=arr[0];
//	min=arr[0];
//	for (i=0;i<n;i++) {
//		if (arr[i]<=min) {
//			min=arr[i];
//			a=i+1;
//		}
//		if (arr[i]>=max) {
//			max=arr[i];
//			b=i+1;
//		}
//		if (arr[i]!=vt) ++count;
//	}
//	printf ("max= %d o vi tri so %d.\n",max,b);
//	printf ("min= %d o vi tri so %d.\n",min,a);
//	if (count==n) printf ("m khong co trong danh sach");
//	else printf ("vi tri m la %d.\n",count);
//}
//========================================================================================================================================================================
//
// bt8: nhap mang gom n tinh tong cac so chi so chan va tong cac so chan
//
//#include<stdio.h>
//int arr[100];
//main()
//{
//	int i,n,sumi=0,sum=0;
//	printf("n= "); scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&arr[i]);
//	for (i=0;i<n;i++) {
//		if (i%2==0) sumi+=arr[i];
//		if (arr[i]%2==0) sum+=arr[i];
//	}
//	printf ("tong cac so chan = %d.\n",sum);
//	printf ("tong cac so o vi tri chan = %d",sumi);
//}
//========================================================================================================================================================================
// 
// bt9: nhap mang n phan tu, sap xep cac so da nhap vao 
//
//#include<stdio.h>
//int arr[100];
//// sap xep tang dan
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
//}
//// sap xep giam dan
//void giamdan(int arr[], int n) {
//	int i,j,tem;
//	for (i=0;i<n-1;i++) {
//		for (j=i+1;j<n;j++) {
//			if (arr[i]<arr[j]) {
//				tem=arr[i];
//				arr[i]=arr[j];
//				arr[j]=tem;	
//			}
//		}
//	}
//}
//void xuat(int arr[], int n) {
//	int i;
//	for (i=0;i<n;i++) printf ("%5d",arr[i]);
//}
//main()
//{
//	int n,i,m;
//	printf ("mang gom n phan tu n= "); scanf("%d",&n);
//	for (i=0;i<n;i++) {
//		printf ("so thu %d= ",i+1);
//		scanf("%d",&arr[i]);
//	}
//	printf ("day so:"); xuat(arr,n);
//	printf ("\n1. sap xep day so tang dan");
//	printf ("\n2. sap xep day so giam dan");
//	printf ("\nchon: "); scanf("%d",&m);
//	switch (m) {
//		case 1:
//			printf ("\nday so tang dan:");
//			tangdan(arr,n);
//			xuat(arr,n);
//			break;
//		case 2:
//			printf ("\nday so giam dan:");
//			giamdan(arr,n);
//			xuat(arr,n);
//			break;
//	}	
//}
//========================================================================================================================================================================
//
// bt10: tinh tong 3 so chan cuoi cung va 3 so nguyen to cuoi cung cua mang n phan tu
//
//#include<stdio.h>
//int arr[100];
//int chan(int arr[],int n) {
//	int i,count=0,sum=0;
//	for (i=n-1;i>=0;i--) {
//		if (arr[i]%2==0) {
//			sum+=arr[i];
//			count++;
//		}
//		if (count==3) break;
//	}
//	return sum;
//}
//int CheckPrime(int n) {
//	if (n<2) return 0;
//  	if (n==2) return 1;
//	int i;
//	for (i=2;i*i<=n;i++) {
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//int snt(int arr[],int n) {
//	int i,count=0,sum=0;
//	for (i=n-1;i>=0;i--) {
//		if (CheckPrime(arr[i])==1) {
//			sum+=arr[i];
//			count++;
//		}
//		if (count==3) break;
//	}
//	return sum;
//}
//main()
//{
//	int n,i;
//	printf("n= "); scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&arr[i]);
//	printf ("\ntong 3 so chan cuoi la: %d",chan(arr,n));
//	printf ("\ntong 3 so nguyen to cuoi la: %d",snt(arr,n));
//}
//========================================================================================================================================================================
//
// bt11: sap xep so co chi so chan tang dan, chi so le giam dan
//
// cach 1:
//
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
// cach 2:
//
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
//void sort(int arr[], int n) {
//	int i,j,tem;
//	for (i=0;i<n-1;i++) {
//		for (j=i;j<n;j++) {
//			if (i%2==0 && j%2==0 && arr[i]>arr[j] || i%2==1 && j%2==1 && arr[i]<arr[j]) {
//				tem=arr[i];
//				arr[i]=arr[j];
//				arr[j]=tem;
//			}
//		}
//	}
//}
//main()
//{
//	int n;
//	printf("n= "); scanf("%d",&n);
//	input (arr,n);
//	printf ("mang vua nhap:"); output(arr,n);
//	printf ("\nmang da sap xep:"); sort(arr,n); output(arr,n);
//}
//========================================================================================================================================================================
//
// bt12: sap xep mang so chan tang dan so le giam dan
// 
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
//void sort(int arr[], int n) {
//	int i,j,tem;
//	for (i=0;i<n-1;i++) {
//		for (j=i;j<n;j++) {
//			if (arr[i]%2==0 && arr[j]%2==0 && arr[i]>arr[j] || arr[i]%2==1 && arr[j]%2==1 && arr[i]<arr[j]) {
//				tem=arr[i];
//				arr[i]=arr[j];
//				arr[j]=tem;
//			}
//		}
//	}
//}
//main()
//{
//	int n;
//	printf("n= "); scanf("%d",&n);
//	input (arr,n);
//	printf ("mang vua nhap:"); output(arr,n);
//	printf ("\nmang da sap xep:"); sort(arr,n); output(arr,n);
//}
//========================================================================================================================================================================
//
// bt13: dao nguoc cac phan tu cua mang
//
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
//void daover1(int arr[], int n) {
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
//	daover1(arr,n); 
//	output(arr,n);
//}
//========================================================================================================================================================================
//
// bt14: dao 4 so nguyen to dau tien cua mang n phan tu
//
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
//========================================================================================================================================================================
//
// bt15: sap xep 4 so nguyen to cuoi cung tang dan cua mang n phan tu
//
//#include<stdio.h>
//int a[100],b[100];
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
//	int i,j,n,cnt=0,min,tem;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=n-1;i>=0;i--) {
//		if (CheckPrime(a[i])==1) {
//			b[cnt]=i;
//			cnt++;
//		}
//		if (cnt==4) break;
//	}
//	for (cnt=3;cnt>0;cnt--) {
//		min=b[cnt];
//		for (j=cnt-1;j>=0;j--) {
//			if (a[min]>a[b[j]]) min=b[j];
//		}
//		tem=a[b[cnt]];
//		a[b[cnt]]=a[min];
//		a[min]=tem;
//	}
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
//========================================================================================================================================================================
//
// bt16: them sua xoa phan tu cua mang
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
//void sua(int a[], int n) {
//	int i;
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) a[i]=99;
//	}	
//} 
//void them(int a[], int n, int k, int m) {
//	int i;
//	if (m<0) m=0; 
//	if (m>n) m=n;
//	for (i=n;i>m;i--) a[i]=a[i-1]; 
//	a[m]=k;
//	n++;	
//}
//void xoa(int a[], int n, int m) {
//	int i;
//	if (m<0) m=0; 
//	if (m>n) m=n;
//	for (i=0;i<n;i++) {
//		if (i>=m) a[i]=a[i+1];
//	}
//	n--;		
//}
//main()
//{
//	int n,i,k,m,tem;
//	printf("n= "); scanf("%d",&n);
//	input(a,n);
//	printf ("mang vua nhap: ");
//	output(a,n);
////	sua(a,n);
////	printf ("\nmang sua snt thanh 99: ");
////	output(a,n);
////	printf("\nk= "); scanf("%d",&k);
//	printf("\nm= "); scanf("%d",&m); 
//	m--;
////	them(a,n,k,m);
////	printf ("\nthem %d vao vi tri %d:",k,m+1);
////	output(a,n+1);
//	xoa(a,n,m);
//	printf ("\nxoa phan tu so %d: ",m);
//	output(a,n-1);
//}
//========================================================================================================================================================================
//
// bt17: tim so lon thu 2 cua mang
//
// cach 1: sap xep roi tim so thu 2
//
//#include<stdio.h>
//int a[100];
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
//void sort(int arr[], int n) {
//	int i,j,tem;
//	for (i=n-1;i>0;i--) {
//		for (j=0;j<i;j++) {
//			if (arr[j]<arr[j+1]) {
//				tem=arr[j+1];
//				arr[j+1]=arr[j];
//				arr[j]=tem;
//			}
//		}
//	}
//}
//main()
//{
//	int n;
//	printf("n= "); scanf("%d",&n);
//	input(a,n);
//	printf("mang vua nhap: "); 
//	output(a,n);
//	sort(a,n); 
//	printf("\nso lon thu 2 trong mang: %d",a[1]);
//}
//
// cach 2: khong sap xep
//
//#include<stdio.h>
//int a[100];
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
//int maxs(int a[], int n) {
//	int maxf,maxs,i;
//	if (a[0]>=a[1]) maxf=a[0], maxs=a[1];
//	if (a[0]<=a[1]) maxf=a[1], maxs=a[0];
//	for (i=0;i<n;i++) {
//		if (a[i]>maxf) {
//			maxs=maxf;
//			maxf=a[i];
//		}
//	}
//	return maxs;	
//}
//main()
//{
//	int n,i;
//	printf("n= "); scanf("%d",&n);
//	input(a,n);
//	printf("mang vua nhap: "); 
//	output(a,n);
//	printf("\nso lon thu 2 trong mang: %d",maxs(a,n));
//}
//========================================================================================================================================================================
//
// bt18: thay snt thu 2 tu cuoi mang thanh binh phuong cua no
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
//========================================================================================================================================================================
//
// bt19: thay so cach 3 vi tri so voi so nguyen to thu 2 tinh nguoc tu cuoi len bang 1 so binh phuong cua no
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
//			if (i-4<0) i=4;
//			a[i-4]=a[i-4]*a[i-4]; // vi khong tinh so nguyen to do
//			break;
//		}
//	}
//	for (i=0;i<n;i++) printf("%5d",a[i]);
//}
//========================================================================================================================================================================
//
// bt20: them k vao mang n phan tu cach 2 vi tri so voi so nguyen to thu 3 cua mang
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
//========================================================================================================================================================================
//
// bai 21: enter an array of characters, sort this array following the alphabet order
//
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
////		getchar();
////		scanf("%c ",&a[i]);
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
//========================================================================================================================================================================
//
// bai 22: xoa so nguyen to dau tien cua mang
//
//#include<stdio.h>
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
//	int i,n,j;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) if (CheckPrime(a[i]==1)) {
//		j=i;
//		break;
//	}
//	for (i=j;i<n;i++) a[i]=a[i+1];
//	n--;
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
//========================================================================================================================================================================
//
// bai 23: xoa moi so nguyen to co trong mang
//
//#include<stdio.h>
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
//	int i,n,j,b;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) {
//			for (j=i;j<n-1;j++) a[j]=a[j+1];
//			n--;
//			i--;
//		}
//	}
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
//========================================================================================================================================================================
//
// bai 24: xoa so nguyen to thu 2 trong mang
// 
//#include<stdio.h>
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
//	int i,n,j,cnt=0;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) cnt++;
//		if (cnt==2) {
//			for (j=i;j<n-1;j++) a[j] = a[j+1];
//			n--;
//			break;
//		}
//	}
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
//========================================================================================================================================================================
// 
// bai 24: xoa 2 so dung sau so nguyen to thu 2 trong mang
//
// cach 1:
//
//#include<stdio.h>
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
//	int i,n,j,cnt=0,pos;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) cnt++;
//		if (cnt==2) {
//			pos=i;
//			for (j=++pos;j<n-1;j++) a[j] = a[j+1];
//			n--;
//			for (j=pos;j<n-1;j++) a[j] = a[j+1];
//			n--;
//			break;
//		}
//	}
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}
//
// cach 2:
//
//#include<stdio.h>
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
//	int i,n,j,cnt=0,pos;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) cnt++;
//		if (cnt==2) {
//			for (j=i+1;j<n-1;j++) a[j]=a[j+2];
//			n-=2;
//			break;
//		}
//	}
//	for (i=0;i<n;i++) printf ("%5d",a[i]);
//}









