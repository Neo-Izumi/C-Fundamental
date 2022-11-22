// Nguyen Doanh Thinh
//
// workshop 8
//
// bai 9,10: nhap vao cac tu cach nhau boi dau cach sort cac tu theo su tang dan cua do dai neu cung do dai thi sort theo chieu tang dan cua tu dien
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
//
// bai 11: dem tan suat xuat hien cac ky tu trong chuoi
//
//#include<stdio.h>
//#include<string.h>
//char s[100];
//int a[100];
//main()
//{
//	int i=0,j,k=0,check;
//	for (i=0;i<100;i++) a[i]=1;
//	scanf("%[^\n]",s);
//	i=0;
//	while (s[i]!=0) {
//		check=1;
//		for (k=0;k<i;k++) if (s[i]==s[k] || s[i]==s[k]+32 || s[i]==s[k]-32) check=0;
//		if (check==1) {
//			j=i+1;
//			while (s[j]!=0) {
//				if (s[i]==s[j] || s[i]==s[j]+32 || s[i]==s[j]-32) a[i]+=1;
//				j++;
//			}
//			printf ("'%c': %d\n",s[i],a[i]);
//			i++;
//		}
//		else i++;
//	}	
//}
