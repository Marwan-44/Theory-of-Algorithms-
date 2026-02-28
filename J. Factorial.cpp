#include <iostream>
using namespace std;

long long factorial (int x){
    if (x <=1)
    {
        return 1;
    }
   
    return x * factorial(x - 1);
    
}

int main() {
   
   int x;
   cin>>x;
   cout<<factorial(x);
   
    return 0;
}