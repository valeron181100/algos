#include <iostream>
#include <math.h> 
#include <vector>
#include <algorithm>

using namespace std;
int q;

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
    std::sort(weights.begin(), weights.end());

    std::reverse(weights.begin(), weights.end());

    vector<int> first_heap; vector<int> second_heap;

    while(weights.size() != 0){
        int max = weights.front();
        weights.erase(weights.begin());
        int sum_max = 0;
        while(weights.size() != 0 && sum_max < max){
            if(sum_max + weights.front() > max) break;
            sum_max += weights.front();
            weights.erase(weights.begin());
        }
        first += max;
        first_heap.push_back(max);
        second += sum_max;
        second_heap.push_back(sum_max);
    }
    cout << first - second << endl;
    
    system("pause");
    return 0;
}