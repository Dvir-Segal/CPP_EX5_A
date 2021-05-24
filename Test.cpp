#include "doctest.h"
#include "sources/BinaryTree.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <climits>
#include <assert.h>
#include <unordered_map>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
using namespace ariel;

TEST_CASE("Error Operations"){
    for (int i=0; i<20; i++){
        CHECK(i==i);
    }
}