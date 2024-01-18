
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
//	printf("%zd\n", sizeof (bool)); //"bool" 代表 "_Bool"
//	printf("%zd\n", sizeof (long int));
//	printf("%zd\n", sizeof (int));
//	printf("%zd\n", sizeof (int + 1)); //error, sizeof不进行计算
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
//	printf("%d\n", c); //error, 局部变量未在范围内
//
//	return 0;
//
//}

//int main()
//{
//
//	printf("%d\n", 1 + 3);
//	printf("%d\n", 5 - 4);
//	printf("%d\n", 2 * 5);
//	printf("%d\n", 10 / 5);
//	printf("%d\n", 3 / 2); //=1, 只进行整数的除法计算
//	printf("%lf\n", 3.0 / 2); //=1.5, 需要在除号除号两边至少一边为浮点数(小数)
//	int a = 9 % 5;
//	printf("%d\n", a); //=......4, %代表除法后的余数，只能计算整数
//
//	
//	return 0;
//
//}

//int main()
//{
//    int a = 15;
//    int b = 2;
//    int c = a / b;
//    printf("%d\n", c);
//    int d = a % b;
//    printf("%d\n", d);
//
//        return 0;
//}


//int main()
//{
//    int a = 15;
//    float b = 2.0;
//    float c = a / b;
//    printf("%f\n", c);
//    int d = a % b;
//    printf("%d\n", d);
//
//    return 0;
//}


int main()
{
	int a = 5;
	float b = 2.0;
	printf("%f\n", a / b);

	return 0;


}






