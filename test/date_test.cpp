#include <gtest/gtest.h>
#include "../include/date.hpp"

#include <iterator>
#include <vector>


class DateTest : public ::testing::Test
{

};

TEST_F(DateTest, Test){
    EXPECT_EQ( Date::Date::return_1(), 1);
}