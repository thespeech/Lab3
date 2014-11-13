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
static const char *ng0 = "C:/Users/Andre/Documents/GitHub/Lab3/wrapper.vhd";



static void work_a_3446218622_1831966983_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 5576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5480);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3446218622_1831966983_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t12;
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

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3688U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 3U);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (8 - 5);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 6U);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 3928U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((unsigned char *)t1) = t8;
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5640);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5704);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 5768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t8;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)2);
    if (t11 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB51;

LAB52:
LAB3:    t1 = (t0 + 5496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3688U);
    t6 = *((char **)t1);
    t1 = (t0 + 9331);
    t12 = xsi_mem_cmp(t1, t6, 3U);
    if (t12 == 1)
        goto LAB6;

LAB11:    t9 = (t0 + 9334);
    t13 = xsi_mem_cmp(t9, t6, 3U);
    if (t13 == 1)
        goto LAB7;

LAB12:    t14 = (t0 + 9337);
    t16 = xsi_mem_cmp(t14, t6, 3U);
    if (t16 == 1)
        goto LAB8;

LAB13:    t17 = (t0 + 9340);
    t19 = xsi_mem_cmp(t17, t6, 3U);
    if (t19 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(185, ng0);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(116, ng0);
    t20 = (t0 + 9343);
    t22 = (t0 + 5832);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 6U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB7:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 9349);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t0 + 9355);
    t12 = xsi_mem_cmp(t1, t2, 6U);
    if (t12 == 1)
        goto LAB17;

LAB34:    t7 = (t0 + 9361);
    t13 = xsi_mem_cmp(t7, t2, 6U);
    if (t13 == 1)
        goto LAB18;

LAB35:    t10 = (t0 + 9367);
    t16 = xsi_mem_cmp(t10, t2, 6U);
    if (t16 == 1)
        goto LAB19;

LAB36:    t15 = (t0 + 9373);
    t19 = xsi_mem_cmp(t15, t2, 6U);
    if (t19 == 1)
        goto LAB20;

LAB37:    t18 = (t0 + 9379);
    t27 = xsi_mem_cmp(t18, t2, 6U);
    if (t27 == 1)
        goto LAB21;

LAB38:    t21 = (t0 + 9385);
    t28 = xsi_mem_cmp(t21, t2, 6U);
    if (t28 == 1)
        goto LAB22;

LAB39:    t23 = (t0 + 9391);
    t29 = xsi_mem_cmp(t23, t2, 6U);
    if (t29 == 1)
        goto LAB23;

LAB40:    t25 = (t0 + 9397);
    t30 = xsi_mem_cmp(t25, t2, 6U);
    if (t30 == 1)
        goto LAB24;

LAB41:    t31 = (t0 + 9403);
    t33 = xsi_mem_cmp(t31, t2, 6U);
    if (t33 == 1)
        goto LAB25;

LAB42:    t34 = (t0 + 9409);
    t36 = xsi_mem_cmp(t34, t2, 6U);
    if (t36 == 1)
        goto LAB26;

LAB43:    t37 = (t0 + 9415);
    t39 = xsi_mem_cmp(t37, t2, 6U);
    if (t39 == 1)
        goto LAB27;

LAB44:    t40 = (t0 + 9421);
    t42 = xsi_mem_cmp(t40, t2, 6U);
    if (t42 == 1)
        goto LAB28;

LAB45:    t43 = (t0 + 9427);
    t45 = xsi_mem_cmp(t43, t2, 6U);
    if (t45 == 1)
        goto LAB29;

LAB46:    t46 = (t0 + 9433);
    t48 = xsi_mem_cmp(t46, t2, 6U);
    if (t48 == 1)
        goto LAB30;

LAB47:    t49 = (t0 + 9439);
    t51 = xsi_mem_cmp(t49, t2, 6U);
    if (t51 == 1)
        goto LAB31;

LAB48:    t52 = (t0 + 9445);
    t54 = xsi_mem_cmp(t52, t2, 6U);
    if (t54 == 1)
        goto LAB32;

LAB49:
LAB33:    xsi_set_current_line(178, ng0);

LAB16:    goto LAB5;

LAB9:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 9541);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB15:;
LAB17:    xsi_set_current_line(128, ng0);
    t55 = (t0 + 5896);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    *((unsigned char *)t59) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t55);
    goto LAB16;

LAB18:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 9451);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB19:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 9457);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB20:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 9463);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB21:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 9469);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB22:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 9475);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB23:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 9481);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB24:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 9487);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB25:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 9493);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB26:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 9499);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB27:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 9505);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB28:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 9511);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB29:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 9517);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB30:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 9523);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB31:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 9529);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB32:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 9535);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB50:;
LAB51:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 3688U);
    t6 = *((char **)t1);
    t1 = (t0 + 9547);
    t12 = xsi_mem_cmp(t1, t6, 3U);
    if (t12 == 1)
        goto LAB54;

LAB57:    t9 = (t0 + 9550);
    t13 = xsi_mem_cmp(t9, t6, 3U);
    if (t13 == 1)
        goto LAB55;

LAB58:
LAB56:    xsi_set_current_line(196, ng0);

LAB53:    goto LAB3;

LAB54:    xsi_set_current_line(191, ng0);
    t14 = (t0 + 9553);
    t17 = (t0 + 5832);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t14, 6U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(192, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB53;

LAB55:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 9559);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 5896);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB53;

LAB59:;
}


extern void work_a_3446218622_1831966983_init()
{
	static char *pe[] = {(void *)work_a_3446218622_1831966983_p_0,(void *)work_a_3446218622_1831966983_p_1};
	xsi_register_didat("work_a_3446218622_1831966983", "isim/test_mips_isim_beh.exe.sim/work/a_3446218622_1831966983.didat");
	xsi_register_executes(pe);
}
