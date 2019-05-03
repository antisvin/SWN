
#include "sphere_disppat.h"

//todo: convert these to 0..1 instead of 0..100% so we don't have to divide by 100 each time we read a value
const float 	WT_SPREAD_PATTERN[NUM_DISPPAT][6][3] = 	{	
			{	//Percentages
				
				// PATTERN 0
				{100, 		100,        100},
				{100,   	100, 		100},
				{100,   	100,    	100},
				{100,		100,   	    100},
				{100,   	100, 		100},
				{100,   	100,    	100},			
			},
				
				// PATTERN 1
			{
				{100, 	0,      0},
				{0,   	100, 	0},
				{0,   	0,   	100},
				{-100,	0,   	0},
				{0,   	-100, 	0},
				{0,   	0,    	-100},

			
			},
			
			{
				// PATTERN 2
				{50, 	130,	 80},
				{120, 	-30, 	60},
				{80, 	130, 	-120},
				{50, 	20, 	150},
				{-200, 	0, 		30},
				{100, 	20, 	30},
			},															

			{
				// PATTERN 3
				{-120, 	30, 	60},
				{200, 	130, 	120},
				{50, 	30,	 	80},
				{200, 	200, 	30},
				{10, 	20, 	120},
				{50, 	20, 	-150},
			},
			
			{
				// PATTERN 4
				{-200, 	30, 	60},
				{-20, 	-100, 	120},
				{200, 	200,	 80},
				{-200, 	-150, 	30},
				{100, 	200, 	120},
				{30, 	-200, 	-150},
			},		

			{
				// PATTERN 5
				{100, 	-300,    200},
				{-200,   200, 	40},
				{-150,   40,   	120},
				{10,	200,   	-200},
				{190,   -200, 	-80},
				{20,   	90,    	-100}
			}																																																	
		};