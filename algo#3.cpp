#include <iostream>
#include <math.h> 
#include <vector>
#include <algorithm>

using namespace std;
int N;
vector<int> intenses;

int main(){
    
    cin >> N;
    int buff;
    for(int i = 0; i < N; i++){
        cin >> buff;
        intenses.push_back(buff);
    }
    vector<int> maxes;
    int res = 0;
    int j = 0;
    while(j < intenses.size()){
        int cur_val = intenses.at(j);
        if(res + cur_val >= 0){
            res += cur_val;
            maxes.push_back(res);
            j++;
        }
        else if(res + cur_val < 0){ 
            res = 0;
            j++;
        }
    }

    int max = 0;
    for (int i = 0; i < maxes.size(); i++)
    {   
        if(maxes.at(i) > max)
            max = maxes.at(i);
    }
    
    cout << endl << max << endl;
    
    system("pause");
    return 0;
}