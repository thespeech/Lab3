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
static const char *ng0 = "C:/Lab3/TOP.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3823007873_3783779014_p_0(char *t0)
{
    char t6[16];
    char t15[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 11448U);
    t4 = (t0 + 28152);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 31;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (31 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t24 = (t0 + 8128);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 7904);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 8128);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB2;

LAB5:    t8 = (t0 + 2152U);
    t12 = *((char **)t8);
    t8 = (t0 + 11448U);
    t13 = (t0 + 28184);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 31;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (31 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3823007873_3783779014_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11448U);
    t3 = (t0 + 28216);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 31;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (31 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 8192);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 7920);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 8192);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3823007873_3783779014_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11448U);
    t3 = (t0 + 28248);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 31;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (31 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 8256);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 7936);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 8256);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3823007873_3783779014_p_3(char *t0)
{
    char t26[16];
    char t28[16];
    char t52[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;

LAB0:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t40 = (t0 + 2472U);
    t41 = *((char **)t40);
    t42 = *((unsigned char *)t41);
    t43 = (t42 == (unsigned char)3);
    if (t43 == 1)
        goto LAB15;

LAB16:    t39 = (unsigned char)0;

LAB17:    if (t39 != 0)
        goto LAB13;

LAB14:
LAB18:    t66 = xsi_get_transient_memory(32U);
    memset(t66, 0, 32U);
    t67 = t66;
    memset(t67, (unsigned char)2, 32U);
    t68 = (t0 + 8320);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memcpy(t72, t66, 32U);
    xsi_driver_first_trans_fast(t68);

LAB2:    t73 = (t0 + 7952);
    *((int *)t73) = 1;

LAB1:    return;
LAB3:    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t9 = t2;
    t10 = (t0 + 4128U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t13 = (t12 - 1);
    if (-1 == 1)
        goto LAB8;

LAB9:    t14 = 0;

LAB10:    t15 = (t14 - 0);
    t16 = (t15 * 1);
    t17 = (1U * t16);
    t10 = (t9 + t17);
    t18 = (t0 + 4128U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t24 = (1U * t23);
    memset(t10, (unsigned char)2, t24);
    t18 = (t0 + 1032U);
    t25 = *((char **)t18);
    t27 = ((IEEE_P_2592010699) + 4024);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 0;
    t30 = (t29 + 4U);
    *((int *)t30) = 15;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t31 = (15 - 0);
    t32 = (t31 * 1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t0 + 11368U);
    t18 = xsi_base_array_concat(t18, t26, t27, (char)97, t2, t28, (char)97, t25, t30, (char)101);
    t32 = (16U + 16U);
    t33 = (32U != t32);
    if (t33 == 1)
        goto LAB11;

LAB12:    t34 = (t0 + 8320);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t18, 32U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t2 = (t0 + 3112U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    t14 = t13;
    goto LAB10;

LAB11:    xsi_size_not_matching(32U, t32, 0);
    goto LAB12;

LAB13:    t40 = (t0 + 3592U);
    t47 = *((char **)t40);
    t40 = (t0 + 2152U);
    t48 = *((char **)t40);
    t49 = (31 - 9);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t40 = (t48 + t51);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 9;
    t54 = (t53 + 4U);
    *((int *)t54) = 2;
    t54 = (t53 + 8U);
    *((int *)t54) = -1;
    t55 = (2 - 9);
    t56 = (t55 * -1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t57 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t40, t52);
    t58 = (t57 - 0);
    t56 = (t58 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t57);
    t59 = (32U * t56);
    t60 = (0 + t59);
    t54 = (t47 + t60);
    t61 = (t0 + 8320);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memcpy(t65, t54, 32U);
    xsi_driver_first_trans_fast(t61);
    goto LAB2;

LAB15:    t40 = (t0 + 2792U);
    t44 = *((char **)t40);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)3);
    t39 = t46;
    goto LAB17;

LAB19:    goto LAB2;

}

static void work_a_3823007873_3783779014_p_4(char *t0)
{
    char t12[16];
    char t14[16];
    char t19[16];
    char t23[16];
    char t32[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t20;
    int t21;
    char *t24;
    char *t25;
    int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t8 = (31 - 1);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 31;
    t16 = (t15 + 4U);
    *((int *)t16) = 10;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (10 - 31);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t19 + 0U);
    t20 = (t16 + 0U);
    *((int *)t20) = 1;
    t20 = (t16 + 4U);
    *((int *)t20) = 0;
    t20 = (t16 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 1);
    t18 = (t21 * -1);
    t18 = (t18 + 1);
    t20 = (t16 + 12U);
    *((unsigned int *)t20) = t18;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)97, t1, t14, (char)97, t6, t19, (char)101);
    t20 = (t0 + 28280);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 23;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (23 - 0);
    t18 = (t26 * 1);
    t18 = (t18 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t18;
    t27 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t11, t12, t20, t23);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB5:    t46 = (t0 + 28304);
    t48 = (t0 + 8384);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t46, 32U);
    xsi_driver_first_trans_fast(t48);

LAB2:    t53 = (t0 + 7968);
    *((int *)t53) = 1;

LAB1:    return;
LAB3:    t25 = (t0 + 4248U);
    t28 = *((char **)t25);
    t25 = (t0 + 1672U);
    t29 = *((char **)t25);
    t18 = (31 - 9);
    t30 = (t18 * 1U);
    t31 = (0 + t30);
    t25 = (t29 + t31);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 9;
    t34 = (t33 + 4U);
    *((int *)t34) = 2;
    t34 = (t33 + 8U);
    *((int *)t34) = -1;
    t35 = (2 - 9);
    t36 = (t35 * -1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t37 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t25, t32);
    t38 = (t37 - 0);
    t36 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t37);
    t39 = (32U * t36);
    t40 = (0 + t39);
    t34 = (t28 + t40);
    t41 = (t0 + 8384);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t34, 32U);
    xsi_driver_first_trans_fast(t41);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3823007873_3783779014_p_5(char *t0)
{
    char t14[16];
    char t16[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(177, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (22 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t10 = (31 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t8 = (t9 + t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 7;
    t18 = (t17 + 4U);
    *((int *)t18) = 2;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (2 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t13 = xsi_base_array_concat(t13, t14, t15, (char)99, t7, (char)97, t8, t16, (char)101);
    t20 = (1U + 6U);
    t21 = (7U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 8448);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 7U);
    xsi_driver_first_trans_delta(t18, 1U, 7U, 0LL);

LAB2:    t26 = (t0 + 7984);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t20, 0);
    goto LAB6;

}

static void work_a_3823007873_3783779014_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(178, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8512);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 8000);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3823007873_3783779014_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 3392U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8016);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(186, ng0);
    t4 = (t0 + 2632U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3432U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 2312U);
    t15 = *((char **)t4);
    t4 = (t0 + 4008U);
    t16 = *((char **)t4);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (31 - t18);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t4 = (t15 + t21);
    t22 = (t0 + 8576);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t4, 8U);
    xsi_driver_first_trans_delta(t22, 8U, 8U, 0LL);
    goto LAB9;

LAB11:    t4 = (t0 + 2952U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;
    goto LAB13;

}

static void work_a_3823007873_3783779014_p_8(char *t0)
{
    char t20[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 3392U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8032);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(198, ng0);
    t4 = (t0 + 2632U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3432U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(199, ng0);
    t4 = (t0 + 2312U);
    t15 = *((char **)t4);
    t4 = (t0 + 2152U);
    t16 = *((char **)t4);
    t17 = (31 - 9);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t16 + t19);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 9;
    t22 = (t21 + 4U);
    *((int *)t22) = 2;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (2 - 9);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t25 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t20);
    t26 = (t25 - 0);
    t24 = (t26 * 1);
    t27 = (32U * t24);
    t28 = (0U + t27);
    t22 = (t0 + 8640);
    t29 = (t22 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t15, 32U);
    xsi_driver_first_trans_delta(t22, t28, 32U, 0LL);
    goto LAB9;

LAB11:    t4 = (t0 + 2792U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;
    goto LAB13;

}

static void work_a_3823007873_3783779014_p_9(char *t0)
{
    char t8[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    int t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 1472U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8048);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(211, ng0);
    t4 = (t0 + 4368U);
    t9 = *((char **)t4);
    t4 = (t0 + 11528U);
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t9, t4, 1);
    t11 = (t0 + 4368U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t8 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    memcpy(t11, t10, t15);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 4368U);
    t4 = *((char **)t2);
    t2 = (t0 + 3888U);
    t5 = *((char **)t2);
    t16 = *((int *)t5);
    t17 = (t16 - 1);
    t14 = (t17 * -1);
    t15 = (1U * t14);
    t18 = (0 + t15);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t9 = (t0 + 8704);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB5:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_3823007873_3783779014_init()
{
	static char *pe[] = {(void *)work_a_3823007873_3783779014_p_0,(void *)work_a_3823007873_3783779014_p_1,(void *)work_a_3823007873_3783779014_p_2,(void *)work_a_3823007873_3783779014_p_3,(void *)work_a_3823007873_3783779014_p_4,(void *)work_a_3823007873_3783779014_p_5,(void *)work_a_3823007873_3783779014_p_6,(void *)work_a_3823007873_3783779014_p_7,(void *)work_a_3823007873_3783779014_p_8,(void *)work_a_3823007873_3783779014_p_9};
	xsi_register_didat("work_a_3823007873_3783779014", "isim/TOP_isim_beh.exe.sim/work/a_3823007873_3783779014.didat");
	xsi_register_executes(pe);
}
