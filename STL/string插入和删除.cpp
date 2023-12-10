#include<iostream>
using namespace std;
#include<string>
#include<vector>

void test01()
{
    string str="hello";
    
    //插入
    str.insert(1,"qqq");
    cout<<"str="<<str<<endl;

    //删除
    str.erase(1,3);
    cout<<"str="<<str<<endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}