#include<iostream>
using namespace std;
#include<string>
#include<vector>

//string查找和替换

//1.查找
void test01()
{
    string str1="abcdefgde";

    int pos=str1.find("dd");
    if(pos == -1)
    {
        cout<<"cant find it"<<endl;
    }
    else
    {
        cout<<"pos="<<pos<<endl;
    }

    //rfind
    pos = str1.rfind("de");
    cout<<"pos="<<pos<<endl;

    //rfind 和 find区别
    //rfind是从右往左
    //find是从左往右
    
}
//2.替换
void test02()
{
    string str1 = "abcdefg";
    str1.replace(1,3,"1111");
    //str1=a1111efg
    cout<<"str1="<<str1<<endl;
}


int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}