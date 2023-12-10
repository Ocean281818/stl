#include<iostream>
using namespace std;
#include<string>
#include<vector>

//string字符串拼接操作
void test01()
{
    string str1="I";
    
    str1+=" like playing games";
    cout<<"str1="<<str1<<endl;
    
    str1+=':';
    cout<<"str1="<<str1<<endl;

    string str2="LOL and CS2";
    str1+=str2;
    cout<<"str1="<<str1<<endl;

    string str3="I";
    str3.append(" like playing ");
    cout<<"str3="<<str3<<endl;

    str3.append("gam es;ab cada",4);//拼接前4个
    cout<<"str3="<<str3<<endl;

    str3.append(str2);
    cout<<"str3="<<str3<<endl;

    str3.append(str2,0,3);//截取部分
    cout<<"str3="<<str3<<endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}