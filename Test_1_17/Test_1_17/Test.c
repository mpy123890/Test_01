
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("Cats\n");
//
//	return 0;
//
//}

#include <stdbool.h>
#include <stdio.h>

//int main()
//{
//	printf("%zd\n", sizeof (bool)); //"bool" 表示 "_Bool"
//	printf("%zd\n", sizeof (long int));
//	printf("%zd\n", sizeof (int));
//	printf("%zd\n", sizeof (int + 1)); //error, sizeof的表?式不?行?算
//
//		return 0;
//
//}

//int a = 100;
//int main()
//{
//	int b = 10;
//	{
//		int c = 1;
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//	}
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", b + 1); 
//	printf("%d\n", c); //error, 局部?量未在范?内
//
//	return 0;
//
//}

int main()
{

	printf("%d\n", 1 + 3);
	printf("%d\n", 5 - 4);
	printf("%d\n", 2 * 5);
	printf("%d\n", 10 / 5);
	printf("%d\n", 3 / 2); //=1, 除号的?端如果是整数，?行整数除法
	printf("%lf\n", 3.0 / 2); //=1.5, 如果要?算小数?果，除号?端需要至少有一个浮点数(小数)
	int a = 9 % 5;
	printf("%d\n", a); //=......4, %只能?用于整数，求除法后的余数


	return 0;

}




