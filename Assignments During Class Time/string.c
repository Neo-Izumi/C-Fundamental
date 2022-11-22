// PHAN 3: CHUOI - STRING
//
// bai 1: in/out a string
//
//#include<stdio.h>
//main()
//{
//	char name[100];
//	int age;
////	scanf("%s",name);	// nhap chuoi khong co khoang cach (tab,\n,..)
////	scanf("%[^\n]",s); // nhap chuoi co khoang cach voi scanf
////	fgets(name, sizeof (name), stdin);	// nhap chuoi co khoang cach
////	printf("%s",name);	// xuat chuoi khong co san \n
////	puts(name);	// xuat chuoi co san \n
//	printf ("name: "); scanf ("%d",&age);
//	getchar();
//	printf ("age: "); fgets(name, sizeof (name), stdin);
//	printf ("%s - %d years old",name,age);
//}
//========================================================================================================================================================================
//
// bai 2: a basic program to look for ASCII code of a character
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100], s2[100];
//	int i;
//	scanf("%[^\n]",s);	// ham scanf khong doc ki tu \n nen do dai = strlen
////	fgets(s, sizeof (s), stdin);	// ham fgets doc ca ki tu \n nen do dai = strlen-1
////	printf ("%d\n",strlen(s));
//	for (i=0;i<strlen(s);i++) {
//		if (s[i]!=' ') printf ("%d ",s[i]);
//	}
//}
//========================================================================================================================================================================
//
//	chu y khi su dung aray va string trong ham con
//
// khai bao bien hang thuong dung voi string va array
// int func(int value) const; - tham so duoc dua vao ham func o tham bien hay tham chieu thi khong thay doi gia tri cua bien
// int func(int const value) == int func(const int value)
// int func(int const value1, int value2) - chi value1 khong duoc thay doi, value2 co the duoc thay doi
// int func(int value1, int value2) const - car value1 va value2 deu khong duoc thay doi 
//========================================================================================================================================================================
//
// bai 3: use strlen function to get the length of a string
//	
//	structure: int strlen (const char *str)
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100];
//	printf ("enter the string: ");
//	scanf("%[^\n]",s);	// ham scanf khong doc ki tu \n nen do dai = strlen
//	printf("the length of this string is: %d",strlen(s));
//	getchar();
//	printf ("\nenter the string again: ");
//	fgets(s, sizeof s, stdin);	// ham fgets doc ca ki tu \n nen do dai = strlen-1	
//	printf("\nthe length of this string is: %d",strlen(s));
//	printf("\nthe length of this string is: %d",strlen(s)-1);
//}
//========================================================================================================================================================================
// 
// bai 4: use strcmp function to compare 2 strings 
//
//	structure: int strcmp ( const char * str1, const char * str2 )
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[]="apple",s1[100];
//	do {
//		printf ("what is my favorite fruit?\n");
//		scanf("%s",s1);
//	}	while (strcmp(s,s1)!=0);
//	printf ("correct!");
//}
//========================================================================================================================================================================
//
// bai 5: use strcat function to appends a copy of the string pointed to by s2 to the end of the string pointed to by s1.
//
//	structure: char * strcat ( char * destination, const char * source);
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100],s1[100],s2[100];
//	printf ("enter string 1: "); scanf("%[^\n]",s);
//	getchar();
//	printf ("enter string 2: "); scanf("%[^\n]",s1);
//	getchar();
//	printf ("enter string 3: "); fgets(s2,sizeof s2,stdin);
//	strcat(s,s1);
//	strcat(s,s2);
//	printf("string 1 after appending string 2 and 3 is: "); puts(s); 
//}
//========================================================================================================================================================================
//
// bai 6: use strcpy function to copy the source string to the destination string
//
//	structure: char* strcpy(char* destination, const char* source);
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100],s1[100];
//	printf ("enter string 1: "); 
//	scanf("%[^\n]",s);
//	printf ("string 1: %s\n",s);
//	strcpy(s1,s);
//	strcpy(s,"hello");
//	printf ("string 2: %s\n",s1);
//	printf ("string 1: %s\n",s);
//}
//========================================================================================================================================================================
//
// bai 7: use strlwr and strupr function to convert a string into lowercase and uppercase 
//
//	structure: char * strupr (char * s)
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100];
//	printf("enter the string: ");
//	fgets(s,sizeof s,stdin);
////	scanf("%[^\n]",s);
//	strlwr(s);
//	printf("string after converting to lowercase: %s",s);
//	strupr(s);
//	printf("string after converting to uppercase: %s",s);
//}
//========================================================================================================================================================================
//
// bai 8: use strrev function to reverse a given string
//
//	structure: char * strrev (char * s)
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100];
//	printf("enter the string: ");
////	fgets(s,sizeof s,stdin);
//	scanf("%[^\n]",s);
//	strrev(s);
//	printf("string after reversing: %s",s);
//}
//========================================================================================================================================================================
//
// bai 9: use strstr function to find the first occurence of the matched string in the given string
//
//	structure: char * strstr (const char * string, const char * substring)
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100],s1[100];
//	printf("enter the string: ");
//	scanf("%[^\n]",s);
//	printf("enter the substring: ");
//	scanf("%s",s1);
//	printf("the first time the substring occur in the string: %s",strstr(s,s1));
//}
//========================================================================================================================================================================
//
// bai 10: use strchr function to find the first time the given character was found in the given string
//
//	structure: char * strchr (const char * string, char character)
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[100],c;
//	printf("enter the string: ");
//	scanf("%[^\n]",s);
//	printf("character needed to find: ");
//	getchar();
//	scanf("%c",&c);
//	printf("the first time character %c appeared in the string is: %d",c,strchr(s,c)-s+1);
//}
//========================================================================================================================================================================
// 
// bai 11: standardize a given name
//
// test case: "   tRaN    tHi  NgOc   trINH   "
//#include<stdio.h>
//#include<string.h>
//char s[100],sl[100],su[100];
//main()
//{
//	int i,j,l,cnt;
//	printf("enter the name:\n"); getchar();
//	scanf("%[^\n]s",s); getchar();
//	// remove unecessary spaces between every word in the name
//	i=0;
//	while (s[i]!='\0') {
//		if (s[i]==' ' && s[i+1]==' ') {
//			j=i;
//			while (s[j]!='\0') {
//				s[j]=s[j+1];
//				j++;
//			}
//			i--;
//		}
//		i++;
//	}
//	// remove unecessary spaces in front of the name
//	if (s[0]==' ') {
//		i=0;
//		while (s[i]!='\0') {
//			s[i]=s[i+1];
//			i++;
//		}
//	}
//	// remove unecessary spaces behind the name
//	l=strlen(s);
//	if (s[l-1]==' ') s[l-1]=s[l];	// l-1 because strlen function automatically remove the null character from the given string and after that, count the number of characters in this string
//	// standardize the name 
//	i=0;
//	while (s[i]!='\0') {
//		if (s[0]>=97 && s[0]<=122) s[0]-=32;
//		if (s[i]==' ' && s[i+1]>=97 && s[i+1]<=122) s[i+1]-=32;
//		if (s[i]!=' ' && s[i+1]>=65 && s[i+1]<=90) s[i+1]+=32;
//		i++;
//	}
//	printf("the name after standardizing:\n");
//	printf("%s",s); 
//}
//========================================================================================================================================================================
//
// bai 12: enter a table of student's names and write a program to find or fix or add or delete a name
//
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
//	printf ("the student's first name needed to find is: "); scanf("%s",s2); 
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
//	getchar();
//	find(s,n);
//}
//========================================================================================================================================================================
//
// bai 13: enter a string, after that, print to the screen 5 characters at middle of the given string
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






