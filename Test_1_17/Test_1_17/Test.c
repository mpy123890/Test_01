
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
//	printf("%zd\n", sizeof (bool)); //"bool" ���� "_Bool"
//	printf("%zd\n", sizeof (long int));
//	printf("%zd\n", sizeof (int));
//	printf("%zd\n", sizeof (int + 1)); //error, sizeof�����м���
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
//	printf("%d\n", c); //error, �ֲ�����δ�ڷ�Χ��
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
	printf("%d\n", 3 / 2); //=1, ֻ���������ĳ�������
	printf("%lf\n", 3.0 / 2); //=1.5, ��Ҫ�ڳ��ų�����������һ��Ϊ������(С��)
	int a = 9 % 5;
	printf("%d\n", a); //=......4, %����������������ֻ�ܼ�������


	return 0;

}




