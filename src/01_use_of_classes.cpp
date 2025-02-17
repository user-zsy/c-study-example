#include "01_use_of_classes.h"

void Human::eat() {
    cout << "吃炸鸡，喝啤酒！" << endl;
}
 
void Human::sleep() {
    cout << "我正在睡觉!" << endl;
}
    
void Human::play() {
    cout << "我在唱歌! " << endl;
}
 
void Human::work() { 
    cout << "我在工作..." << endl;
}
 
string Human::get_name() { 
    return name;
}
 
int Human::get_age() { 
    return age;
}
 
int Human::get_salary() { 
    return salary;
}

int test_01_use_of_classes()
{
    Human niuma;
    niuma.work();
    niuma.sleep();
}
