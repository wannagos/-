#include<iostream>
//2017.1.11����ѧcܳ
//c++ primer(����棩���İ�,��ϰ 1.11

int sum(int a, int b)
{
	//a��b֮����������
	//std::cout << "sum, " << a << " and " << b << std::endl;
	int c = 0; a += 1;
	std::cout << "������ӵ������У�";
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
	//��֤aС��b
	std::cout << "����������ǣ�" << a << " and " << b << std::endl;
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
	std::cout << "�����������֣���֮�������ĺ�(��int��ֵ����)��" << std::endl
		<< "�������ֺ󰴻س�" <<std::endl 
		<< "��һ�����֣�";
	int m = 0, n = 0;
	std::cin >> m;
	std::cout << "�ڶ�����";
	std::cin >> n;
	std::cout << "����ǣ�" << sums(m, n); std::cout << std::endl << std::endl;
	//�ø�ֵ�����������д��ڲ�˲����ʧ
	std::cout << "�����������ֽ���,���س�������" << std::endl;
	std::cin >> n;
	return 0;
}