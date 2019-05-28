/* This file was converted by gperf_fold_key_conv.py
      from gperf output file. */
/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf -n -C -T -c -t -j1 -L ANSI-C -F,-1 -N onigenc_unicode_fold1_key unicode_fold1_key.gperf  */
/* Computed positions: -k'1-3' */



/* This gperf source file was generated by make_unicode_fold_data.py */

/*-
 * Copyright (c) 2017-2018  K.Kosako  <sndgk393 AT ybb DOT ne DOT jp>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#include <string.h>
#include "regenc.h"

#define TOTAL_KEYWORDS 1346
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 1765
/* maximum key range = 1763, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash(OnigCodePoint codes[])
{
  static const unsigned short asso_values[] =
    {
         4,    2,  147,   16,    1,   13, 1233,  682, 1225,  643,
      1208,   95,    9,   89, 1391,   82,    8,   80, 1383,    6,
      1201,  638, 1191,  602,  151,   75, 1377,   68, 1374,  464,
         0,   11, 1369,    3, 1352,  278,   23,  424,  660,  320,
       640,   20,  635,   34,    5,   29,  860,   27,  630,    0,
       854, 1352,  870, 1336,  470, 1322,  623, 1319,  610,  230,
      1184, 1309, 1159,  779, 1042,  980,  836,  844,  456,  597,
       285,  158,  590,  477,  583,   42,  576, 1442,  447, 1119,
       440,  922,  426, 1434,  400, 1433,  327, 1428,  567, 1417,
       386, 1443,  458,  856,  704, 1435, 1010,   66,  232,  413,
       204, 1417,  226, 1412,  190, 1095,  379, 1253,  198, 1211,
       175,  209,  561,  362,  528, 1296,  257, 1169,  240, 1291,
       508, 1163,  484, 1228,  699,  735,  831,  488,  679,  513,
       420,  639, 1148,   83,  683,  806, 1152,   77, 1170,  537,
      1213,    3, 1285,  166, 1410, 1766, 1394, 1766, 1206,  460,
       757, 1766,  367, 1766, 1339, 1766,  908,   57, 1321, 1766,
       384,  345,  686,   52, 1145,   40,  218,  180, 1135,   33,
      1292,  276, 1282,   14, 1408,  719, 1128,  701, 1275,  129,
      1116,  610, 1255, 1343, 1109,  874, 1097,  448,  823,  346,
       877,  181, 1089,    0, 1077,  786, 1080,  768, 1068, 1180,
      1060, 1056, 1048,  798,  811,  177, 1045, 1022, 1030,  993,
      1020,  789,  353,  990,  548,  982,  517,  970,  334,  765,
       166,  753,  138,  743,  100,  963,   87,  720,   49,  957,
        75,  951,   62,  411,  126,  945,  113, 1266,  317,  935,
       304,  925,  293, 1244,  714,  912,  275,  490,  263,  469,
       395, 1297,  896,  208,  887,   80,  542,   11,  246
    };
  return asso_values[(unsigned char)onig_codes_byte_at(codes, 2)+3] + asso_values[(unsigned char)onig_codes_byte_at(codes, 1)] + asso_values[(unsigned char)onig_codes_byte_at(codes, 0)];
}

int
onigenc_unicode_fold1_key(OnigCodePoint codes[])
{
  static const short int wordlist[] =
    {
      -1, -1, -1,

      3408,

      1900,

      1861,

      210,

      171,

      3393,

      1921,

      1687,

      231,

      1879,

      1873,

      189,

      183,

      2234,

      1312,

      1273,

      165,

      789,

      2255,

      1333,

      1591,

      1627,

      1291,

      1285,

      1909,

      2237,

      219,

      3402,

      2231,

      3396,

      2975,

      2897,

      2291,

      2984,

      3390,

      2276,

      2942,

      1321,

      2933,

      2921,

      1615,

      2978,

      3486,

      2900,

      971,

      273,

      2894,

      1603,

      2642,

      3537,

      2183,

      1225,

      459,

      2993,

      80,

      2879,

      1792,

      3717,

      1510,

      1597,

      378,

      2432,

      3549,

      2189,

      1231,

      465,

      857,

      92,

      1038,

      1804,

      3729,

      1522,

      2708,

      2543,

      2435,

      3543,

      2186,

      1228,

      462,

      863,

      86,

      2882,

      1798,

      3723,

      1516,

      159,

      2555,

      3531,

      2180,

      1222,

      456,

      1456,

      860,

      2876,

      1786,

      3711,

      1504,

      1444,

      2966,

      2549,

      3525,

      2177,

      1219,

      453,

      854,

      2960,

      2873,

      1780,

      3705,

      1498,

      2936,

      2537,

      2930,

      3561,

      2195,

      1237,

      471,

      851,

      105,

      2924,

      1816,

      3741,

      1534,

      3333,

      2531,

      2918,

      3555,

      2192,

      1234,

      468,

      869,

      99,

      399,

      1810,

      3735,

      1528,

      1645,

      2567,

      3519,

      2174,

      1216,

      2417,
      -1,

      866,

      2870,

      1774,

      3699,

      1492,

      541,

      502,

      2561,

      694,

      1891,

      559,

      201,

      848,

      520,

      514,

      3474,
      -1,

      959,

      267,

      2525,

      2270,

      2630,

      1303,

      3513,

      2171,

      1213,

      366,

      2333,
      -1,

      2867,

      1768,

      3693,

      1486,

      2021,

      1060,

      324,

      1189,

      27,

      2957,
      -1,

      845,

      1723,

      3648,

      3135,

      1609,

      1681,

      1375,

      2519,

      2012,

      1051,

      315,

      827,

      12,

      2714,
      -1,

      782,

      2018,

      1057,

      321,

      2366,

      4065,

      1357,

      2005,

      1044,

      309,

      3612,

      0,

      2711,
      -1,

      1369,

      153,

      31,

      2726,

      2354,

      1585,

      1345,

      2090,

      1132,

      387,
      -1,

      1378,

      2786,

      1606,
      -1,

      2009,

      1047,

      312,

      3438,

      6,

      919,

      2002,

      1041,

      306,

      2594,

      3864,

      2360,

      3321,

      1351,

      2033,

      1072,

      336,

      2450,

      52,

      2729,

      2228,

      1270,

      499,

      3858,

      168,

      2384,
      -1,

      1399,

      1594,
      -1,

      715,

      2030,

      1069,

      333,

      2444,

      46,

      3597,

      2213,

      1255,

      487,
      -1,

      141,

      2378,

      1852,

      1393,

      1570,
      -1,

      712,

      3591,

      2210,

      1252,

      483,

      393,

      135,

      2891,

      1846,

      1621,

      1564,

      3471,

      1960,

      956,

      3852,
      -1,

      2273,

      2627,

      884,

      3579,

      2204,

      1246,

      480,

      2330,

      123,

      532,

      1834,

      3759,

      1552,
      -1,

      3573,

      2201,

      1243,

      477,

      2990,

      117,

      878,

      1828,

      3753,

      1546,

      700,
      -1,

      3846,

      3567,

      2198,

      1240,

      474,

      875,

      111,

      658,

      1822,

      3747,

      1540,

      3801,

      1984,

      1005,

      288,
      -1,

      2285,

      2675,

      872,

      2168,

      1210,
      -1,

      643,

      2342,

      2864,

      1762,

      3687,

      1480,
      -1, -1,

      652,

      3261,

      381,

      3900,

      3002,

      842,

      637,

      1675,

      2159,

      1201,

      3231,

      661,

      2513,

      2855,

      1744,

      3669,

      1462,

      775,

      3882,

      2426,

      3318,

      37,

      2084,

      1111,

      372,

      3222,

      3894,

      2765,

      640,
      -1,

      1384,

      2495,

      3870,

      3228,

      2015,

      1054,

      318,

      3903,

      18,

      3216,

      1123,

      1990,

      1017,

      294,

      2777,

      2372,

      2687,

      1363,

      3078,

      3603,

      2216,

      1258,

      2348,

      3288,

      3876,

      1981,

      999,

      285,

      1576,

      667,

      2669,

      3219,

      3366,

      3069,

      3999,

      3552,

      2339,

      3213,

      3924,

      3984,

      96,

      3075,

      1807,

      3732,

      1525,

      2051,

      1090,

      3063,

      2486,

      2351,

      3507,

      1978,

      993,

      282,

      3975,

      3918,

      2663,
      -1,

      1435,

      2558,

      2279,

      3993,
      -1,

      3987,

      3501,

      1975,

      987,

      279,

      3981,

      3066,

      2657,

      3495,

      1972,

      981,

      276,

      3060,
      -1,

      2651,

      2996,

      1669,

      3465,

      1957,

      947,

      1993,

      1023,

      297,

      2621,

      369,

      2693,

      765,

      3171,

      3378,

      2324,

      3600,

      3423,

      1936,

      903,

      243,

      144,

      613,

      2579,

      3480,

      1573,

      965,

      270,

      3360,

      2306,

      2636,

      3840,

      2039,

      1078,

      342,

      2462,

      65,

      3594,

      348,

      2477,

      709,

      2972,

      138,

      2396,

      1849,

      1411,

      1567,

      2411,

      718,

      1426,

      3822,

      3017,

      724,
      -1,

      3354,

      3195,

      2036,

      1075,

      339,

      2456,

      59,
      -1, -1,

      351,

      2483,

      2165,

      1207,

      2390,

      3348,

      1405,

      2861,

      1756,

      3681,

      1474,

      1432,

      3342,

      2027,

      1066,

      330,

      706,

      40,

      622,
      -1,

      3909,

      3312,
      -1,

      3384,

      363,

      2507,

      1387,

      2225,

      1267,

      496,

      3042,

      162,

      607,

      2162,

      1204,

      1588,
      -1,

      3888,

      2858,

      1750,

      3675,

      1468,

      3327,
      -1,

      3225,

      634,

      2024,

      1063,

      327,

      3279,

      34,

      3201,

      1987,

      1011,

      291,
      -1,

      2501,

      2681,

      601,

      1381,

      3489,

      1969,

      974,

      2345,
      -1,

      3192,

      2645,

      3483,

      1966,

      968,

      3114,

      3867,

      598,

      2639,

      3477,

      1963,

      962,
      -1,

      3960,

      595,

      2633,

      3468,

      3072,

      951,

      264,

      3246,

      2336,

      2624,

      3309,

      3048,

      625,

      3189,

      703,

      2327,

      3435,

      1942,

      916,

      249,

      2267,
      -1,

      2591,

      1651,

      574,

      3039,
      -1,

      3186,

      2318,

      3429,

      1939,

      910,

      246,

      745,

      3183,

      2585,

      3405,

      1927,

      2954,

      237,
      -1,

      2312,

      1918,

      3168,

      228,

      3204,

      4029,

      1915,

      354,

      225,

      1339,

      3036,
      -1,

      2294,

      3372,

      1330,

      2261,

      3147,

      2288,

      1438,

      1327,

      2249,

      673,

      3336,

      3936,

      3033,

      3011,

      1912,

      3951,

      222,

      3330,

      3008,

      3029,

      3834,

      2948,

      3243,

      3005,

      3324,

      2282,

      2912,

      1324,

      3014,

      664,

      3051,

      3315,
      -1,

      2048,

      1087,

      3930,

      2480,

      2057,

      688,

      357,

      3957,

      1126,

      2738,

      2999,

      2414,

      2780,

      1429,

      2243,

      4062,

      727,

      1447,

      3828,
      -1,

      2042,

      1081,

      3912,

      2468,

      71,

      1996,

      1029,

      300,

      1639,

      3237,

      2699,

      2402,

      2906,

      1417,

      3585,

      2207,

      1249,
      -1,

      736,

      129,

      3534,

      1840,

      3765,

      1558,

      592,

      77,

      1633,

      1789,

      3714,

      1507,

      3969,

      589,

      2429,
      -1, -1,

      3906,

      730,
      -1,

      345,

      2471,

      74,
      -1,

      3234,

      3522,

      2540,

      586,

      450,

      2405,

      3198,

      1420,

      1777,

      3702,

      1495,

      3516,
      -1, -1,

      447,

      3180,

      2081,

      1108,

      1771,

      3696,

      1489,

      2762,

      3177,

      3510,
      -1,

      2528,

      444,
      -1,

      1177,

      3174,

      1765,

      3690,

      1483,

      1699,

      3624,

      2522,

      565,

      3450,

      3081,

      931,

      255,

      556,
      -1,

      2606,

      3045,

      679,

      553,

      2516,
      -1,

      3153,

      432,

      1693,

      3618,

      3026,

      1741,

      3666,

      1459,
      -1,

      1186,

      2423,

      3023,

      795,

      3150,

      1717,

      3642,
      -1,

      550,

      3020,

      2489,

      3141,

      2147,

      2492,

      421,

      820,

      3132,

      2843,

      1720,

      3645,

      1450,

      3129,
      -1, -1,

      2123,

      1165,

      408,

      676,

      823,

      2819,

      1672,

      682,

      2045,

      1084,

      3963,

      2474,

      3459,

      1954,

      941,
      -1,

      770,

      3126,

      2615,

      2408,

      3462,

      1423,

      944,

      261,

      721,
      -1,

      2618,
      -1,

      628,

      3954,

      3411,

      1930,

      2321,

      240,

      1026,
      -1,

      3399,

      1924,

      2696,

      234,

      3252,
      -1,

      4056,

      3282,

      1342,
      -1,

      3417,

      1933,

      896,

      3942,

      1336,
      -1,

      2573,

      405,

      2126,

      1168,

      4014,

      1663,

      2300,

      2822,

      1678,

      3207,
      -1,

      3615,

      2222,

      1264,

      493,

      759,

      156,

      3855,

      779,
      -1,

      3609,

      2219,

      1261,

      490,
      -1,

      150,

      3087,

      3849,

      890,

      1582,
      -1, -1, -1,

      3945,

      1117,

      375,

      3588,
      -1,

      2771,

      3843,

      3240,

      132,

      3777,

      1843,

      3768,

      1561,

      3504,

      3054,

      990,

      3576,

      2438,

      577,

      2660,

      881,

      120,

      2888,

      1831,

      3756,

      1549,

      3570,

      3771,

      3387,

      3267,

      3819,

      114,

      2885,

      1825,

      3750,

      1543,

      3558,
      -1, -1,

      3795,
      -1,

      102,

      3546,

      1813,

      3738,

      1531,
      -1,

      89,

      3540,

      1801,

      3726,

      1519,

      3798,

      83,

      3528,

      1795,

      3720,

      1513,
      -1, -1,

      2564,

      1783,

      3708,

      1501,

      441,
      -1,

      2552,

      3111,

      1759,

      3684,

      1477,

      3456,

      2546,

      937,

      258,

      580,

      438,

      2612,

      2534,
      -1,

      1753,

      3678,

      1471,

      583,

      435,

      2510,

      1195,

      429,

      1747,

      3672,

      1465,

      1735,

      3660,

      568,

      3351,

      3306,

      3948,

      2504,

      4059,

      562,
      -1,

      839,

      1999,

      1035,

      303,

      2498,
      -1,

      2705,

      3165,

      571,
      -1,

      4026,

      2156,

      1198,
      -1,

      1192,

      425,

      2852,

      1738,

      3663,

      1729,

      3654,

      2153,
      -1,

      4020,
      -1,

      3144,

      2849,

      1732,

      3657,

      833,

      3996,

      3138,

      3453,

      1951,

      934,

      3978,

      2150,

      836,

      2609,

      2144,

      3972,

      2846,

      1726,

      3651,

      2840,

      1714,

      3639,
      -1,

      1183,

      417,
      -1,

      2141,

      830,

      1711,

      3636,

      817,

      2837,

      1708,

      3633,

      2138,

      3966,
      -1, -1,

      813,

      2834,

      1702,

      3627,

      810,

      2132,

      1174,

      414,

      2135,
      -1,

      2828,

      1690,

      803,

      2831,

      1696,

      3621,

      3273,

      2129,

      1171,

      411,
      -1,

      792,

      2825,

      1684,

      799,

      2120,

      1162,

      15,

      2717,
      -1,

      2816,

      1666,
      -1,

      786,

      2369,
      -1,

      1360,

      2117,

      1159,
      -1,

      3861,

      762,

      2813,

      1660,

      2111,

      1153,

      3498,

      3837,

      984,

      2807,

      1648,
      -1,

      2654,

      755,

      3120,

      2420,

      2105,

      1147,

      396,

      3831,

      742,

      2801,

      1636,

      2093,

      1135,

      390,
      -1,

      3825,

      2789,

      1612,

      3813,

      1858,

      733,

      2087,

      1129,

      384,

      2054,

      1093,

      2783,

      1600,

      2060,

      2735,

      360,
      -1, -1,

      2741,

      3447,

      1948,

      928,

      1441,
      -1,

      1855,

      2603,

      1453,

      2459,

      62,

      2732,

      3816,

      2063,

      3807,

      2447,

      49,

      2393,

      2744,

      1408,
      -1, -1,

      3810,

      2381,

      1180,

      1396,

      3441,

      1945,

      922,

      1705,

      3630,

      4041,

      2597,

      3210,

      1888,
      -1,

      198,

      3804,
      -1,

      807,

      3792,
      -1,

      3345,
      -1,

      1885,

      2264,

      195,

      1300,

      3789,

      2078,

      1105,

      1870,

      3786,

      180,

      2759,

      2258,

      2066,

      1297,

      24,

      2723,

      3780,

      2747,

      2252,

      2951,

      1282,

      3162,
      -1,

      1372,

      1867,
      -1,

      177,

      3057,

      3774,

      2945,

      2465,

      68,

      1864,
      -1,

      174,

      2246,

      2915,

      1279,

      2399,
      -1,

      1414,

      646,

      3582,

      2240,

      4050,

      1276,
      -1,

      126,
      -1,

      1837,

      3762,

      1555,

      4053,

      2909,

      2114,

      1156,

      21,

      2720,
      -1,

      2810,

      1654,

      2903,

      4002,
      -1,

      3564,

      1366,
      -1,

      3885,

      3990,

      108,

      749,

      1819,

      3744,

      1537,

      2108,

      1150,

      3303,
      -1,

      4008,

      2804,

      1642,

      2099,

      1141,
      -1,

      2069,

      1096,

      2795,

      1624,

      3300,

      2750,

      739,

      2096,

      1138,

      2453,

      56,

      3606,

      2792,

      1618,

      2441,

      43,

      147,

      2387,
      -1,

      1402,

      1579,
      -1,

      2375,

      3444,

      1390,

      925,

      252,
      -1,

      887,

      2600,

      3291,

      670,

      685,

      3432,
      -1,

      913,

      3426,

      1120,

      906,

      2588,

      3285,

      2774,

      2582,

      3249,

      3783,

      2315,
      -1,

      3255,

      2309,
      -1,

      3420,

      3933,

      899,

      529,

      3159,

      1114,

      2576,

      3921,
      -1,

      2768,

      402,
      -1,

      2303,

      526,

      1657,

      3258,

      3414,

      1906,

      893,

      216,

      511,
      -1,

      2570,

      655,

      752,

      691,
      -1, -1,

      2297,

      3156,

      1318,

      3084,
      -1, -1,

      1903,

      3090,

      213,

      508,
      -1,

      1897,
      -1,

      207,

      1894,
      -1,

      204,

      505,

      2987,

      1315,

      1882,

      3897,

      192,

      3264,

      1309,

      3093,

      4047,

      1306,

      1876,
      -1,

      186,

      2075,

      1102,

      1294,
      -1,

      2981,

      2756,

      649,

      3939,
      -1,

      2969,

      1288,
      -1,

      2963,
      -1,

      2102,

      1144,

      2072,

      1099,

      2939,

      2798,

      1630,

      2753,

      9,
      -1,

      1014,
      -1,

      2927,

      3,

      2684,

      2363,

      3108,

      1354,

      3891,
      -1,

      2357,

      1008,

      1348,

      3096,

      697,

      2678,

      1002,

      996,

      1032,
      -1,

      2672,

      2666,

      2702,

      3492,
      -1,

      977,

      1020,
      -1, -1,

      2648,

      2690,
      -1, -1,

      4044,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1,

      3297,
      -1,

      3927,
      -1, -1, -1, -1,

      3915,
      -1, -1,

      3294,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,

      3375,
      -1,

      547,
      -1,

      3276,
      -1,

      3099,
      -1, -1, -1, -1,

      3369,
      -1, -1, -1, -1,

      3363,

      3357,
      -1,

      544,
      -1, -1,

      3270,
      -1,

      538,

      3339,

      3381,

      535,
      -1, -1, -1, -1, -1,

      523,
      -1, -1, -1, -1, -1, -1,
      -1,

      517,

      3123,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1,

      3117,
      -1, -1, -1, -1, -1, -1,

      619,
      -1, -1, -1,

      4038,
      -1, -1, -1, -1, -1, -1,

      616,
      -1, -1, -1, -1,

      610,

      604,

      631,
      -1, -1,

      3879,
      -1, -1, -1, -1,

      3873,
      -1, -1,

      4032,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,

      3105,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1,

      3102,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1,

      4035,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1,

      4023,
      -1, -1,

      4017,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1,

      4011,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1,

      4005
    };

  if (0 == 0)
    {
      int key = hash(codes);

      if (key <= MAX_HASH_VALUE)
        {
          int index = wordlist[key];

          if (index >= 0 && onig_codes_cmp(codes, OnigUnicodeFolds1 + index, 1) == 0)
            return index;
        }
    }
  return -1;
}

