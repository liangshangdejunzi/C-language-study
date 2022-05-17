# include <stdio.h>

int main (void)//注意这里的括号全部必须是英文，这里很容易出错。

{
    int i,j;

    printf("请输入两个值，中间以逗号隔开");

	scanf("%d,%d",&i,&j);//输入控制符之间不加逗号也可以，把上面这行去掉。

	printf("i = %d,j = %d\n",i,j);


    return 0;
}