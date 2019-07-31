# include <iostream>
# include <stdio.h>
# include "head.h"
/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
//struct Result {
//	int num1;
//	int num2;
//};
Result find_number(int* nums, size_t size_, int target_) {
	bool is_ok = false;
	Result result = {-1,-1};
	for (int i = 0; i < size_; ++i) {
		for (int j = 0; j < size_; ++j) {
			if ( j!=i && ( (nums[j] + nums[i]) == target_) ) {
				result.num1 = i;
				result.num2 = j;
				is_ok = true;
				break;
			}
		}
		if (is_ok) {
			break;
		}
	}
	return result;
}

/*
给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
示例：
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/

int int_value = 0xeeeee;


void function_1() {
	int n = 0;
	printf("计算1!+2!+3!+ ... +n! 请输入n, n>0:_");
	scanf("%d", &n);
	int sum = 1;
	for (int i = 2; i <= n; ++i)
	{
		int factorial = 1;
		for (int j = 2; j <= i; ++j)
		{
			factorial *= j;
		}
		sum += factorial;
	}
	printf("%d\n", sum);
//更好的方法:
	sum = 1;
	int current_last_number = 1;
	for (int i = 2; i <= n; ++i)
	{
		current_last_number *= i;
		sum += current_last_number;
	}
	printf("%d\n", sum);
	return ;
}

int add(int a_,int b_)
{
	return a_ + b_;
}

int asdf(int g_) 
{
	int factorial = 1;
	for (int j = 2; j <= g_; ++j)
	{
		factorial *= j;
	}
	return factorial;
}

int swap(int i_, int j_)
{
	printf("%d %d", j_, i_);
	return 0;
}

int main___() 
{
	swap(111, 222);

	int re = 0;
	scanf("%d",&re);
	re = asdf(re);
	printf("%d", re );

	

	system("pause");
	printf("");

	//int b = 0;
	////scanf("%d",&b);
	//int a = 0;
	//while (a <= b)
	//{
	//	printf("%d\n", a);
	//	a += 2;
	//}
	/*
	
	for(i =5 ;i>0;i-=1)
	{
		for( j = 0; j<= yyy; j+=1)
		{

		}

	}

	*****
	****
	***
	**
	*
	
	*
	**
	***
	****
	*****


//	int i = 100;
//
//	int aaaA, aaaa;
//
//  




	//float a = 3.14;
	//double db = 3.14;

	//a = a - (int)a;

	//short s= -1;
	//unsigned short s2 = 1;
	//
	//s2 = s;


	//long l= 0xeeeeeeeeeeee;
	//long long ll= 0xeeeeeeeeeeeeeeee;



	//double d = 3.14;
	//printf("%lf",d);
//
//int l, n;
//for (l = 1; l<= 9; l++)
//{
//	for (n = 1; n <= l; n++)
//	printf("%d*%d=%d ",n,l,n*l);
//	printf("\n");
//}

    /*  
     int i, n, m = 1, sum = 0;
      printf("please input n:");
	  scanf("%d", &n);
	  for (i = 1; i <= n; i++)
	  {
		  m *= i;
		  sum += m;
	  } printf("1! +2!+ !+ . + != % d\n", sum);*/

     int i, n, m = 2, sum = 0;
     printf("please input n:");
     scanf("%d", &n);
	 //for (i = 1;i<=n; i++)
	 //{
		// int nn = 2;
		// sum |= 0x1 << i;
		// sum += m;
	 //}
	 int result = (0x1<<(n+1))-1;
	 result &= ~1;
     printf("%d\n", result);


	 show(&i, 100, 3);







	system("pause");
	return 0;
	
}

//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//
//	printf("请输入四个数，格式：%%d %%d %%d %%d，让我给你排顺序，从小到大输出：");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//
//	int temp = 0;
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (a > d)
//	{
//		temp = a;
//		a = d;
//		d = temp;
//	}
//
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	if (b > d)
//	{
//		temp = b;
//		b = d;
//		d = temp;
//	}
//
//	if (c > d)
//	{
//		temp = c;
//		c = d;
//		d = temp;
//	}
//
//
//	printf("%d %d %d %d\n", a, b, c, d);
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	//int pass_word = 0;
//	//printf("请输入密码：");
//	////scanf("%d",&pass_word);
//	//printf("\n");
//
//	//if (pass_word == 20123123)
//	//	printf("");
//	//printf("");
//
//	//if (pass_word == 20031027) 
//	//{
//	//	printf("没有悄悄话\n");
//	//	printf("");
//	//	printf("");
//	//	printf("");
//	//	printf("");
//	//}
//
//	//if (pass_word == 1298)
//	//	printf("");
//	//else 
//	//{
//	//	printf("密码输入错误哟~");
//	//}
//
//
//	//if (pass_word == 123)
//	//{
//	//	printf("");
//	//}
//	//else if (pass_word == 100)
//	//{
//	//	printf("pass_word == 100");
//	//}
//	//else if (pass_word == 1000)
//	//{
//
//	//}
//
//	//int number = 1111;
//	//if ( number > 5 ) 
//	//{
//	//	if (number < 7) {
//	//		printf("yes");
//	//	}
//	//}
//
//	/*
//
//	*/
//    
//	/*
//	int score;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	 
//	if ( !(score >= 0 && score <= 100) )
//	{
//		printf("输入错误\n");
//	}
//	else {
//		printf("等级为:");
//
//		if (score >= 90)
//			printf("A");
//		else if (score >= 80 && score < 90)
//			printf("B");
//		else if (score >= 70 && score < 80)
//			printf("C");
//		else if (score >= 60 && score < 70)
//			printf("D");
//		else
//			printf("E");
//	}
//
//	//*/
//
//	//int a, b, c, d;
//	//printf("输入格式为：%%d,%%d,%%d,%%d\n"); // 这种%%是表示输出一个% 而不会将它当做%d进行处理
//	//scanf("%d,%d,%d,%d", &a, &b, &c, &d);
//	//printf("a:%d,b:%d,c:%d,d:%d\n", a, b, c, d);
//	////{
//	////关于花括号的使用， 一般没有什么特别想把它括起来的原因，是不适用的。
//	////}
//
//	//// scanf 这个东西的使用是这样的:
//	//printf("输入格式为：%%d %%d %%d %%d\n");
//	//scanf("%d %d %d %d", &a, &b, &c, &d); //一个%d表示一个即将输入的整数 一个%f表示一个即将输入的浮点数 1232   32131231 412312 312
//	//printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
//	////除了这个%d这样的东西 其他的就是输入时要符合的格式
//	//printf("输入格式为：%%d_%%d,%%dasdf%%d\n");
//	//scanf("%d_%d,%dasdf%d", &a, &b, &c, &d);//这里只有在你这样输入才是有效的: 123_321,12344324asdf12321
//	//printf("a:%d,b:%d,c:%d,d:%d\n", a, b, c, d);
//	////如果是空格, 那么意思就是若干个空格 所以"%d %d %d %d" 可以是这样的输入 123123 1231231   123       213211
//	////这种叫做格式化输入 printf 叫做格式化输出 你现在试验一下
//	//printf("输入格式为：%%d %%d %%dasdf %%d\n");
//	//scanf("%d %d %dasdf %d", &a,&b,&c,&d);
//	//printf("a:%d,b:%d,c:%d,d:%d\n", a, b, c, d);
//
//
//	
//
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}
//










  









