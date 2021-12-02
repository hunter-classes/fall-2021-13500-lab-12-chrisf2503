#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

std::vector<int> nums;
std::vector<int> out;
std::vector<int> ans;
TEST_CASE("Task A: "){
    nums = makeVector(5);
    for(int i = 0; i < 5; i++){
        CHECK(nums[i] == i);
    }
    nums.empty();
    
}

TEST_CASE("Task B: "){
    nums = {1, 2, -1, 3, 4, -1, 6};
    out = goodVibes(nums);
    ans = {1, 2, 3, 4, 6};
    for(int i = 0; i < ans.size(); i++){
        CHECK(out[i] == ans[i]);
    
    }
    nums.empty();
    out.empty();
    ans.empty();
}//*/

TEST_CASE("Task C: "){
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1, v2);
    ans = {1,2,3,4,5};
    for(int i = 0; i < ans.size(); i++){
        CHECK(v1[i] == ans[i]);
    }
    ans.empty();
}
TEST_CASE("Task D: "){
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    out = sumPairWise(v1, v2);
    ans = {5, 7, 3};
    for(int i = 0; i < ans.size(); i++){
        CHECK(out[i] == ans[i]);
    }
}
