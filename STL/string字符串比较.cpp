#include<iostream>
using namespace std;
#include<string>
#include<vector>

void test01()
{
    string str1="hello";
    string str2="world";

    if(str1.compare(str2)==0)
    {
        cout<<"str1==str2"<<endl;
    }
    else if (str1.compare(str2)<0)
    {
        cout<<"str1<str2"<<endl;
    }
    else
    {
        cout<<"str1>str2"<<endl;
    }
    
}

int main()
{
    test01();
    system("pause");
    return 0;
}