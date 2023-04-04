#include <iostream>
#include <vector>
using namespace std;
/*We are creating this so that we can be able to dosplay both vector befor and after poping*/
void displayVector(std::vector<int>numbers){
for (int i = 0; i < numbers.size(); i++)
{
    cout << "At index "<<i<< ": "<<numbers[i]<< '\n';
}

}
int main(){
    std::vector<int>numbers;
    numbers.push_back(1);   
    numbers.push_back(2);
    numbers.push_back(3);
    //vector before poping
    cout << "before"<<'\n';
    displayVector(numbers);
    numbers.pop_back();
    //vector after poping
    cout << "after"<<'\n';
    displayVector(numbers);
    return 0;
}