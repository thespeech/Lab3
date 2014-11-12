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
static const char *ng0 = "C:/Users/Bob/Desktop/Lab3/wrapper.vhd";



static void work_a_3446218622_1831966983_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    int t30;
    char *t31;
    int t33;
    char *t34;
    int t36;
    char *t37;
    int t39;
    char *t40;
    int t42;
    char *t43;
    int t45;
    char *t46;
    int t48;
    char *t49;
    int t51;
    char *t52;
    int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 1928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 3U);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (8 - 5);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 6U);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 2168U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((unsigned char *)t1) = t8;
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB51;

LAB52:
LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1928U);
    t6 = *((char **)t1);
    t1 = (t0 + 5652);
    t10 = xsi_mem_cmp(t1, t6, 3U);
    if (t10 == 1)
        goto LAB6;

LAB11:    t11 = (t0 + 5655);
    t13 = xsi_mem_cmp(t11, t6, 3U);
    if (t13 == 1)
        goto LAB7;

LAB12:    t14 = (t0 + 5658);
    t16 = xsi_mem_cmp(t14, t6, 3U);
    if (t16 == 1)
        goto LAB8;

LAB13:    t17 = (t0 + 5661);
    t19 = xsi_mem_cmp(t17, t6, 3U);
    if (t19 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(138, ng0);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(70, ng0);
    t20 = (t0 + 5664);
    t22 = (t0 + 3552);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 6U);
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB7:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5670);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t1 = (t0 + 5676);
    t10 = xsi_mem_cmp(t1, t2, 6U);
    if (t10 == 1)
        goto LAB17;

LAB34:    t7 = (t0 + 5682);
    t13 = xsi_mem_cmp(t7, t2, 6U);
    if (t13 == 1)
        goto LAB18;

LAB35:    t12 = (t0 + 5688);
    t16 = xsi_mem_cmp(t12, t2, 6U);
    if (t16 == 1)
        goto LAB19;

LAB36:    t15 = (t0 + 5694);
    t19 = xsi_mem_cmp(t15, t2, 6U);
    if (t19 == 1)
        goto LAB20;

LAB37:    t18 = (t0 + 5700);
    t27 = xsi_mem_cmp(t18, t2, 6U);
    if (t27 == 1)
        goto LAB21;

LAB38:    t21 = (t0 + 5706);
    t28 = xsi_mem_cmp(t21, t2, 6U);
    if (t28 == 1)
        goto LAB22;

LAB39:    t23 = (t0 + 5712);
    t29 = xsi_mem_cmp(t23, t2, 6U);
    if (t29 == 1)
        goto LAB23;

LAB40:    t25 = (t0 + 5718);
    t30 = xsi_mem_cmp(t25, t2, 6U);
    if (t30 == 1)
        goto LAB24;

LAB41:    t31 = (t0 + 5724);
    t33 = xsi_mem_cmp(t31, t2, 6U);
    if (t33 == 1)
        goto LAB25;

LAB42:    t34 = (t0 + 5730);
    t36 = xsi_mem_cmp(t34, t2, 6U);
    if (t36 == 1)
        goto LAB26;

LAB43:    t37 = (t0 + 5736);
    t39 = xsi_mem_cmp(t37, t2, 6U);
    if (t39 == 1)
        goto LAB27;

LAB44:    t40 = (t0 + 5742);
    t42 = xsi_mem_cmp(t40, t2, 6U);
    if (t42 == 1)
        goto LAB28;

LAB45:    t43 = (t0 + 5748);
    t45 = xsi_mem_cmp(t43, t2, 6U);
    if (t45 == 1)
        goto LAB29;

LAB46:    t46 = (t0 + 5754);
    t48 = xsi_mem_cmp(t46, t2, 6U);
    if (t48 == 1)
        goto LAB30;

LAB47:    t49 = (t0 + 5760);
    t51 = xsi_mem_cmp(t49, t2, 6U);
    if (t51 == 1)
        goto LAB31;

LAB48:    t52 = (t0 + 5766);
    t54 = xsi_mem_cmp(t52, t2, 6U);
    if (t54 == 1)
        goto LAB32;

LAB49:
LAB33:    xsi_set_current_line(131, ng0);

LAB16:    goto LAB5;

LAB9:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5862);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB15:;
LAB17:    xsi_set_current_line(81, ng0);
    t55 = (t0 + 3616);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    *((unsigned char *)t59) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t55);
    goto LAB16;

LAB18:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5772);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB19:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5778);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB20:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5784);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB21:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5790);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB22:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5796);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB23:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5802);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB24:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5808);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB25:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5814);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB26:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5820);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB27:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5826);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB28:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5832);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB29:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5838);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB30:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 5844);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB31:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5850);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB32:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 5856);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB50:;
LAB51:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1928U);
    t6 = *((char **)t1);
    t1 = (t0 + 5868);
    t10 = xsi_mem_cmp(t1, t6, 3U);
    if (t10 == 1)
        goto LAB54;

LAB57:    t11 = (t0 + 5871);
    t13 = xsi_mem_cmp(t11, t6, 3U);
    if (t13 == 1)
        goto LAB55;

LAB58:
LAB56:    xsi_set_current_line(149, ng0);

LAB53:    goto LAB3;

LAB54:    xsi_set_current_line(144, ng0);
    t14 = (t0 + 5874);
    t17 = (t0 + 3552);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t14, 6U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB53;

LAB55:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 5880);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB53;

LAB59:;
}


extern void work_a_3446218622_1831966983_init()
{
	static char *pe[] = {(void *)work_a_3446218622_1831966983_p_0};
	xsi_register_didat("work_a_3446218622_1831966983", "isim/Top_test_isim_beh.exe.sim/work/a_3446218622_1831966983.didat");
	xsi_register_executes(pe);
}
