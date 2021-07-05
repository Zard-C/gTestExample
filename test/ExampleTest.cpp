#include "../Example.hpp" //想要包含Example.hpp 头文件，需注意目录结构
#include <gtest/gtest.h> 

// 要继承Test这个类，override关键字表示覆盖了基类中的方法
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


// 全局变量
int sideEffect = 42;

// 有副作用的函数: 修改了全局变量真的值
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