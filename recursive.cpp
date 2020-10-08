#include  <iostream>
using namespace std;

int fibonacci(int x){
    if((x == 1)||(x==0)){
        return(x);
    }
    else
    {
        return(fibonacci(x-1)+fibonacci(x-2));
    }
    
}

int main(){
    int x, i = 0;
    cout << "Informe um valor:";
    cin >> x;
    cout << "\nFibonacci: ";
    while (i < x)
    {
        cout << "" << fibonacci(i)<<",";
        i++;
    }
    return 0;
}