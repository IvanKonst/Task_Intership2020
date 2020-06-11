#include "gtest/gtest.h"
#include "../src/data.cpp"
TEST(Mediantest, Medianvalue) {
Data data;
data.add(1);
data.add(2);
data.add(3);
data.add(4);
data.printData();
data.sort();
data.getMedian();
EXPECT_EQ(2.5, data.median);
}
TEST(Mediantest_s, Medianvalue) {
Data data;
data.add(5);
data.add(3);
data.add(10);
data.add(6);
data.add(7);
data.printData();
data.sort();
data.getMedian();
EXPECT_EQ(6, data.median);
}
TEST(Mediantest_d, Medianvalue) {
Data data;
data.add(5);
data.add(3);
data.add(10);
data.add(6);
data.add(7);
data.add(7);
data.add(2);
data.printData();
data.sort();
data.getMedian();
EXPECT_EQ(6, data.median);
}

int main(int argc, char* argv[])
{

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}