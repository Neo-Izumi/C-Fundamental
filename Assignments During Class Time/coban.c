// PHAN I: LAP TRINH C CO BAN
// Hello World
//#include<stdio.h>
//int main()
//{
//	printf("Hello World!!");
//}
//========================================================================================================================================================================
// bt1.a: nhap vao 2 so va tinh tong cua chung
//#include<stdio.h>
//int main()
//{
//	int a, b, t;
//	printf("a=");
//	scanf("%d", &a);
//	printf("b=");
//	scanf("%d", &b);
//	t=a+b;
//	printf("sum of %d and %d is %d.\n", a, b, t);	
//}
//========================================================================================================================================================================
// bt1.b: nhap vao ban kinh hinh tron, tinh chu vi dien tich cua no
//#include<stdio.h>
//int main()
//{
//	float r, c, p, pi=3.14;
//	printf("radian is",);
//	scanf("%f", &r);
//	c=r*2*pi;
//	p=r*r*pi;
//	printf("circumferance is %f.\n",c);
//	printf("area is %f.",p);
//}
//========================================================================================================================================================================
// bt2: if else tim min max 2 so random
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	printf("a= ");
//	scanf("%f", &a);
//	printf("b= ");
//	scanf("%f", &b);
//	if (a>b) 
//	{
//		printf("max is %f.\n",a);
//		printf("min is %f.\n",b);
//	} else 
//	{
//		printf("max is %f.\n",b);
//		printf("min is %f.\n",a);
//	}
//}
//========================================================================================================================================================================
// bt3.a:nhap 3 gia tri a,b,c in ra gia tri min,max,tbc cua chung
//#include<stdio.h>
//int main()
//{
//	float a,b,c,t;
//	printf("a= ");
//	scanf("%f",&a);
//	printf("b= ");
//	scanf("%f",&b);
//	printf("c= ");
//	scanf("%f",&c);
//	t=(a+b+c)/3;
//	printf("average is %f.\n",t);
//	if (a>=b && b>=c) printf("max is %8.2f.\n",a);
//	else if (b>=c) printf("max is %1.2f.\n",b);
//	else printf("max is %3.3f.\n",c);
//	if (a<=b && b<=c) printf("min is %8.2f.\n",a);
//	else if (b<=c) printf("min is %1.2f.\n",b);
//	else printf("min is %3.3f.\n",c);
// } 
//========================================================================================================================================================================
// bt4: nhap vao so giay in ra so phut gio ngay thang nam
// cach 1:
//#include<stdio.h>
//int main()
//{
//	int n,s,min,h,d,m,y;
//	printf("so giay la ");
//	scanf("%d",&n);
//	s=n%60;
//	min=n/60;
//	h=min/60;
//	min=min%60;
//	d=h/24;
//	h=h%24;
//	m=d/30;
//	d=d%30;
//	y=m/12;
//	m=m%12;
//	if (y!=0) printf("%d nam ",y);
//	if (m!=0) printf("%d thang ",m);
//	if (d!=0) printf("%d ngay ",d);
//	if (h!=0) printf("%d gio ",h);
//	if (min!=0) printf("%d phut ",min);
//	if (s!=0) printf("%d giay ",s);
//}
//
// cach 2:
//#include<stdio.h>
//main()
//{
//	int n,s,min,h,d,m,y;
//	printf("so giay la ");
//	scanf("%d",&n);
//	s=n%60; // tong so giay chia lay phan du cho so giay 1 phut
//	min=(n/60)%60; // tong so phut chia lay phan du cho so phut 1 gio
//	h=(n/3600)%24; // tong so gio chia lay phan du cho so gio 1 ngay
//	d=(n/(3600*24))%30; // tong so ngay chia lay phan du cho so ngay 1 thang
//	m=(n/(3600*24*30))%12; // tong so thang chia lay phan du cho so thang 1 nam
//	y=(n/(3600*24*30))/12; // tong so thang chia lay phan nguyen cho so thang 1 nam
//	if (y!=0) printf("%d nam ",y);
//	if (m!=0) printf("%d thang ",m);
//	if (d!=0) printf("%d ngay ",d);
//	if (h!=0) printf("%d gio ",h);
//	if (min!=0) printf("%d phut ",min);
//	if (s!=0) printf("%d giay ",s);
//}
//========================================================================================================================================================================
// bt 5: tinh n!
// cach 1: vong lap for
//#include<stdio.h>
//int main()
//{
//	int n,i,c=1;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		c=c*i;
//	}
//	printf("n!= %d",c); 
//}
//
// cach 2: vong lap while
//#include<stdio.h>
//int main()
//{
//	int n,i=0,c=1;
//	printf("n= ");
//	scanf("%d",&n);
//	while (i<=n) {
//		i++;
//		c=c*i;
//	}
//	printf("n!= %d",c);
//}
//========================================================================================================================================================================
// bt6:nhap vao so n, kiem tra xem tu 0 den n co bao nhieu so le
//#include<stdio.h>
//int main()
//{
//	int n,i,count=0;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=0;i<=n;i++) {
//		if (i%2==1) count++;
//	}
//	printf("tu 0 den n co %d so le",count);
//}
//========================================================================================================================================================================
// bt7: nhap vao n, in ra cac so tu 1 den n chia het cho 2 nhung khong chia het cho 3 va tinh tong cua chung
// cach 1: vong lap for
//#include<stdio.h>
//main()
//{
//	int n,i,t=0;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		if (i%2==0 && i%3!=0) {
//			printf("%d ",i);
//			t+=i;
//		}	
//	}
//	printf("\ntong cac so thoa man yeu cau bang %d",t);
//}
//
// cach 2: vong lap while
//#include<stdio.h>
//main()
//{
//	int n,i=1,t=0;
//	printf("n= ");
//	scanf("%d",&n);
//	while (i<=n) {
//		if (i%2==0 && i%3!=0) {
//			printf("%d ",i);
//			t+=i;
//		}	
//		i++;
//	}
//	printf("\ntong cac so thoa man yeu cau bang %d",t);
//}
//========================================================================================================================================================================
// bt8: nhap vao n va tinh tong cac chu so cua n
// cach 1: vong lap for
//#include<stdio.h>
//main()
//{
//	int n,i,t=0,c;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=n;i>0;i=i/10) {
//		c=i%10;
//		t+=c;
//	}
//	printf("tong cac chu so cua n bang %d",t);
//}
//
// cach 2: vong lap while
//#include<stdio.h>
//main()
//{
//	int n,i,t=0,c;
//	printf("n= ");
//	scanf("%d",&n);
//	i=n;
//	while (i>0) {
//		c=i%10;
//		t+=c;
//		i=i/10;
//	}
//	printf("tong cac chu so cua n bang %d",t);
//}
//========================================================================================================================================================================
// bt8: nhap vao so nguyen n, kiem tra xem n co phai so nguyen to hay khong
// neu n la so nguyen to thi in ra man hinh 
// neu n khong phai so nguyen to thi in ra cac uoc so cua n
// cach 1: vong lap for
//#include<stdio.h>
//main()
//{
//	int n,i,check=0;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=2;i<n;i++) {
//		if (n%i==0) check=1;
//	}
//	if (check==0 && n!=0) printf("n la so nguyen to");
//	else {
//		printf("n khong la so nguyen to.\n");
//		printf("cac uoc cua n la: ");
//		for (i=1;i<=n;i++) {
//			if (n%i==0) printf("%d ",i);
//		}
//	}
//}
//
// cach 2: vong lap while
//#include<stdio.h>
//main()
//{
//	int n,i=2,check=0,c;
//	printf("n= ");
//	scanf("%d",&n);
//	while (i<n) {
//		if (n%i==0) check=1;
//		i++;
//	}
//	if (check==0 && n!=0) printf("n la so nguyen to");
//	else {
//		printf("n khong la so nguyen to.\n");
//		printf("cac uoc cua n la: ");
//		i=1;
//		while (i<=n) {
//			if (n%i==0) printf("%d ",i);
//			i++;
//		}
//	}
//}
//
// cach 3: dung ham check so nguyen to tu tao
//#include<stdio.h>
//int checksnt(int n) {
//	if (n<=0) return 1;
//	int i;
//	for (i=2;i<n;i++) {
//		if (n%i==0) return 1;
//	}
//	return 0; 
//}
//main()
//{
//	int n,i;
//	printf("n= ");
//	scanf("%d",&n);
//	if (checksnt(n)==0) printf("n la so nguyen to");
//	else {
//		printf("n khong la so nguyen to.\n");
//		printf("cac uoc cua n la: ");
//		for (i=1;i<=n;i++) if (n%i==0) printf("%d ",i);
//	}
//}
//========================================================================================================================================================================
// bt9: nhap vao so nguyen n, in ra cac so nguyen to tu 1 den n
// cach 1: vong lap for
//#include<stdio.h>
//main()
//{
//	int n,i,count,c;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("cac so nguyen to tu 1 den n la: ");
//	for (i=2;i<=n;i++) {
//		count=0;
//		for (c=1;c<i;c++) {
//			if (i%c==0) count++;
//		}
//		if (count==1) printf("%d ",i); // neu count=1 thi in ra i vi i chia het cho c khi c=1 nen count=1 thif i moi la snt
//	}
//} 
//
// cach 2: vong lap while
//#include<stdio.h>
//main()
//{
//	int n,i=2,count,c;
//	printf("n= ");
//	scanf("%d",&n);
//	printf("cac so nguyen to tu 1 den n la: ");
//	while (i<=n) {
//		count=0;
//		c=1;
//		while (c<i) {
//			if (i%c==0) count++;
//			c++;
//		}
//		if (count==1) printf("%d ",i);
//		i++;
//	}
//}
//========================================================================================================================================================================
// bt10: ve hinh thoi canh n 
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
//========================================================================================================================================================================
// bt11: tim uoc chung lon nhat cua 2 so
//
//#include<stdio.h>
// cach 1: de nhat nhung chay lau nhat
//int UCLN(int a, int b) {
//	int uc;
//	uc= a<b?a:b;
//	while (uc) {
//		if (a%uc==0 && b%uc==0) break;
//		uc--;
//	}
//	return uc;
//}
//
// cach 2: tim ucln bang giai thuat euclid ( phep tru )
//int UCLN(int a, int b) {
//	while (a!=b) {
//		if (a>b) a-=b;
//		else b-=a;
//	}
//	return a;
//}
//
// cach 3: tim ucln bang giai thuat euclid ( phep chia lay du )
//int UCLN(int a, int b) {
//	while (a*b!=0) {
//		if (a>b) a%=b;
//		else b%=a;
//	}
//	if (a==0) return b;
//	else return a;
//}
//main()
//{
//	int a,b;
//	printf("a= ");
//	scanf("%d",&a);
//	printf("b= ");
//	scanf("%d",&b);
//	printf("UCLN cua a va b la: %d",UCLN(a,b));
//}
//========================================================================================================================================================================
// bt12: tim boi chung nho nhat
//#include<stdio.h> 
// cach 1: de nhat va chay lau nhat
//int BCNN(int a, int b) {
//	int bc;
//	bc=a>b?a:b;
//	while (bc) {
//		if (bc%a==0 && bc%b==0) break;
//		bc++;
//	}
//	return bc;
//}
// 
// cach 2: cong so lon nhat cho den khi chia het cho so nho nhat
//int BCNN(int a, int b) {
//	int bs,step;
//	bs=a>b?a:b;
//	step=bs;
//	while (bs%a!=0 || bs%b!=0) {
//		bs+=step;
//	}
//	return bs;
//}
//
// cach 3: dung dai thuat euclid
//int BCNN(int a,int b) {
//	int ucln,bcnn,c,d;
//	c=a;
//	d=b; 
//	while (a*b!=0) {
//		if (a>b) a%=b;
//		else b%=a;
//	}
//	ucln=a==0?b:a;
//	bcnn=(c*d)/ucln;
//	return bcnn;
//}
//main()
//{
//	int a,b;
//	printf("a= ");
//	scanf("%d",&a);
//	printf("b= ");
//	scanf("%d",&b);
//	printf("BCNN cua a va b la: %d",BCNN(a,b));
//}
//========================================================================================================================================================================
//
// bt13: phan tich ra thua so nguyen to
//
//#include<stdio.h>
//main(){
//    int n,i;
//    printf("\nNhap n = ");
//    scanf("%d", &n);
//    int dem;
//    
//    for(i = 2; i <= n; i++){
//        dem = 0;
//        while(n % i == 0){
//            ++dem;
//            n /= i;
//        }
//        if(dem){
//            if(dem > 1) printf("%d^%d", i, dem);
//            else printf("%d", i);
//            if(n > i){
//                printf(" * ");
//            }
//        }
//    }    
//}





