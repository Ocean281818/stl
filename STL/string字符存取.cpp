#include<iostream>
using namespace std;
#include<string>
#include<vector>

//string字符存取
void test01()
{
    string str1="hello";
    cout<<"str1="<<str1<<endl;

    //同中括号访问单个字符
    for(int i = 0;i<str1.size();i++)
    {
        cout<<str1[i]<<" ";
    }
    cout<<endl;

    //用at
    for(int i = 0;i<str1.size();i++)
    {
        cout<<str1.at(i)<<" ";
    }
    cout<<endl;

    //修改单个字符
    str1[0]='x';
    cout<<"str1="<<str1<<endl;
    //同理可以用str.at(0)修改
}

int main()
{
    test01();
    system("pause");
    return 0;
}