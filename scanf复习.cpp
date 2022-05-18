# include <stdio.h>
int main (void)
{
    int i;

	scanf("%d",&i);//必须要有输入控制符，把从键盘输入的字符转化为十进制，然后赋给i
	printf("i = %d\n",i);//因为输出的是i的内容，所以不加取地址符&

    return 0;
}