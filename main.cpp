#include <iostream>
#include <string>
#include "Set.h"
#include<vector>
#include <algorithm>
//#include <random>
using namespace std;

int main() {
    vector<int> v = {5,1,4,3};
    Set<int> s(&v);

    Set<int> minS = s.find_biggest_subset_le(10);




}

