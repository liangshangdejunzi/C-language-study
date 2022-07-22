# include<stdio.h>

int main(void)
{
	int i;
	/*	switch(2)
	{
	case 2;
	printf("哈哈！\n");
	break;
	}
	*/
	for (i=0;i<3;++i)
	{
		if(3>2)
			break;//break是用于终止for，虽然它是if内部的语句
		printf("嘿嘿！\n");//永远不会输出
	}
	
    return 0;
}


