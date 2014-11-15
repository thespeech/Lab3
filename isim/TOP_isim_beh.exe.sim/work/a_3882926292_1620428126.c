/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Lab3/shifter.vhd";
extern char *IEEE_P_2592010699;



static void work_a_3882926292_1620428126_p_0(char *t0)
{
    char t25[16];
    char t27[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 32U);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5337);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB6:    t5 = (t0 + 5340);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB7:    t8 = (t0 + 5343);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB4;

LAB8:
LAB5:    xsi_set_current_line(108, ng0);

LAB2:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t1 = (t0 + 3472);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5379);
    t3 = (t0 + 3536);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3392);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(54, ng0);
    t11 = (t0 + 1352U);
    t12 = *((char **)t11);
    t13 = (0 - 4);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB19;

LAB21:
LAB20:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB2;

LAB4:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5376);
    t17 = 1;
    if (3U == 3U)
        goto LAB28;

LAB29:    t17 = 0;

LAB30:    if (t17 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = (31 - 31);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t3 = (t0 + 2088U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    *((unsigned char *)t3) = t17;

LAB26:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB37;

LAB39:
LAB38:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB40;

LAB42:
LAB41:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB43;

LAB45:
LAB44:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB46;

LAB48:
LAB47:    goto LAB2;

LAB9:;
LAB10:    xsi_set_current_line(55, ng0);
    t19 = (t0 + 1968U);
    t20 = *((char **)t19);
    t21 = (31 - 30);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t19 = (t20 + t23);
    t26 = ((IEEE_P_2592010699) + 4024);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 30;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - 30);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t19, t27, (char)99, (unsigned char)2, (char)101);
    t29 = (t0 + 1968U);
    t32 = *((char **)t29);
    t29 = (t32 + 0);
    t31 = (31U + 1U);
    memcpy(t29, t24, t31);
    goto LAB11;

LAB13:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 29);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = (t0 + 5346);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t27 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 29;
    t19 = (t12 + 4U);
    *((int *)t19) = 0;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t7 = (0 - 29);
    t31 = (t7 * -1);
    t31 = (t31 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t31;
    t19 = (t33 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 1;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (1 - 0);
    t31 = (t10 * 1);
    t31 = (t31 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t31;
    t9 = xsi_base_array_concat(t9, t25, t11, (char)97, t3, t27, (char)97, t6, t33, (char)101);
    t20 = (t0 + 1968U);
    t24 = *((char **)t20);
    t20 = (t24 + 0);
    t31 = (30U + 2U);
    memcpy(t20, t9, t31);
    goto LAB14;

LAB16:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 27);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = (t0 + 5348);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t27 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 27;
    t19 = (t12 + 4U);
    *((int *)t19) = 0;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t7 = (0 - 27);
    t31 = (t7 * -1);
    t31 = (t31 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t31;
    t19 = (t33 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 3;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (3 - 0);
    t31 = (t10 * 1);
    t31 = (t31 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t31;
    t9 = xsi_base_array_concat(t9, t25, t11, (char)97, t3, t27, (char)97, t6, t33, (char)101);
    t20 = (t0 + 1968U);
    t24 = *((char **)t20);
    t20 = (t24 + 0);
    t31 = (28U + 4U);
    memcpy(t20, t9, t31);
    goto LAB17;

LAB19:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 23);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = (t0 + 5352);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t27 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 23;
    t19 = (t12 + 4U);
    *((int *)t19) = 0;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t7 = (0 - 23);
    t31 = (t7 * -1);
    t31 = (t31 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t31;
    t19 = (t33 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 7;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (7 - 0);
    t31 = (t10 * 1);
    t31 = (t31 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t31;
    t9 = xsi_base_array_concat(t9, t25, t11, (char)97, t3, t27, (char)97, t6, t33, (char)101);
    t20 = (t0 + 1968U);
    t24 = *((char **)t20);
    t20 = (t24 + 0);
    t31 = (24U + 8U);
    memcpy(t20, t9, t31);
    goto LAB20;

LAB22:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 15);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = (t0 + 5360);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t27 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 15;
    t19 = (t12 + 4U);
    *((int *)t19) = 0;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t7 = (0 - 15);
    t31 = (t7 * -1);
    t31 = (t31 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t31;
    t19 = (t33 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 15;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (15 - 0);
    t31 = (t10 * 1);
    t31 = (t31 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t31;
    t9 = xsi_base_array_concat(t9, t25, t11, (char)97, t3, t27, (char)97, t6, t33, (char)101);
    t20 = (t0 + 1968U);
    t24 = *((char **)t20);
    t20 = (t24 + 0);
    t31 = (16U + 16U);
    memcpy(t20, t9, t31);
    goto LAB23;

LAB25:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 2088U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)2;
    goto LAB26;

LAB28:    t14 = 0;

LAB31:    if (t14 < 3U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t5 = (t2 + t14);
    t6 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB29;

LAB33:    t14 = (t14 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 31);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = xsi_get_transient_memory(31U);
    memcpy(t6, t3, 31U);
    t8 = (t0 + 1968U);
    t9 = *((char **)t8);
    t31 = (31 - 30);
    t34 = (t31 * 1U);
    t35 = (0 + t34);
    t8 = (t9 + t35);
    memcpy(t8, t6, 31U);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t17 = *((unsigned char *)t2);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t4 = (31 - 31);
    t14 = (t4 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    *((unsigned char *)t1) = t17;
    goto LAB35;

LAB37:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 31);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = xsi_get_transient_memory(30U);
    memcpy(t6, t3, 30U);
    t8 = (t0 + 1968U);
    t9 = *((char **)t8);
    t31 = (31 - 29);
    t34 = (t31 * 1U);
    t35 = (0 + t34);
    t8 = (t9 + t35);
    memcpy(t8, t6, 30U);
    xsi_set_current_line(91, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    t3 = (t0 + 2088U);
    t5 = *((char **)t3);
    t17 = *((unsigned char *)t5);
    memset(t2, t17, 2U);
    t3 = (t0 + 1968U);
    t6 = *((char **)t3);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t3 = (t6 + t16);
    memcpy(t3, t1, 2U);
    goto LAB38;

LAB40:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 31);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = xsi_get_transient_memory(28U);
    memcpy(t6, t3, 28U);
    t8 = (t0 + 1968U);
    t9 = *((char **)t8);
    t31 = (31 - 27);
    t34 = (t31 * 1U);
    t35 = (0 + t34);
    t8 = (t9 + t35);
    memcpy(t8, t6, 28U);
    xsi_set_current_line(96, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    t3 = (t0 + 2088U);
    t5 = *((char **)t3);
    t17 = *((unsigned char *)t5);
    memset(t2, t17, 4U);
    t3 = (t0 + 1968U);
    t6 = *((char **)t3);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t3 = (t6 + t16);
    memcpy(t3, t1, 4U);
    goto LAB41;

LAB43:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 31);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = xsi_get_transient_memory(24U);
    memcpy(t6, t3, 24U);
    t8 = (t0 + 1968U);
    t9 = *((char **)t8);
    t31 = (31 - 23);
    t34 = (t31 * 1U);
    t35 = (0 + t34);
    t8 = (t9 + t35);
    memcpy(t8, t6, 24U);
    xsi_set_current_line(101, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    t3 = (t0 + 2088U);
    t5 = *((char **)t3);
    t17 = *((unsigned char *)t5);
    memset(t2, t17, 8U);
    t3 = (t0 + 1968U);
    t6 = *((char **)t3);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t3 = (t6 + t16);
    memcpy(t3, t1, 8U);
    goto LAB44;

LAB46:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1968U);
    t5 = *((char **)t3);
    t21 = (31 - 31);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t5 + t23);
    t6 = xsi_get_transient_memory(16U);
    memcpy(t6, t3, 16U);
    t8 = (t0 + 1968U);
    t9 = *((char **)t8);
    t31 = (31 - 15);
    t34 = (t31 * 1U);
    t35 = (0 + t34);
    t8 = (t9 + t35);
    memcpy(t8, t6, 16U);
    xsi_set_current_line(105, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    t3 = (t0 + 2088U);
    t5 = *((char **)t3);
    t17 = *((unsigned char *)t5);
    memset(t2, t17, 16U);
    t3 = (t0 + 1968U);
    t6 = *((char **)t3);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t3 = (t6 + t16);
    memcpy(t3, t1, 16U);
    goto LAB47;

}


extern void work_a_3882926292_1620428126_init()
{
	static char *pe[] = {(void *)work_a_3882926292_1620428126_p_0};
	xsi_register_didat("work_a_3882926292_1620428126", "isim/TOP_isim_beh.exe.sim/work/a_3882926292_1620428126.didat");
	xsi_register_executes(pe);
}
