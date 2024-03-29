# include <stdio.h>

/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
struct Result {
	int num1;
	int num2;
};
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

// 计算利率
float interest_rate(float base_money_, float interest_rate_, int years_)
{
	for (int i = 1; i <= 5; i++)
	{
		base_money_ *= interest_rate_;
	}
	return base_money_;
}

int show_interest_rate()
{
	printf("请输入数据 格式：本金 利率 存多少年");
	float base_money = .0f, interest_rate = .0f;
	int years = 0;
	scanf("%f %f %d");
	float money = interest_rate(base_money, interest_rate, years);
	printf("您好，您在我们银行所存的%f元，经过%d年，已经变为%f元了\n");
	
	interest_rate();
}

int main()
{
	show_interest_rate();
	system("pause");
	return 0;
}