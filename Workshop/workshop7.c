// Nguyen Doanh Thinh - HE161890	
//
// workshop 7
//
int CheckPrime(int n) {
	if (n<2) return 0;
	int i;
	for (i=2;i*i<=n;i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
//
// bai 1: xoa bo 3 phan tu dung sau phan tu NT thu 2 cua mang
//
//#include<stdio.h>
//int a[100];
//main()
//{
//	int i,j,n,cnt=0;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=0;i<n;i++) {
//		if (CheckPrime(a[i])==1) cnt++;
//		if (cnt==2) {
//			if (i==n-1) break;
//			else if (i==n-2) {
//				n--;
//				break;
//			}
//			else if (i==n-3) {
//				n-=2;
//				break;
//			}
//			else if (i<n-3) {
//				for (j=i+1;j<n;j++) a[j]=a[j+3];
//				n-=3;
//				break;
//			}
//		} 
//	}
//	for (i=0;i<n;i++) printf("%5d",a[i]);	
//}
//
// bai 2: xoa tat ca cac so nguyen to co chi so le
//
//#include<stdio.h>
//int a[100];
//main() 
//{
//	int i,n,j;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	for (i=n-1;i>=0;i++) {	// chay nguoc tu duoi len thi xoa so dau tien khong lam anh huong den chi so cac so tiep theo
//		if (CheckPrime(a[i])==1) {
//			if (i%2==1) {
//				for (j=i;j<n;j++) a[j]=a[j+1];
//				n--;
//				i--;
//			}
//		}
//	}
//	for (i=0;i<n;i++) printf("%5d",a[i]);
//}
//
// bai 3: dao nguoc ki tu cua chuoi s
//
//#include<stdio.h>
//#include<string.h> 
//char s[100];
//void reverse(char s[]) {
//	int i,l;
//	char tem;
//	l=strlen(s);
//	for (i=0;i<l/2;i++) {
//		tem=s[i];
//		s[i]=s[l-i-1];
//		s[l-i-1]=tem; 
//	}
//}
//main()
//{
//	scanf("%[^\n]",s);
////	strrev(s);
//	reverse(s);
//	printf("%s",s); 
//}
//
// bai 4: nhap vao cac tu cach nhau boi dau cach sort cac tu theo su tang dan cua do dai neu cung do dai thi sort theo chieu tang dan cua tu dien
//
// test case: ngo thinh mai thanh giang anh dan nguyen
//#include<stdio.h>
//#include<string.h> 
//char s[100][100], tem[100];
//main()
//{
//	int i,k,j,n,min;
//	scanf("%d",&n);
//	for (i=0;i<n;i++) {
//		scanf("%s",s[i]);
//		getchar();
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
