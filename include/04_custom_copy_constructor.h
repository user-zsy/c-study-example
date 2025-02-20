#ifndef __04_CUSTOM_COPY_CONSTRUCTOR_H__
#define __04_CUSTOM_COPY_CONSTRUCTOR_H__
#include <string>
#include <iostream>
using namespace std;
class Human04 {
 public:
    Human04();
    Human04(int age, int salary); 
    Human04(const Human04&);
 
    void eat(); 
    void sleep(); 
    void play(); 
    void work();
 
    string getName(); 
    int getAge(); 
    int getSalary();
private:
    string name = "Unknown"; 
    int age = 28;
    int salary;
};

#ifdef __cplusplus
extern "C"
{
#endif
    int test_04_custom_copy_constructor();
#ifdef __cplusplus
}
#endif


#endif