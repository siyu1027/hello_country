# include "head.h"
# include <stdio.h>

int main()
{
	while (1)
	{
		printf("\n这是周思雨同学的习题集\n");
		printf("请输入想看的题目代号：\n");
		int show_number = 0;
		scanf("%d", &show_number);
		//int i = 99;
		//int array_i[100/*编译阶段就能确定下来的数值*/] = { 0xee };

		//for (int i = 0; i < 100; i++)
		//{
		//	array_i[i] = 0xee;
		//	printf("%d", array_i[2]);
		//}
		//int array_2d[100][2];
		//array_2d[40][0] = 1;
		//array_2d[39][1] = 2;

		//int* ptr = array_i;
		//for (int i = 0; i < 100; i++)
		//{
		//	ptr[i] = 0xffee;
		//}
		//int array_3d[3][3][3];
		//auto xx = &array_3d[0][0];

		//for (int i = 0; i < 100; i++)
		//{
		//	for (int j = 0; j < 2; j++)
		//	{
		//		array_2d[i][j] = 0xbaba;
		//	}
		//}
		//for (int i = 0; i < 100 * 2; i++)
		//{
		//	ptr[i] = 0xabab;
		//}
		//int valuex = 0;
		//ptr = &valuex;

		switch (show_number)
		{
		case 0 /*编译阶段就能确定下来的数值*/:
			show_interest_rate();
			break;
		case 1:
			show_accumulate_sum();
			break;
		case 2:
			show_even(100);
			break;
		case 3:
			show_ball_rebound(100, 10);
			break;
		case 4:
			multiplication_table(9, 9);
			break;
		case 5:
			show_function();
			break;
		case 6:
			show_grade();
			break;
		case 7:
			show_compare();
			break;
		case 8:

			show_exchange();
			break;
		case 9:
			ptr_3();
			break;
		case 10:
			shuixianhua();
			break;
		case 11:
			test_ieee754();
			break;
		case 12:
			main3();
			break;
		case 13:
			main4();
			break;
		case 14:
			main5();
			break;
		case 15:
			main6();
			break;
		case 16:
			main7();
			break;
		case 17:
			main8();
			break;
		case 18:
			main9();
			break;
		case 19:
			main10();
			break;
		case 20:
			show_function_sum();
			break;
		case 21:
			main11();
			break;
		case 22:
			main12();
			break;
		case 23:
			main13();
			break;
		case 24:
			main14();
			break;
		case 25:
			main15();
			break;
		/*case 26:
			main16();
			break;*/
		case 27:
			main17();
			break;
		case 28:
			main18();
			break;
		case 29:
			main19();
			break;
		case 30:
			main20();
			break;
		case 31:
			show_main9();
			break;
		case 32:
			main21();
			break;
		case 33:
			main22();
			break;
		case 34:
			main23();
			break;
		case 35:
			main24();
			break;
		case -1:
			return 0;
		case 100 / 2:
		{
			int x = 100;
			printf("case i");
		}
		default:
			printf("输入超出范围了\n");
		}
	}
	return 0;
}
