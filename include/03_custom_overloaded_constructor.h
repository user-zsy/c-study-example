#ifndef __03_CUSTOM_OVERLOADED_CONSTRUCTOR_H__
#define __03_CUSTOM_OVERLOADED_CONSTRUCTOR_H__

#include <iostream>
#include <string>
using namespace std;
//define human
class Human03
{
public:
    //overloaded constructor
    Human03(string name, int age, int salary);
    Human03();
    void eat();
    void sleep();
    void work();
    void play();
    string get_name();
    int  get_age();
    int  get_salary();
    private:
    string name="Unknown";
    int age;
    int salary;

};

#ifdef __cplusplus
extern "C"
{
#endif
    int test_03_custom_overloaded_constructor();
#ifdef __cplusplus
}
#endif

#endif