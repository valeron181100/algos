#include <iostream>
#include <math.h> 
#include <vector>
#include <algorithm>

using namespace std;
int q;
int res = 200000;

void rec(int n, int sum1, int sum2, vector<int> arr)
{
    if(n==q)
    {
        if(abs(sum1-sum2)<res)
            res=abs(sum1-sum2);
        return;
    }
    rec(n+1, sum1+arr.at(n), sum2, arr);
    rec(n+1, sum1, sum2+arr.at(n), arr);
}

int main(){
    
    cin >> q;
    vector<int> weights;
    int buff;

    for (int i = 0; i < q; i++){
        cin >> buff;
        weights.push_back(buff);
    }

    int first = 0;
    int second = 0;
    
    rec(0, first, second, weights);

    cout << res << endl;
    
    system("pause");
    return 0;
}