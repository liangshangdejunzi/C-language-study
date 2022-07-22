//目的是分别比较a和b哪个大，c和d哪个大，e和f哪个大。
# include <stdio.h>

void max(int i,int j)
{
	if (i>j)
		printf("%d\n",i);
	else 
		printf("%d\n",j);

}

int main(void)

{
	int a,b,c,d,e,f;

	a=1,b=2,c=3,d=9,e=-5,f=100;//逗号表达式先执行第一个，整体的值是最后一个。（用分号屏幕写不下）
	max(a,b);//a的值发送给i，b的值发送给j。以下类推。必须要先定义好一个对应的函数max。
	max(c,d);
	max(e,f);
/*
	if (a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
	if (c>d)
		printf("%d\n",c);
	else
		printf("%d\n",d);
	if (e>f)
		printf("%d\n",e);
	else
		printf("%d\n",f);
	
*/
	return 0;
}