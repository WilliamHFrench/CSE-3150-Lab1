#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 
#include "./include/doctest.h" 

bool non_negative_prefix_sum (int myArray[], int len){
    bool value = true;
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += myArray[i];
        if (sum < 0){
            value = false;
            break;
        }
    }
    return value;
}

bool non_positive_prefix_sum (int myArray[], int len){
    bool value = true;
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += myArray[i];
        if (sum > 0){
            value = false;
            break;
        }
    }
    return value;
}


TEST_CASE("testing the non_negative_prefix_sum function") { 

int ary1[] = {1, -1};
int ary2[] = {};
int ary3[] = {-1, -1};
int ary4[] = {1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
int ary5[] = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1};

CHECK(non_negative_prefix_sum(ary1, sizeof(ary1)/sizeof(int))); 
CHECK(non_negative_prefix_sum(ary2, sizeof(ary2)/sizeof(int))); 
CHECK(!non_negative_prefix_sum(ary3, sizeof(ary3)/sizeof(int))); 
CHECK(non_negative_prefix_sum(ary4, sizeof(ary4)/sizeof(int))); 
CHECK(!non_negative_prefix_sum(ary5, sizeof(ary5)/sizeof(int))); 
}

TEST_CASE("testing the non_positive_prefix_sum function") { 

int ary1[] = {1, -1};
int ary2[] = {};
int ary3[] = {-1, 1};
int ary4[] = {-1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
int ary5[] = {-1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, 1};

CHECK(!non_positive_prefix_sum(ary1, sizeof(ary1)/sizeof(int))); 
CHECK(non_positive_prefix_sum(ary2, sizeof(ary2)/sizeof(int))); 
CHECK(non_positive_prefix_sum(ary3, sizeof(ary3)/sizeof(int))); 
CHECK(non_positive_prefix_sum(ary4, sizeof(ary4)/sizeof(int))); 
CHECK(!non_positive_prefix_sum(ary5, sizeof(ary5)/sizeof(int))); 
}