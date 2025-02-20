#include "01_use_of_classes.h"
#include "02_basic_use_of_objects.h"
#include "03_custom_overloaded_constructor.h"
#include "04_custom_copy_constructor.h"
#define TEST_01   0
#define TEST_02   0
#define TEST_03   1
#define TEST_04   1
int main()
{
   #if TEST_01==1//学习类的使用
   test_01_use_of_classes();
   #endif

   #if TEST_02==1//学习对象的使用，对象是类的实例
   test_02_basic_use_of_objects();
   #endif

   #if TEST_03==1//构造函数的重载
   test_03_custom_overloaded_constructor();
   #endif

   #if TEST_04==1//自定义拷贝构造函数
   test_04_custom_copy_constructor();
   #endif

   //自定义拷贝构造函数
}