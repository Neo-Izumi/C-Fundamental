// Nguyen Doanh Thinh - HE161890
// Workshop1
// bt1:nhap n so bat ki in ra min max tbc va tbn cua chung
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i;
//	float tbc,tbn,t,sum=0,p=1,min=1e9,max=-1e9;
//	printf("n= ");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//		scanf("%f",&t);
//		sum=sum+t;
//		p=p*t;
//		if (t<min) {min=t;}
//		if (t>max) {max=t;}
//	}
//	tbc=sum/n;
//	tbn=pow(p,1.0/n);
//	printf("max is %f.\n",max);
//	printf("min is %f.\n",min);
//	printf("average is %f.\n",tbc);
//	printf("geometric average is %f.\n",tbn);
//}
//
//bt2:nhap vao a va b giai phuong trinh bac 1 voi cac he so a va b
//#include<stdio.h>
//int main()
//{
//	float a,b;
//	printf("equation ax+b=0 with:\n");
//	printf("a=");
//	scanf("%f",&a);
//	printf("b=");
//	scanf("%f",&b);
//	if (a==0 && b!=0) printf("this equation has no real root");
//  else if (a==0 && b==0)  printf("this equation has infinitely many real root");
//	else printf("this equation has one real root, x= %f",-b/a);
//}
//
//bt3:nhap a,b,c giai phuong trinh bac 2 voi cac he so a,b,c
//#include<stdio.h>
//#include<math.h>
//int main() 
//{
//	float a,b,c,d,sr;
//	printf("equation ax^2+bx+c with:\n");
//	printf("a= ");
//	scanf("%f",&a);
//	printf("b= ");
//	scanf("%f",&b);
//	printf("c= ");
//	scanf("%f",&c);
//	if (a==0) {
//		printf("this equation has only one real root, x= %f.",-c/b);
//	} else {
//		d=pow(b,2)-4*a*c;
//		sr=sqrt(d);
//		if (d<0) {
//			printf("this equation does not have any solution");
//		} else if (d==0) {
//			printf("this equation has a double root, x= %f.",-b/(2*a));
//		} else {
//			printf("this equation has two real root.\n");
//			printf("x1= %f.\n",(-b-sr)/(2*a));
//			printf("x2= %f.\n",(-b+sr)/(2*a));
//		}
//	}
//}
//
//bt4:nhap vao 3 so a,b,c xet dieu kien tao thanh tam giac va tinh chu vi dien tich tam giac tao duoc
//#include<stdio.h>
//#include<math.h>
//int main() 
//{
//	float a,b,c,t,p,s,x;
//	printf("a= ");
//	scanf("%f",&a);
//	printf("b= ");
//	scanf("%f",&b);
//	printf("c= ");
//	scanf("%f",&c);
//	if ((a+b)>c && (a+c)>b && (b+c)>a) {
//		printf("a,b,c are the three sides of a triangle with:\n");
//		t=a+b+c;
//		p=t/2;
//		x=p*(p-a)*(p-b)*(p-c);
//		s=sqrt(x);
//		printf("circumference: %f.\n",t);
//		printf("area: %f.\n",s);
//	} else {
//		printf("a,b,c are not the three sides of a triangle");
//	}
//}


