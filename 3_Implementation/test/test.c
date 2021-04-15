#include "../unity/unity.h"
#include "../inc/header.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_circle(void){
    TEST_ASSERT_EQUAL_INT(6.282,circle(1,1));
    TEST_ASSERT_EQUAL_INT(3.141,circle(1,2));
}
void test_cone(void){
    TEST_ASSERT_EQUAL_INT(4.44288294,cone(1,1,1));
    TEST_ASSERT_EQUAL_INT(7.58447559,cone(1,1,2));
    TEST_ASSERT_EQUAL_INT(1.04719755,cone(1,1,3));
}
void test_cube(void){
    TEST_ASSERT_EQUAL_INT(4.0000,cube(1,1));
    TEST_ASSERT_EQUAL_INT(6.0000,cube(1,2));
    TEST_ASSERT_EQUAL_INT(1.0000,cube(1,3));
}
void test_cuboid(void){
    TEST_ASSERT_EQUAL_INT(4.0000,cuboid(1,1,1,1,1));
    TEST_ASSERT_EQUAL_INT(6.0000,cuboid(1,1,1,1,2));
    TEST_ASSERT_EQUAL_INT(1.0000,cuboid(1,1,1,1,3));
}

void test_parallelogram(void){
    TEST_ASSERT_EQUAL_INT(4.0000,parallelogram(1,1,1,1));
    TEST_ASSERT_EQUAL_INT(1.0000,parallelogram(1,1,1,2));
}
void test_rectangle(void){
    TEST_ASSERT_EQUAL_INT(4.0000,rectangle(1,1,1));
    TEST_ASSERT_EQUAL_INT(1.0000,rectangle(1,1,2));
}
void test_rhombus(void){
    TEST_ASSERT_EQUAL_INT(2.0000,rhombus(1,1,1));
    TEST_ASSERT_EQUAL_INT(1.0000,rhombus(1,1,2));
}
void test_sphere(void){
    TEST_ASSERT_EQUAL_INT(12.566,sphere(1,1));
    TEST_ASSERT_EQUAL_INT(12.566,sphere(1,2));
    TEST_ASSERT_EQUAL_INT(4.1887,sphere(1,3));
}
void test_square(void){
    float a=1;
    int b=1,c=2;
    TEST_ASSERT_EQUAL_INT(4.0000,square(&a,&b));
    TEST_ASSERT_EQUAL_INT(1.0000,square(&a,&c));
    //TEST_ASSERT_EQUAL_INT(4.1887,sphere(1,3));
}
void test_trapezium(void){
    TEST_ASSERT_EQUAL_INT(4.0000,trapezium(1,1,1,1,1,1));
    TEST_ASSERT_EQUAL_INT(1.0000,trapezium(1,1,1,1,1,2));
}
void test_triangle(void){
    TEST_ASSERT_EQUAL_INT(3.0000,triangle(1,1,1,1));
    TEST_ASSERT_EQUAL_INT(0.6123,triangle(1,1,1,2));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_circle);
RUN_TEST(test_cone);
RUN_TEST(test_cube);
RUN_TEST(test_cuboid);
RUN_TEST(test_parallelogram);
RUN_TEST(test_rectangle);
RUN_TEST(test_rhombus);
RUN_TEST(test_sphere);
RUN_TEST(test_square);
RUN_TEST(test_trapezium);
RUN_TEST(test_triangle);
return UNITY_END();
}
