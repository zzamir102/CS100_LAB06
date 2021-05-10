#include "../header/rectangle.hpp"
#include "gtest/gtest.h"
#include <iostream>

using namespace std;

TEST(RectangleConstructor, ZeroParameters) {
	Rectangle* test = new Rectangle();
	test->set_width(2);
	test->set_height(4);
	EXPECT_EQ(test->area(), 8);
}

TEST(RectangleConstructor, DefaultConstructor) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test->area(), 0);
}

TEST(RectangleConstructor, PositiveParameters) {
	Rectangle* test = new Rectangle(3, 4);
	EXPECT_EQ(test->area(), 12);	
}

TEST(RectangleConstructor, NegativeParameters) {
	Rectangle* test = new Rectangle(-5, -2);
	EXPECT_EQ(test->area(), 10);	
}

TEST(RectangleArea, ZeroWidthHeight) {
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->area(), 0);
}

TEST(RectangleArea, PositiveWidthHeight) {
	Rectangle* test = new Rectangle(5, 8);
	EXPECT_EQ(test->area(), 40);
}

TEST(RectangleArea, NegativeWidthHeight) {
	Rectangle* test = new Rectangle(-4, -12);
	EXPECT_EQ(test->area(), 48);
}

TEST(RectanglePerimeter, ZeroWidthHeight) {
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->perimeter(), 0);
}

TEST(RectanglePerimeter, PositiveWidthHeight) {
	Rectangle* test = new Rectangle(8, 14);
	EXPECT_EQ(test->perimeter(), 44);
}

TEST(RectanglePerimeter, NegativeWidthHeight) {
	Rectangle* test = new Rectangle(-4, -6);
	EXPECT_EQ(test->perimeter(), -20);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
