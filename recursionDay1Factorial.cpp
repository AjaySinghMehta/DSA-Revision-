#include <iostream>

using namespace std;

int recursive_factorial(int n)
{
    if (n == 0 || n == 1) return 1;
    return(n*recursive_factorial(n-1));
}

int iterative_factorial(int n)
{   
    int factorial = 1;
    for(int i=2;i<=n;++i){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int num ;
    cin>>num;
    cout<< "Factorial of "<<num<<" recursively is: "<<recursive_factorial(num)<<endl;
    cout<< "Factorial of "<<num<<" iteratively is: "<<iterative_factorial(num);
    return 0;
}


