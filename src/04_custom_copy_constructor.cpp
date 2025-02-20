#include "04_custom_copy_constructor.h"


Human04::Human04() { 
    name = "无名氏"; 
    age = 18; 
    salary = 30000;
}
 
Human04::Human04(int age, int salary) {
    cout << "调用自定义的构造函数" << endl; 
    this->age = age;	//this 是一个特殊的指针，指向这个对象本身 
    this->salary = salary;
    name = "无名";
}
 
Human04::Human04(const Human04& man) { 
    cout << "调用自定义的拷贝构造函数" << endl;
    name = man.name; 
    age = man.age;
    salary = man.salary;
}
 
void Human04::eat() {
    cout << "吃炸鸡，喝啤酒！" << endl;
}
 
void Human04::sleep() { 
    cout << "我正在睡觉!" << endl;
}
 
void Human04::play() {
    cout << "我在唱歌! " << endl;
}
 
void Human04::work() { 
    cout << "我在工作..." << endl;
}
 
string Human04::getName() { 
    return name;
}
 
int Human04::getAge() { 
    return age;
}
 
int Human04::getSalary() { 
    return salary;
}
 
int test_04_custom_copy_constructor(void) {
    Human04	h1(25, 35000);	// 使用自定义的默认构造函数 
    Human04	h2(h1);	// 使用自定义的拷贝构造函数
 
    cout << "姓名：" << h2.getName() << endl; 
    cout << "年龄: " << h2.getAge() << endl; 
    cout << "薪资：" << h2.getSalary() << endl;
 
    system("pause"); 
    return 0;
}