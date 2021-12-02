#include <iostream>
#include "funcs.h"
#include <vector>
//Finding the tool that will work best for you
//Example; using emacs, or using vim, or using VSC, notepad, etc.
//Try emacs when ever you can
int main(){
    std::cout << "Task A:\n";
    std::vector<int> nums = makeVector(5);
    for(int i = 0; i < nums.size(); i++){
        std::cout << nums.at(i) << " ";
    }
    std::cout << '\n';
    std::cout << "------------------------------------\nTask B:\n";
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::cout << "Original\n";
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << " ";
    }
    std::cout << '\n';
    std::vector<int> newNums = goodVibes(v);
    std::cout << "New: \n"; 
    for(int i = 0; i < newNums.size(); i++){
        std::cout << newNums.at(i) << " ";
    }
    std::cout << '\n';//*/
    std::cout << "------------------------------------\nTask C:\n";
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1, v2);//*/
    for(int i = 0; i < v1.size(); i++){
        std::cout << v1.at(i) << " ";
    }
    std::cout << '\n';
    std::cout << v2.empty() << '\n';
    std::cout << "------------------------------------\nTask D:\n";
    v1 = {1,2,3};
    v2 = {4,5};
    newNums = sumPairWise(v1, v2);
    for(int i = 0; i < newNums.size(); i++){
        std::cout << newNums.at(i) << " ";
    }
    std::cout << '\n';
    return 0;
}