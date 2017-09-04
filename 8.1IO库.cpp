//编写函数，接受一个istream&参数，返回值类型也是istream&。此函数须从给定流中读取数据，直至遇到文件结束标志时停止。它将读取的数据打印在标准输出上。完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态。
#include<iostream>
#include<string>
using namespace std;

istream &is_input(istream &in)
{
	auto old_state = in.rdstate();//记住流的当前状态。
	string s;
	while (in >> s)//遇到EOF时停止
	{
		cout << s << " ";//标准输出
	}
	in.setstate(old_state);//恢复流为原有状态
	return in;
}

int main()
{
	is_input(cin);
	return 0;
}
