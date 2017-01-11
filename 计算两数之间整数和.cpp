#include<iostream>
//2017.1.11，初学c艹
//c++ primer(第五版）中文版,练习 1.11

int sum(int a, int b)
{
	//a，b之间的整数相加
	//std::cout << "sum, " << a << " and " << b << std::endl;
	int c = 0; a += 1;
	std::cout << "参与相加的数字有：";
	while (a < b)
	{
		std::cout << a << " ";
		c += a;
		++a;
	}
	std::cout << std::endl;
	return c;
}
int sums(int a, int b)
{
	//保证a小于b
	std::cout << "输入的数字是：" << a << " and " << b << std::endl;
	int c = 0;
	if (a == b)
	{
		std::cout << "error.";
	}
	if (a < b) c = sum(a, b);
	if (a > b) c = sum(b, a);
	return c;
}
int main()
{
	std::cout << "输入两个数字，求之间整数的和(在int的值域内)。" << std::endl
		<< "输入数字后按回车" <<std::endl 
		<< "第一个数字：";
	int m = 0, n = 0;
	std::cin >> m;
	std::cout << "第二个：";
	std::cin >> n;
	std::cout << "结果是：" << sums(m, n); std::cout << std::endl << std::endl;
	//用赋值方法让命令行窗口不瞬间消失
	std::cout << "输入任意数字结束,按回车结束。" << std::endl;
	std::cin >> n;
	return 0;
}