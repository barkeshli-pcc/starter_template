#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include "../../includes/stub/stub.h"

bool test_stub(bool debug = false){
  bool test = stub();
  return test;
}

TEST(TEST_STUB, TestStub) {
  
  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_stub(false));
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

