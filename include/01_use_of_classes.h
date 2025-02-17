#include <iostream>
#include <string>
#ifndef __01_USE_OF_CLASSES_H__
#define __01_USE_OF_CLASSES_H__

using namespace std;
class Human{
    public:
    void eat();
    void sleep();
    void play();
    void work();

    string get_name();
    int  get_age();
    int  get_salary();
    private:
    string name;
    int age;
    int salary;
};

#ifdef __cplusplus
extern "C"{
#endif
int test_01_use_of_classes();
#ifdef __cplusplus
}
#endif
#endif