/**
 * @file header.h
 * @author Ganesh Shenoy (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__
/**
 * @brief defines PI
 * 
 */
#define PI 3.1410
/**
 * @brief circle function inputs radius and choice returns circle parameters(area or perimeter)
 * 
 * @return float
 */
float circle(float,int);
/**
 * @brief triangle function inputs sides and choice returns triangle parameters(area or perimeter)
 * 
 * @return float 
 */
float triangle(float,float,float,int);
/**
 * @brief square function inputs side and choice using pointers returns square parameters(area or perimeter)
 * 
 * @return float 
 */
float square(float *,int *);
/**
 * @brief rhombus function accepts sides and choice and returns various parameters(area or perimeter)
 * 
 * @return float 
 */
float rhombus(float,float,int);
/**
 * @brief rectangle function accepts sides and choice and returns various parameters(area or perimeter)
 * 
 * @return float 
 */
float rectangle(float,float,int);
/**
 * @brief parallelogram function accepts sides and choice and returns various parameters(area or perimeter)
 * 
 * @return float 
 */
float parallelogram(float,float,float,int);
/**
 * @brief trapezium function accepts sides and choice and returns various parameters(area or perimeter)
 * 
 * @return float 
 */
float trapezium(float,float,float,float,float,int);
/**
 * @brief cube function accepts side length and choice and returns various parameters based on choice(CSA,TSA,Volume)
 * 
 * @return float 
 */
float cube(float,int);
/**
 * @brief cuboid function accepts various side length and choice and returns various parameters based on choice(CSA,TSA,Volume)
 * 
 * @return float 
 */
float cuboid(float,float,float,float,int);
/**
 * @brief cone function accepts radius and height and calculates the slant height and returns various parameters based on choice(CSA,TSA,Volume) 
 * 
 * @return float 
 */
float cone(float,float,int);
/**
 * @brief sphere function accepts radius and choice and returns various parameters based on choice(CSA,TSA,Volume) 
 * 
 * @return float 
 */
float sphere(float,int);
/**
 * @brief end of header file
 * 
 */
#endif
