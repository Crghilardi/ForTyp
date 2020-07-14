#include <vector>
#include <array>
#include <map>
#include <cmath>
#include "stocking_values.hpp"
#include "tree.hpp"

//Table 2: Stocking equation coefficients and species codes
std::map<int, std::array<double, 2>> stk_coeff = {
{1, {0.00869, 1.48}},
{2, {0.00454, 1.73}},
{3, {0.01691, 1.05}},
{4, {0.00946, 1.59}},
{5, {0.00422, 1.70}},
{6, {0.00509, 1.81}},
{7, {0.00458, 1.91}},
{8, {0.00335, 1.73}},
{9, {0.01367, 1.44}},
{10, {0.00250, 2.00}},
{11, {0.00609, 1.67}},
{12, {0.00914, 1.67}},
{13, {0.00900, 1.51}},
{14, {0.00680, 1.72}},
{15, {0.00769, 1.54}},
{16, {0.00433, 1.80}},
{17, {0.00313, 2.11}},
{18, {0.00427, 1.67}},
{19, {0.00333, 1.68}},
{20, {0.00000, 1.00}},
{21, {0.00000, 1.00}},
{22, {0.00000, 1.00}},
{23, {0.00000, 1.00}},
{24, {0.00000, 1.00}},
{25, {0.01105, 1.53}},
{26, {0.01671, 1.41}},
{27, {0.00694, 1.86}},
{28, {0.00635, 1.89}},
{29, {0.01119, 1.63}},
{30, {0.01546, 1.50}},
{31, {0.00429, 1.87}},
{32, {0.01429, 1.46}},
{33, {0.02197, 1.13}},
{34, {0.00000, 1.00}},
{35, {0.00442, 2.02}},
{36, {0.00688, 1.86}}
};

//Table 3. Initial types by species - array needs to be one larger than FORTRAN code due to indexing

std::array<int,1001> initial_type = {
0,
//species codes 1-100
0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
1, 55, 0, 2, 2, 55, 3, 4, 4, 5,
5, 7, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
8, 9, 59, 0, 0, 0, 0, 0, 0, 12,
12, 12, 12, 12, 12, 0, 64, 161, 161, 161,
161, 161, 161, 38, 161, 63, 64, 64, 161, 70,
65, 40, 13, 0, 0, 0, 0, 0, 0, 0,
10, 0, 0, 0, 0, 0, 0, 0, 0, 16,
70, 40, 14, 16, 17, 15, 58, 18, 16, 42,
//species codes 101-200
19, 20, 21, 20, 41, 162, 44, 23, 24, 45,
46, 22, 25, 22, 47, 36, 27, 22, 28, 6,
48, 26, 49, 29, 42, 50, 163, 51, 53, 71,
52, 54, 162, 162, 26, 70, 22, 22, 22, 162,
22, 20, 162, 72, 70, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//species codes 201-300
30, 31, 0, 0, 0, 0, 0, 0, 0, 0,
32, 33, 0, 0, 0, 0, 0, 0, 0, 0,
61, 61, 61, 0, 0, 0, 0, 0, 0, 0,
40, 40, 0, 0, 0, 0, 0, 0, 0, 60,
60, 11, 0, 0, 0, 0, 0, 0, 0, 0,
40, 40, 0, 0, 0, 0, 0, 0, 0, 66,
66, 66, 34, 35, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 170, 0, 160,
//species codes 301-400
0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
151, 130, 208, 96, 152, 95, 97, 96, 152, 152,
159, 159, 159, 159, 159, 0, 0, 0, 0, 153,
153, 153, 153, 153, 153, 153, 153, 0, 0, 0,
151, 0, 0, 0, 153, 153, 0, 0, 0, 153,
131, 153, 153, 0, 146, 152, 0, 0, 0, 0,
132, 132, 132, 0, 0, 0, 152, 0, 0, 98,
98, 98, 129, 151, 99, 99, 99, 99, 99, 0,
151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
152, 0, 0, 0, 0, 0, 0, 0, 0, 92,
//species codes 401-500
90, 92, 92, 91, 90, 92, 92, 92, 92, 92,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
152, 152, 152, 0, 0, 0, 0, 0, 0, 133,
133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
152, 152, 0, 0, 0, 0, 0, 0, 0, 115,
100, 115, 115, 0, 0, 0, 0, 0, 0, 0,
152, 0, 0, 0, 156, 156, 156, 156, 156, 0,
153, 0, 0, 0, 0, 0, 0, 0, 0, 153,
153, 153, 0, 0, 0, 0, 0, 0, 0, 101,
//species codes 501-600
101, 101, 0, 0, 0, 0, 0, 0, 0, 148,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
102, 0, 0, 0, 0, 0, 0, 0, 0, 153,
103, 135, 104, 105, 153, 153, 153, 153, 153, 0,
151, 101, 0, 0, 127, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
101, 0, 0, 0, 0, 0, 0, 0, 0, 153,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
106, 0, 0, 0, 0, 0, 0, 0, 0, 153,
//species codes 601-700
107, 108, 153, 153, 153, 153, 0, 0, 0, 0,
109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
101, 0, 0, 0, 0, 0, 0, 0, 0, 152,
152, 152, 111, 152, 152, 152, 152, 152, 0, 152,
152, 152, 152, 152, 152, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
152, 152, 152, 152, 0, 0, 0, 0, 0, 113,
112, 151, 113, 114, 0, 0, 0, 0, 0, 0,
//species codes 701-800
152, 152, 0, 0, 0, 0, 0, 0, 0, 0,
152, 144, 0, 0, 0, 0, 0, 0, 0, 0,
127, 151, 0, 0, 0, 0, 0, 0, 0, 153,
116, 153, 0, 0, 0, 0, 0, 0, 0, 118,
117, 118, 119, 118, 118, 119, 137, 118, 118, 0,
0, 118, 0, 0, 157, 157, 157, 157, 0, 152,
152, 121, 152, 152, 152, 152, 0, 152, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
//species codes 801-900
138, 81, 210, 151, 142, 82, 134, 89, 86, 210,
210, 88, 87, 158, 140, 89, 202, 139, 89, 201,
158, 128, 83, 206, 87, 207, 204, 143, 210, 205,
125, 84, 85, 87, 86, 87, 120, 203, 142, 86,
89, 89, 210, 0, 0, 0, 0, 0, 0, 210,
152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
//species codes 901-1000
122, 160, 0, 0, 0, 0, 0, 0, 0, 0,
147, 0, 0, 0, 0, 0, 0, 0, 158, 123,
123, 123, 123, 123, 0, 0, 123, 0, 123, 0,
93, 0, 0, 0, 152, 152, 152, 152, 152, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
124, 124, 124, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
209, 94, 209, 146, 94, 152, 94, 0, 0, 0,
141, 0, 0, 0, 0, 0, 0, 0, 149, 160,
153, 145, 146, 146, 146, 153, 153, 180, 190, 0
};

//TABLE 3 stocking equation assignment by species

std::array<int, 1001> stocking_eq = {
0,
//species codes 1-100
0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
18, 1, 0, 18, 15, 1, 18, 1, 1, 18,
18, 18, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
18, 18, 16, 0, 0, 0, 0, 0, 0, 10,
10, 10, 10, 10, 10, 0, 4, 10, 10, 3,
3, 10, 10, 10, 10, 10, 4, 4, 10, 1,
1, 2, 2, 0, 0, 0, 0, 0, 0, 0,
18, 0, 0, 0, 0, 0, 0, 0, 0, 1,
1, 18, 1, 1, 3, 1, 1, 18, 1, 11,
//species codes 101-200
10, 10, 8, 8, 4, 10, 4, 5, 10, 6,
7, 10, 10, 10, 4, 10, 10, 10, 8, 10,
9, 10, 4, 10, 11, 4, 10, 12, 13, 4,
14, 4, 10, 10, 10, 11, 10, 10, 10, 10,
10, 10, 10, 4, 4, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//species codes 201,300
15, 15, 0, 0, 0, 0, 0, 0, 0, 0,
19, 19, 0, 0, 0, 0, 0, 0, 0, 0,
31, 31, 31, 0, 0, 0, 0, 0, 0, 0,
18, 18, 0, 0, 0, 0, 0, 0, 0, 16,
16, 18, 0, 0, 0, 0, 0, 0, 0, 0,
18, 18, 0, 0, 0, 0, 0, 0, 0, 17,
17, 17, 18, 18, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 13, 0, 25,
//species codes 301-400
0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
25, 25, 36, 27, 27, 25, 25, 27, 25, 25,
10, 10, 10, 10, 10, 0, 0, 0, 0, 27,
27, 27, 27, 27, 27, 27, 27, 0, 0, 0,
25, 0, 0, 0, 36, 36, 0, 0, 0, 26,
26, 26, 26, 0, 26, 25, 0, 0, 0, 0,
29, 29, 29, 0, 0, 0, 25, 0, 0, 27,
27, 27, 28, 28, 28, 28, 28, 28, 28, 0,
25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
25, 0, 0, 0, 0, 0, 0, 0, 0, 29,
//species codes 401-500
29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
25, 29, 29, 0, 0, 0, 0, 0, 0, 29,
29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
27, 27, 0, 0, 0, 0, 0, 0, 0, 36,
36, 36, 36, 0, 0, 0, 0, 0, 0, 0,
25, 0, 0, 0, 10, 33, 33, 33, 33, 0,
25, 0, 0, 0, 0, 0, 0, 0, 0, 25,
25, 26, 0, 0, 0, 0, 0, 0, 0, 29,
//species codes 501-600
29, 29, 0, 0, 0, 0, 0, 0, 0, 15,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
27, 0, 0, 0, 0, 0, 0, 0, 0, 33,
33, 33, 33, 36, 33, 33, 33, 33, 33, 0,
25, 27, 0, 0, 25, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
25, 0, 0, 0, 0, 0, 0, 0, 0, 25,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
25, 0, 0, 0, 0, 0, 0, 0, 0, 30,
//species codes 601-700
30, 30, 30, 30, 30, 30, 0, 0, 0, 0,
31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
29, 0, 0, 0, 0, 0, 0, 0, 0, 33,
33, 33, 25, 33, 33, 33, 33, 33, 0, 29,
29, 29, 29, 29, 29, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
25, 25, 25, 25, 0, 0, 0, 0, 0, 31,
31, 31, 31, 31, 0, 0, 0, 0, 0, 0,
//species codes 701-800
25, 25, 0, 0, 0, 0, 0, 0, 0, 0,
25, 27, 0, 0, 0, 0, 0, 0, 0, 0,
33, 33, 0, 0, 0, 0, 0, 0, 0, 36,
36, 36, 0, 0, 0, 0, 0, 0, 0, 36,
32, 36, 32, 36, 36, 32, 36, 36, 36, 0,
0, 36, 0, 0, 10, 10, 10, 10, 0, 25,
25, 33, 25, 25, 25, 25, 0, 25, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
//species codes 801-900
29, 29, 10, 29, 29, 29, 29, 29, 29, 10,
10, 29, 29, 10, 29, 29, 29, 29, 29, 29,
25, 29, 10, 29, 29, 10, 29, 29, 10, 29,
29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
29, 29, 10, 0, 0, 0, 0, 0, 0, 10,
25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
//species codes 901-1000
29, 10, 0, 0, 0, 0, 0, 0, 0, 0,
29, 0, 0, 0, 0, 0, 0, 0, 25, 25,
25, 25, 25, 25, 0, 0, 25, 0, 25, 0,
29, 0, 0, 0, 25, 25, 25, 25, 25, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
35, 35, 35, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
36, 36, 36, 36, 36, 36, 36, 0, 0, 0,
29, 0, 0, 0, 0, 0, 0, 0, 25, 10,
25, 1, 33, 25, 25, 25, 25, 25, 25, 0
};

//based on code from open-fvs/code/HEAD/tree/trunk/vbase/stkval.f

//    dmxstd - d(ind(1)) the maximum dbh in the stand
//    dmxss  - diameter maximum for dia < 5.0" trees
//    totstk - total stand stocking for all trees
//    ttst51 - sum of total stand stocking for trees
//             greater than 5 in dbh, process step 1
//    totst5 - sum of total stand stocking for trees
//             greater than 5 in dbh
//    totst3 - sum of total stand stocking for trees
//             > 0.1" & < 5.0" in dbh (saplings)
//    totst1 - sum of total stand stocking for trees
//             equal to 0.1 in dbh (seedlings)
//    szcl   - size class array (3) small/medium/large
//    iszcl  - size class code
//    istcl  - stocking class code
//    ss     - ss(maxsp) the stocking value for each species calculated
//             in this routine


std::array<double, 211> stocking_values(std::vector<Tree> treeList){

    double dmxstd = 0.0;
    double dmxss = 0.0;
    double totstk = 0.0;
    double ttst51 = 0.0;
    double ttst52 = 0.0;
    double totst5 = 0.0;
    double totst3 = 0.0;
    double totst1 = 0.0;
    //double stktr1 = 0.0;
    //double stktr2 = 0.0;
    //std::array<double, 3> szcl = {};
    //int iszcl = 0;
    //int istcl = 0;
    std::array<double, 211> ss = {};

    //find largest DBHs for overstory and understory
    for(auto i : treeList){
        if (i.dbh > dmxstd){
            dmxstd = i.dbh;
        }
        if (i.dbh < 5.0 && i.dbh > dmxss){
            dmxss = i.dbh;
        } 
    }

    //step 1 - assign initial individual tree stocking to all trees
    for(auto& i : treeList){
        i.stocking = (stk_coeff[stocking_eq[i.species]][0] * 
           std::pow(i.dbh, stk_coeff[stocking_eq[i.species]][1])) * i.tpa;

        //store sum of overstory (>5") stocking for next step
        if (i.dbh >= 5.0){
        ttst51 += i.stocking;
        }

    } //end step 1

    //step 2 !TABLE 4 (ARNER 2/13/2001) CROWN POSITION ADJUSTMENT FACTORS (CF)
    for(auto& i : treeList){
        double dmax = 0.0;
        double cf = 0.0;

        dmax = (ttst51 >= 10.0) ? 5.0 : dmxss;
        cf = (i.dbh >= 5.0) ? 1.0 : (i.dbh/dmax);

        i.stocking = (i.stocking * cf);

        //store sum of seedling(0.1"), sapling(0.2" - 4.9"), and overstory(>5") class stocking
        if(i.dbh == 0.1){
            totst1 += i.stocking;
        } else if (i.dbh > 0.1 && i.dbh < 5.0){
            totst3 += i.stocking;
        } else {
            ttst52 += i.stocking;
            totst5 += i.stocking;
        }
        totstk += i.stocking;

        ss[initial_type[i.species]] = ss[initial_type[i.species]] + i.stocking;
    } //end step 2

    //STEP 3 & 4: DETERMINE 'FUTURE STAND' OR STANDARD VALUES FOR SEEDS/SAPS
    //if total overstory stocking is < 20%, recalculate using "future stand" procedure
    if(ttst52 < 20.0){
        //reset values
        totstk = 0.0;
        totst5 = 0.0;
        totst3 = 0.0;
        totst1 = 0.0;
        //ss[i.species] = 0.0;
    }

    for(auto& i : treeList){
        double dmax = 0.0;
        double cf = 0.0;

        dmax = (ttst51 >= 10.0) ? 5.0 : dmxss;
        cf = (i.dbh >= 5.0) ? 1.0 : (i.dbh/dmax);

        i.stocking += (stk_coeff[stocking_eq[i.species]][0] * std::pow((i.dbh < 5.0 ? 5.0 : i.dbh), stk_coeff[stocking_eq[i.species]][1])) * i.tpa * cf;

        if(i.dbh == 0.1){
            totstk += i.stocking;
        } else if (i.dbh > 0.1 && i.dbh < 5.0){
            totst3 += i.stocking;
        } else {
            ttst52 += i.stocking;
            totst5 += i.stocking;
        }
        totstk += i.stocking;
        ss[initial_type[i.species]] = ss[initial_type[i.species]] + i.stocking;
    }

    // In Arner paper but not used in FVS code?
    //STEP 5: ASSURE SEEDS/SAPS DO NOT REDUCE STOCK VALUES OF LARGER TREES
    // double ug = 120.0;
    // double gi = totst5;
    // double ai = totst3;
    // double ei = totst1;
    // double ua = std::max(ug-gi, 0.0);
    // double ue = std::max(ua-ai, 0.0);

    // for(auto i : treeList){
    //     double totstk = 0.0;
    //     double totst5 = 0.0;
    //     double totst3 = 0.0;
    //     double totst1 = 0.0;

    //     if(ttst52 < 20.0){
    //         ss[i.species] = 0.0;
    //     }

    //     dmax = (ttst51 >= 10.0) ? 5.0 : dmxss;
    //     cf = (i.dbh >= 5.0) ? 1.0 : (i.dbh/dmax);

    //     stktr2 += (stk_coeff[stocking_eq[i.species]][0] * std::pow((i.dbh < 5.0 ? 5.0 : i.dbh), stk_coeff[stocking_eq[i.species]][1])) * i.tpa * cf;

    //     if(i.dbh == 0.1){
    //         totst1 += stktr2;
    //     } else if (i.dbh > 0.1 && i.dbh < 5.0){
    //         totst3 += stktr2;
    //     } else {
    //         ttst52 += stktr2;
    //         totst5 += stktr2;
    //     }
    //     totstk+= stktr2;
    //     ss[i.species] += stktr2;
    //     }

    //     if (i.dbh < 5){
    //         szcl[0] = szcl[0] + stktr2;
    //     } else if (i.species < 300 && (i.dbh >=5.0 && i.dbh < 9.0)){
    //         szcl[1] = szcl[1] + stktr2;
    //     } else if (i.species >= 300 && (i.dbh>=5.0 && i.dbh < 11.0)){
    //         szcl[1] = szcl[1] + stktr2;
    //     } else if (i.species < 300 && i.dbh >= 9.0) {
    //         szcl[2] = szcl[2] + stktr2;
    //     } else if (i.species >= 300 && i.dbh >= 11.0){
    //         szcl[2] = szcl[2] + stktr2;
    // };

    // DETERMINE STAND SIZE CLASS

    // if (totstk < 10.0){
    //     iszcl = 5; //Nonstocked
    // } else if (szcl[0] > (totstk * 0.5)){
    //     iszcl = 3; //Seedling-Sapling
    // } else if (szcl[1] > szcl[2]){
    //     iszcl = 2; //Poletimber
    // } else if (szcl[2] > szcl[1]){
    //     iszcl = 1; //Sawtimber
    // }

    // //DETERMINE STOCKING CLASS

    // if (totstk > 100){
    //     istcl = 1; //overstocked
    // } else if (totstk >= 60.0 && totstk < 100.0){
    //     istcl = 2; //fully stocked
    // } else if (totstk >= 35.0 && totstk < 60.0 ) {
    //     istcl = 3; //moderately stocked
    // } else if (totstk >= 10.0 && totstk < 35.0){
    //     istcl = 4; //poorly stocked
    // } else if (totstk >= 0.0 && totstk < 10.0){
    //     istcl = 5; //Nonstocked
    // }

return ss;
} //end function
