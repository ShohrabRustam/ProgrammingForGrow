#include<iostream>
using namespace std; 
namespace namespace1{
int num=6;
}
namespace namespace2{
    int num =6;
}
int main(){
 std::cout << "namespace number is " << namespace1::num <<std::endl;
  std::cout << "namespace1 number is " << namespace2::num <<std::endl;
return 0;
}