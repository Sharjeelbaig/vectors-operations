#include<iostream>
#include<vector>
using namespace std;

int main(){
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    cout << numbers[0]<<'\n';
    cout << numbers[1]<<'\n';
    cout << numbers[2]<<'\n';
    return 0;
}