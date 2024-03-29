# include <stdio.h>
# include <math.h>
# include "head.h"

/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
Result find_number(int* nums, size_t size_, int target_);

Result show(int* nums, size_t size_, int target_) {
	bool is_ok = false;
	Result result = { -1,-1 };
	for (int i = 0; i < size_; ++i) {
		for (int j = 0; j < size_; ++j) {
			if (j != i && ((nums[j] + nums[i]) == target_)) {
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

/*/
计算利率
base_money_ : 本金
interest_rate_：每年的利率
years_：存多少年
*/
float interest_rate(float base_money_, float interest_rate_, int years_)
{
	for (int i = 1; i <= years_; i++)
	{
		base_money_ *= interest_rate_;
	}
	return base_money_;
}

// 演示计算利率
void show_interest_rate()
{
	printf("请输入数据 格式：本金 利率 存多少年\n");
	float base_money = .0f, interest_rate_value = .0f;
	int years = 0;
	scanf("%f %f %d", &base_money, &interest_rate_value, &years);
	float money = interest_rate(base_money, interest_rate_value, years);
	printf("您好，您在我们银行所存的%f元，经过%d年，已经变为%f元了\n", base_money, years, money);
}


int accumulate_sum(int n_)
{
	int sum;
	sum = (1 + n_) * n_ / 2;
	return sum;
}

void show_accumulate_sum()
{
	printf("现在进行累加和的计算功能示范，请输入一个数\n");
	int number = 0;
	scanf("%d", &number);
	number = accumulate_sum(number);
	printf("累加和的值为：%d", number);
}

//	for (int i=0;i<100;i++)
//	{
//		if(i&0x1)
//		{
//		}
//		printf("%d\n",i);
//	}

// 给一个数n [0,n]内, 遇到偶数就输出
void show_even(int n_)
{
	for (int i = 0; i < n_; i++)
	{
		if (i & 0x1)
		{
			continue;
		}
		printf("%d\n", i);
	}
}

/*
一个球从n米的高度自由落下，每次落地后反跳回原高度的一般，再落下，再反弹。
求它在第m次落地时,共经过多少米,第m次反弹有多高?
n_为初始掉落高度
m_为目标落地次数
*/
void show_ball_rebound(int n_, int m_)
{
	float sum = n_;
	float h = n_;
	for (int i = 2; i <= m_; i++)
	{
		sum = sum + h;
		h /= 2;
	}
	printf("第%d次落地时，球一共经过%f米\n随后反弹高度为:%f\n",
		n_, sum, h);
}

////输出九九乘法口诀表
int multiplication_table(int l_, int n_)
{
	for (l_ = 1; l_ <= 9; l_++)
	{
		for (n_ = 1; n_ <= l_; n_++)
			printf("%d*%d=%d ", n_, l_, n_ * l_);
		printf("\n");
	}
	return 0;
}

////计算1!+ 2!+ !+ … + n!的值
int function(int i_, int n_)
{
	int m_ = 1; int sum_ = 0;
	for (i_ = 1; i_ <= n_; i_++)
	{
		m_ *= i_;
		sum_ += m_;
	}
	return 0;
}

////演示计算1!+ 2!+ !+ … + n!的值
void show_function()
{
	printf("现在进行1!+ 2!+ !+…+n!的计算，请输入一个n的值\n");
	int sum = 0;
	scanf("%d", &sum);
	printf("1!+ 2!+ !+…+n!的值为：%d", sum);
}


////根据分数查等级
int grade(int score_)
{
	if (!(score_ >= 0 && score_ <= 100))
	{
		printf("输入错误\n");
	}
	else
	{
		printf("等级为:");

		if (score_ >= 90)
			printf("A");
		else if (score_ >= 80 && score_ < 90)
			printf("B");
		else if (score_ >= 70 && score_ < 80)
			printf("C");
		else if (score_ >= 60 && score_ < 70)
			printf("D");
		else
			printf("E");
	}
	return 0;
}

void show_grade()
{
	printf("请输入成绩：");
	int score;
	scanf("%d", &score);
	grade(score);
}

////比较四个数的大小
int compare(int a_, int b_, int c_, int d_)
{
	int temp;
	if (a_ > b_)
	{
		temp = a_;
		a_ = b_;
		b_ = temp;
	}
	if (a_ > c_)
	{
		temp = a_;
		a_ = c_;
		c_ = temp;
	}
	if (a_ > d_)
	{
		temp = a_;
		a_ = d_;
		d_ = temp;
	}

	if (b_ > c_)
	{
		temp = b_;
		b_ = c_;
		c_ = temp;
	}

	if (b_ > d_)
	{
		temp = b_;
		b_ = d_;
		d_ = temp;
	}

	if (c_ > d_)
	{
		temp = c_;
		c_ = d_;
		d_ = temp;
	}
	return 0;
}

////演示比较四个数的大小
void show_compare()
{
	printf("请输入四个数，格式：%%d %%d %%d %%d，让我给你排顺序，从小到大输出：");
	int a = 0; int b = 0; int c = 0; int d = 0; int temp = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d %d %d %d\n", a, b, c, d);
}



int show_exchange()
{
	int x, y;
	printf("please input tow numbers:%%d %%d\n");
	scanf("%d %d", &x, &y);
	printf("first x=%d and y=%d\n", x, y);
	exchange(&x, &y);
	printf("now x=%d and y=%d\n", x, y);
	return 0;
}

void exchange(int* u, int* v)
// C当中不允许有同名的函数 C++中允许有同名但不同参数的函数
// 并且C++会根据参数类型的不同来判断你想调用的是哪个函数
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}

// 盗梦空间
/*
建立 1层指针ptr1 指向int value
建立 2层指针ptr2 指向ptr1
建立 3层指针ptr3 指向ptr2
通过ptr3 修改value的值
*/
int ptr_3()
{
	int* ptr1;
	int** ptr2;
	int*** ptr3;

	int number = 10;
	ptr1 = &number;
	ptr2 = &ptr1;
	ptr3 = &ptr2;

	***ptr3 = 10086;
	ptr1 = &number;

	printf("number: %d", number);
	return 0;

}

// 水仙花数
void shuixianhua()
{
	for (int number = 100; number <= 999; number++)
	{
		int A, B, C;
		A = (number / 100);
		B = (number - A * 100) / 10;
		C = number - A * 100 - B * 10;
		if ( (A*A*A+B*B*B+C*C*C) == number)
		{
			printf("发现一个水仙花数 %d\n",number);
		}
	}
}

// 调试理解浮点数
void test_ieee754()
{
	double i;
	double j = 10;
	for (i = 0; 
		i != 10; 
		i += 0.1)
	{
		printf("%.1f\n", i);
	}
}

void ptr_001(int(*i_array_ptr_)[100])
{

}

using MyInt = int;
//typedef  int Int_array [100];
using Int_array_100 = int[100];
using Functions_ptr = void (*)(Int_array_100*);

// 花样指针
void super_ptr()
{
	MyInt  iii;
	int i;
	int* ptr = &i;

	int i_array[100] = {};
	int (*i_array_ptr) [100] = &i_array;
	Int_array_100* i_array_tr2 = &i_array;

	int* i_ptr_array[100] = {};

	ptr_001(i_array_ptr);

	void (*super_ptr_real_ptr)();
	super_ptr_real_ptr = super_ptr;

	super_ptr();

	Functions_ptr ptr_001_ptr;
	Functions_ptr ptr_002_ptr;

	ptr_001_ptr = ptr_001;
	ptr_001_ptr(i_array_ptr);



}
//
//int (*func)(int* p);
//using func = int(*)(int* p);

using Func_ptr_1 = int(*)(int*);

// int (*func)(int* p, int (*f)(int*));
using Func_ptr_2 = int(*)(int*, Func_ptr_1);

//int (*func[5])(int* p);
using Func_ptr_array5 = Func_ptr_1[5];

//int (*(*func)[5])(int* p);
using Fucn_ptr_array5_ptr = Func_ptr_array5*;

//int(*(*func)(int* p))[5];
using xxx = int(*(*)(int* ))[5];
using Int_array5 = int(*)[5];
using Func_ptr_3 = Int_array5 (int*);

//int(*(*func)[5][6])[7][8];
using Int_7_8_ptr = int(*)[7][8];
using type0 = Int_7_8_ptr(*)[5][6];

//int (*(*(*func)(int*))[5])(int*);
using Func_ptr_4 = Func_ptr_array5* (*)(int*);

//int(*(*func[7][8][9])(int*))[5];
using Func_ptr_5 = Int_array5 * (*)(int*);
using Func_ptr_array_7_8_9 = Func_ptr_5[7][8][9];

// 阅读这个代码 思考一下
int main3()
{
	int a[4] = { 1,2,3,4 };
	// 这段代码说明了为什么师父教你一定要用&a[0]的形式取数组首地址 
	// 而不是单纯写一个数组名
	auto test = &a;

	int* ptr1 = (int*)(&a+1);
	int* ptr2 = (int*)((int)a+1);

	printf("%x,%x",ptr1[-1],*ptr2);
	return 0;
}

//编写一个程序，输出Hello World!
int main4()
{
	printf("Hello World!\n");
	return 0;
}

//输出相应图形
int main5()
{
	printf("*****\n");
	printf("  *****\n");
	printf("    *****\n");
	printf("      *****\n");
	return 0;
}

//运行时输入a,b,c三个值，输出其中值最大者
int main6()
{
	int a, b, c, d;
	printf("请输入a,b,c这三个数:");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			d = a;
		else
			d = c;
	}
	else
	{
		if (b > c)
			d = b;
		else
			d = c;
	}
	printf("最大值为%d\n", d);
	return 0;
}

//判断一个数n能否同时被3和5整除
int main7()
{
	int n;
	printf("请输入一个数n:");
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0)
		printf("能\n");
	else
		printf("不能\n");
	return 0;
}

//将100--200之间的素数输出
int main8()
{
	int number = 0;
	for (number = 100; number <= 200; number++)
	{
		int flag = 0;
		for (int anyone = 2; anyone < number; anyone++) 
		{
			if (number % anyone == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d \n", number);
		}
	}
	return 0;
}

//求两个数m和n的最大公约数
int main9()
{
	printf("请输入两个数\n");
	int m, n;
	scanf("%d %d", &m, &n);
	int k = m;
	if(k > n)
	   k = n;
	for (int j = k; j >= 1; j--)
	{
		if (m % j == 0 && n % j == 0)
		{
			printf("最大公约数:%d\n", j);
			break;
		}
	}
	return 0;
}

void show_main9()
{
	printf("辗转相除法 请输入两个数 %%d %%d:\n");
	int numbers[] = { 0,0 };
	scanf("%d %d", &numbers[0], &numbers[1]);
	int flag;

	if (numbers[0] == 0 || numbers[1] == 0)
	{
		printf("输入不合法\n");
		return;
	}

	for (flag = 0;
		numbers[~flag & 1] != 0 &&
		(numbers[flag & 1] %= numbers[~flag & 1]) != 0;
		flag++)
	{ }

	printf("%d", numbers[(~flag) & 1]);
}

//输入10个数，输出其中最大的一个数
int main10()
{
	int number[10], z, max;
	for (z = 0; z < 10; z++)
		scanf("%d", &number[z]);
	for (z = 1, max = number[0]; z < 10; z++)
		max = number[z] > max ? number[z] : max;
	printf("max=%d\n", max);
	return 0;
}

//void swap_array(int* ptr_[1)(int* size_)

// 递归
int function_sum( int number_ )
{
	int result = 0;
	if (number_ == 1)
		return 1;
	else
		result = function_sum(number_ - 1);
	number_ += result;
	return number_;
}

// 函数 数组 指针 串讲
/*
定义一个函数 swap_array 传入一个int* ptr_
一个int size_
和
一个长度为100的数组的指针

ptr_可以用来指向传入的int数组首地址
size_用来描述ptr_所指向空间的int元素个数

在函数内完成它们数据的交换 注意 大小可能不一样
以长度更小的为准
*/
//int swap_array(int* ptr_, int size_, int array_[100])
//{
//	return 0;
//}
//int swap_array_ptr(int* ptr_, int size_, int (*array_)[100])
//{
//	int temp = 0;
//	for (int i = 0, int count = size_ > 100 ? size_ : 100; i<count; i++)
//	{
//		temp = ptr_[i];
//		ptr_[i] = (*array_)[i];
//		(*array_)[i] = ptr_[i];
//	}
//	return 0;
//}



void show_function_sum()
{
	int number = 0;
	printf("表演一下递归调用求0~n累加和，请输入一个数n\n");
	scanf("%d",&number);
	auto result = function_sum(number);
	printf("累加结果为：%d",result);
}

//输出1900--2000年中是闰年的年份
int main11()
{
	int year;
	for (year = 1900; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
		{
			printf("%d\n", year);
		}
	}
	return 0;
}

//分析程序
int main12()
{
	char  c1,c2;
	c1 = 97;
	c2 = 98;
	printf("c1=%c,c2=%c\n", c1, c2);
	printf("c1=%d,c2=%d\n", c1, c2);
	return 0;
}

//求解ax²+bx+c=0方程的解
int main13()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%1f%1f%1f", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (disc < 0)
		printf("无实数根\n");
	else
	{
		p = -b / (2.0* a);
		q = sqrt(disc) / (2.0 * a);
		x1 = p + q;
		x2 = p - q;
		printf("实数根为:\nx1=%7.2f\nx2=%7.2f\n", x1, x2);
	}
	return 0;

}

//从键盘输入一个大写字母N，程序输出大写字母N和小写字母n
int main14()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	return 0;
}

//输入四个整数，要求按由小到大的顺序输出
int main15()
{
	int a, b, c, d, t;
	printf("请输入四个数:\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (a > d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b > d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c > d);
	{
		t = c;
		c = d;
		d = t;
	}
	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}

//给一个不多于5位的正整数，要求:
//1.求出它是几位数;
//2.分别输出每一位数字
//3.按逆序输出各位数字
int main16()
{
	int a,b,c,d,e,x;
	printf("请输入一个不多于5位数的正整数:\n");
	a = x / 10000;
	b = x % 100;

	return 0;
}

//输出下面图案
int main17()
{
	printf("     *     \n");
	printf("    ***    \n");
	printf("   *****   \n");
	printf("  *******  \n");
	printf("   *****   \n");
	printf("    ***    \n");
	printf("     *     \n");
	return 0;
}

//输入两个正整数m和n,求其最小公倍数
int main18()
{
	int m, n, t;
	printf("请输入两个正整数\n");
	scanf("%d%d", &m, &n);
	for (t = 1; t++;)
		if (m * t % n == 0)
		{
			break;
	    }
	printf("最小公倍数:%d\n", m * t);
	return 0;

}

//找出1000之内的所有完数
int main19()
{
	int sum,a,b;
	for (a = 0; a <= 1000; a++)
	{
		sum = 0;
		for (b = 1; b < a; b++)
		{
			if (a % b == 0)
				sum = sum + b;
		}
	}
	printf("\n",sum);
	return 0;
}

int main20()
{
	double i;
	for (i = 0; i != 10; i += 0.1)
		printf("%.1f\n", i);
	return 0;
}

//对10个数组元素依次赋值为0，1，2，3，4，5，6，7，8，9，要求按逆序输出
int main21()
{
	int i, a[10];
	for (i = 0; i <= 9; i++)
		a[i] = i;
	for (i = 9; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}

//输入以下4×5的矩阵
int main22()
{
	int i, j, n = 0;
	for (i = 1; i <= 4; i++)
		for (j = 1; j <= 5; j++, n++)
		{
			if (n % 5 == 0)
				printf("\n");
			printf("%d\t", i * j);
		}
	printf("\n");
	return 0;
}

//求圆柱体的表面积
int main23()
{
	float r, h, s;
	printf("请输入圆柱体的半径和高:\n");
	scanf("%f%f", &r, &h);
	s = 2 * 3.1415926 * r * r + 2 * 3.1415926 * r * h;
	printf("这个圆柱体的表面积是：%f\n", s);
	return 0;
}
   
//鸡兔同笼
int main24()
{
	int a, b, n, m;
	scanf("%d %d", &n, &m);
	a = (4 * n - m) / 2;
	b = n - a;
	if (m % 2 == 1 || a <= 0 || b < 0)
		printf("no anwer\n");
	else
		printf("%d %d\n", a, b);
	return 0;
}

