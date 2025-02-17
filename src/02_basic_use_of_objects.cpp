#include "01_use_of_classes.h"
#include "02_basic_use_of_objects.h"
/*
什么是对象？对象，是一个特定“类”的具体实例。

对象和普通变量有什么区别？一般地，一个对象，就是一个特殊的变量，但是有跟丰富的功能和用法。
*/
int test_02_basic_use_of_objects()
{
    Human h1;
    Human *p;
    p = &h1;
    p->eat();
    p->play();
    p->sleep();
    return 0;

}