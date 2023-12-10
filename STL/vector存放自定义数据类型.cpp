#include<iostream>
using namespace std;
#include<vector>
#include<string>

//vector容器存放自定义数据类型
class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

void test01()
{
    vector<Person>v;

    Person p1("zcc",10);
    Person p2("ych",20);
    Person p3("jwx",30);
    Person p4("hjj",40);
    Person p5("none",50);

    //向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //遍历容器数据
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<"name:"<<(*it).m_Name<<"  "<<"age:"<<(*it).m_Age<<endl;
    }
    cout<<"\n";
}



//存放自定义数据类型 指针
void test02()
{
    vector<Person*>v;

    Person p1("zcc",10);
    Person p2("ych",20);
    Person p3("jwx",30);
    Person p4("hjj",40);
    Person p5("none",50);

    //向容器中添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    //遍历容器
    for(vector<Person*>::iterator it = v.begin();it !=v.end();it++)
    {
        cout<<"NANE:"<<(*it)->m_Name<<"  "<<"AGE:"<<(*it)->m_Age<<endl;
    }
}

int main()
{
    test01();
    test02();

   system("pause");
    return 0;
}