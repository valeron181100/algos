#include <iostream>
#include <math.h> 

using namespace std;
int foo(int n, int k);
int k, n;
int times;
int main(){
    cin >> times;
    
    for (int i = 0; i < times; i++)
    {
        cin >> n >> k;
        cout << foo(n ,k) << endl;
    }
    
    system("pause");
    return 0;
}

int foo(int n, int k){
    int constQuontity = std::floor(n / k);
    int mod = n % k;
    int sum = 0;
    for(int  i = 0; i < k - mod; i++){
        n -= constQuontity;
        sum += n * constQuontity;
    }

    for(int  i = 0; i < mod; i++){
        n -= constQuontity + 1;
        sum += n * (constQuontity + 1);
    }
    return sum;
}