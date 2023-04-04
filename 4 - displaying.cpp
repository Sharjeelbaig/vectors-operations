#include<iostream>
#include<vector>
using namespace std;

void displayVector(std::vector<int>numbers){
for (int i = 0; i < numbers.size(); i++)
{
    cout << "At Index "<< i <<": "<<numbers[i] << '\n';
}

}
int main(){
    std::vector<int>numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    displayVector(numbers);
    return 0;
}
