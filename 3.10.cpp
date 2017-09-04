//编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		string result;
		for(auto &c:s)
		{
			if(!ispunct(c))
				result+=c;
		}
		cout<<result<<endl;
	}
	return 0;
}