#include "03_custom_overloaded_constructor.h"
int test_03_custom_overloaded_constructor()
{
    Human03 h03;
    Human03 h03_1("小明", 18, 30000);
    h03_1.get_name();
    h03_1.get_age();
    h03_1.get_salary();

    h03.get_name();
    h03.get_age();
    h03.get_salary();
    
     return 0;
}
Human03::Human03(){ 
    name = "无名氏"; 
    age = 20; 
    salary = 20000;
}
 
Human03::Human03(string name, int age, int salary) {
    cout << "调用自定义的构造函数" << endl; 
    this->age = age;	//this 是一个特殊的指针，指向这个对象本身 
    this->salary = salary;
    this->name = name;
}
 
void Human03::eat() {
    cout << "吃炸鸡，喝啤酒！" << endl;
}
 
void Human03::sleep() { 
    cout << "我正在睡觉!" << endl;
}
 
void Human03::play() { 
    cout << "我在唱歌! " << endl;
}
 
void Human03::work() { 
    cout << "我在工作..." << endl;
}
    
string Human03::get_name() { 
    cout << "我的名字是：" << name << endl;
    return name;
}
 
int Human03::get_age() {
    cout << "我的年龄是：" << age << endl; 
    return age;
}
 
int Human03::get_salary() { 
    cout << "我的工资是：" << salary << endl;
    return salary;
}
