#include "01_use_of_classes.h"
#include "02_basic_use_of_objects.h"
#define TEST_01   0
#define TEST_02   1
int main()
{
   #if TEST_01==1
   test_01_use_of_classes();
   #endif

   #if TEST_02==1
   test_02_basic_use_of_objects();
   #endif
}