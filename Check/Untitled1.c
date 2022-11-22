//bt1: nhap vao 2 so nguyen va in ra cac so nguyen trong doan 2 so do
//
//#include<stdio.h>
//int main() {
//	int a,b,i;
//	scanf("%d %d",&a,&b);
//	for (i=a; i<=b; i++) {printf("%d ",i);}
//	return 0;
//}
//================================================================================================================================================================================================================================================================================
//bt2: nhap vao 2 so nguyen, tinh tong cac so nguyen trong doan 2 so do
//
//#include<stdio.h>
//int main() {
//    int a,b,i,t=0;
//    scanf("%d%d",&a,&b);
//    if (a>b) {
//        for (i=b;i<=a;i++) {
//            t=t+i;
//        }
//        printf("%d",t);
//    } else {
//        for (i=a;i<=b;i++) {
//            t=t+i;
//        }
//        printf("%d",t);
//    }
//    return 0;
//}
//================================================================================================================================================================================================================================================================================
//bt3: nhap vao 2 so nguyen, tinh tong cac so nguyen le trong doan 2 so do
//
//#include<stdio.h>
//int main() {
//    int n,t=0;
//    scanf("%d",&n);
//    if (n>=0) {
//        for (int i=0;i<=n;i++) {
//            if (i%2==1) {t=t+i;}
//        } 
//        printf("%d",t);
//    } else {
//        for (int i=0;i>=n;i=i-1) {
//            if (i%2==1) {t=t+i;}
//        } 
//        printf("%d",t);
//    }
//    return 0;
//}
//================================================================================================================================================================================================================================================================================
//bt4: nhap vao so nguyen n, in ra so cac uoc cua n
//cach 1:dung vong lap for 
//#include<stdio.h>
//int main() {
//	int n,i,t=0;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		if (n%i==0) {
//				t++;
//		}
//	}
//	printf("%d",t);
//	return 0;
//}
//
//cach 2:dung vong lap while
//#include<stdio.h>
//int main() {
//	int n,i=1,t=0;
//	printf("n= ");
//	scanf("%d",&n);
//	while (i<=n) {
//		if (n%i==0) {t++;}
//		i++;
//	} printf("%d",t);
//	return 0;
//}
//================================================================================================================================================================================================================================================================================
//
//#include<stdio.h>
//
//int main() {
//    int arr[100],i,n,k,count=0;
//    scanf("%d%d",&n,&k);
//    for (i=0;i<n;i++) {
//        scanf("%d",&arr[i]);
//        if (arr[i]==k) count++;
//    }
//    printf("%d",count);
//    return 0;
//}
//
//#include<stdio.h>
//int arr[100];
//main()
//{
//	int n,i,count=1,check;
//	scanf("%d",&n);
//	for (i=0;i<n;) {
//		check=0;
//		scanf("%d",&arr[i]);
//		if (arr[i]==1 || arr[i]==2) i++;
//		else continue;
//	}
//	for (i=1;i<n;i++) {
//		if (arr[i]==arr[0]) count++;
//		else count--;
//	}
//	if (count<0) count=-count;
//	printf("%d",count); 
//}
//#include<stdio.h>
//main()
//{
//	int x=0;
//
//	switch(x)
//	{
//	case 1: printf( "One" );
//	case 0: printf( "Zero" );
//	case 2: printf( "Hello World" );
//	}
//}
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
//#include<stdio.h>
//#include<string.h>
//char f[100], m[100], l[100], v[100], a[100];
//int cmp(char s1[], char s2[]) {
//	int i=0;
//	while (s1[i]!=0 || s2[i]!=0) {
//		if (s1[i]>s2[i]) {
//			return 1;
//			break;
//		}
//		if (s1[i]<s2[i]) {
//			return -1;
//			break;
//		}
//		i++;
//	}
//	return 0;
//}
//main()
//{
//	gets(f);
//	gets(m);
////	gets(l);
////	strcpy(a,l); strcat(a," ");
////	strcat(a,m); strcat(a," ");
////	strcat(a,f);
////	printf("%s\n",a);
////	strcpy(v,f); strcat(v," ");
////	strcat(v,m); strcat(v," ");
////	strcat(v,l);
//	printf("%d",cmp(f,m));
//}
//#include<stdio.h>
//int f(int n) {
//	if (n==1||n==0) return 0;
//	else if(n%3==0) return f(n/3)+3;
//	else return 2+f(n-1);
//}
//#include<stdio.h>
//
//int x;
//int main(){
//	x=100;
//	printf("x=%d\n",x);
//	test();
//	printf("x=%d\n",x);
//	return (0);
//}
//void test(){
//	int x;
//	x=20;
//}
//#include<stdio.h>
//#include<string.h> 
//char s[100][100], tem[100], chu[100];
//main()
//{
//	int i,k,j,n,min;
//	scanf("%[^\n]s",chu); getchar();
//	for (i=0;i<strlen(chu);i++) {
//		
//	}
//	for (i=0;i<n-1;i++) {
//		min=i;
//		for (j=i+1;j<n;j++) {
//			if (strlen(s[min])>strlen(s[j])) min=j;
//		}
//		strcpy(tem,s[min]);
//		strcpy(s[min],s[i]);
//		strcpy(s[i],tem);
//	}
//	for (i=0;i<n;i++) printf("%s ",s[i]);
//	for (i=0;i<n-1;i++) {
//		min=i; 
//		for (j=i+1;j<n;j++) {
//			if (strlen(s[min])==strlen(s[j])) {
//				k=0;
//				while (s[min][k]!='\0') {
//					if (s[min][k]==s[j][k]) k++;
//					else if (s[min][k]>s[j][k]) {
//						min=j;
//						break;
//					}
//					else break;
//				}
//			}
//		}
//		strcpy(tem,s[min]);
//		strcpy(s[min],s[i]);
//		strcpy(s[i],tem);
//	}
//	printf ("\n");
//	for (i=0;i<n;i++) printf("%s ",s[i]);
//}

#include<stdio.h>
check(int n) {
	int sum=0,i;
	for (i=1;i<n;i++) {
		if (n%i==0) sum+=i;
	}
	if (sum==n) return 1;
	else return 0;
}
main()
{
	int cnt=0,i;
	for (i;;i++) {
		if (check(i)==1) {
			printf("%d ",i);
			cnt++;
		}
		if(cnt==4) break;
	}
}







