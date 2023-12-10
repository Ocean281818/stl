#include<iostream>
using namespace std;
#include<string>
#include<vector>


//string求字串
void test01()
{
    string str="hello world";
    string subStr=str.substr(1,3);
    cout<<"subStr="<<subStr<<endl;
}

//实用操作
void test02()
{
    string email = "yangchanghai2300305323@...";
    int pos = email.find("2");
    string username = email.substr(0,pos);
    cout<<"username="<<username<<endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}