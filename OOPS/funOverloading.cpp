#include <iostream>    
using namespace std;    
class Calculartor {    
    public:    
static int add(int a,int b){      
        return a + b;      
    }      
static int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) {    
    Calculartor object ;                                                    //     class object declaration.   
    cout<<object.add(10, 20)<<endl;      
    cout<<object.add(12, 20, 23);     
   return 0;    
}    
