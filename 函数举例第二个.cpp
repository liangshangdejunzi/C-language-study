# include <stdio.h>

int f(void) //括号中的void表示该函数不能接受数据  ，int表示函数返回值是int类型的数据
{
	return 10;//向主调函数返回10
}

int main(void)//main是主调函数，main之前的函数是被调函数，是程序员自己定义的一个函数。
{
	int j=88;

	j=f();
	printf("%d\n",j);

	return 0;
}