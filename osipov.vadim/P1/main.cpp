#include <iostream> 
#include <vector>
#include <algorithm>
#include <cctype>
#include <stdexcept>
int funcia(std::vector <int> posledovatelnoct);

int main() {
 int cifri = 0;
 std::vector <int> posledovatelnoct;
 while (std::cin >> cifri){
  if (cifri == 0) 
  {
   break;
  }
  else {
   posledovatelnoct.push_back(cifri);
  }
  try { 
    funcia(posledovatelnoct);
  }
  catch (const std::invalid_argument) {
   std::cerr << "its not a number";
   return 1;
   }
}
  }

int funcia(std::vector<int> posledovatelnoct)
{
 int i = 0;
 int max_otvet = 0;
 int podrat = 0;
  std::vector <int> otvet;
  while (i < posledovatelnoct.size() - 1)
  {
   if (!isdigit(posledovatelnoct[i])) {
    throw std::invalid_argument("its not a number");
   }
   if (posledovatelnoct[i] <= posledovatelnoct[i + 1])
   {
    podrat++;
    otvet.push_back(podrat);
    i++;
   }
   else
   {
    podrat = 0;
    i++;
   }
  }
   max_otvet = @id8251725 (*std)::max_element(otvet.begin(), otvet.end());
 return (max_otvet);
}
