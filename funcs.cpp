#include <iostream>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n){
    std::vector<int> nums(n, 0);
    for(int i = 0; i < n; i++){
        nums[i] = i;
    }
    return nums;
}
std::vector<int> goodVibes(const std::vector<int> v){
    std::vector<int> pos;
    for(int i = 0; i < v.size(); i++){
        if(v.at(i) >= 0){
            pos.push_back(v[i]);
        }
    }
    return pos;
}//*/
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> sums;
    if(v1.size() > v2.size()){
        for(int i = 0; i < v1.size(); i++){
            if(i <= v2.size()-1){
                sums.push_back(v1[i] + v2[i]);
            }
            else{
                sums.push_back(v1[i]);
            }
        }
    }
    else{
        for(int i = 0; i < v2.size(); i++){
            if(i <= v1.size()-1){
                sums.push_back(v1[i] + v2[i]);
            }
            else{
                sums.push_back(v2[i]);
            }
        }
    }
    return sums;
}