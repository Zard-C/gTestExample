#include "Example.hpp" 
#include <gtest/gtest.h> 

struct Foo:
    public ::testing::Test
{
    //  设置
    virtual void SetUp() override
    {
        printf("hello"); 
    }

    // 拆解 
    virtual void TearDown() override
    {
        printf("world");
    }
};


int sideEffect = 42;

bool f()
{
    sideEffect = 16; 
    return true;    // try false  
}

TEST(ExampleTest, DemonstrateGtestMacros)
{
    const bool result = f(); 
    
    EXPECT_EQ(true, result) << "hello";
    ASSERT_TRUE(true);

}

TEST(test1, testAssert)
{
   
   EXPECT_TRUE(true);
}


TEST(ExampleTests, MAC)
{
    int x = 42; int y = 16;
    int sum = 100; int oldSum = sum; 
    int expectedNewSum = oldSum + x*y ;


    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum)
    );

    EXPECT_EQ(
        expectedNewSum,
        sum
    );
}