#include "Test.h"
#include <iostream>
#include <math.h>
using namespace std;


bool num_exists(vector<int> numbers, int begin, int end, int num)
{
   if (end >= begin)
   {
        int middle = begin + (end - begin)/2;
        if (numbers[middle] == num)  return true;
        if (numbers[middle] > num) return num_exists(numbers, begin, middle-1, num);
        return num_exists(numbers, middle+1, end, num);
   }
   return false;
}

bool numberExists(vector<int> ordered_numbers, int x)
{
  return num_exists(ordered_numbers, 0, ordered_numbers.size()-1, x);
}

int main ()
{
    test();
    return 0;
}
