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
static const char *ng0 = "C:/Users/Bob/Desktop/Lab3/adder.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3081869000_2153311146_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(38, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 32U);
    t3 = (t0 + 4464);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t10 = (t0 + 4336);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3081869000_2153311146_p_1(char *t0)
{
    char t1[16];
    char t2[16];
    char t5[16];
    char t8[16];
    char t15[16];
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 6512U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)99, (unsigned char)2, (char)97, t4, t7, (char)101);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t9 = (t0 + 6576U);
    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t11 = (t0 + 6528U);
    t13 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t8, t10, t9, t12, t11);
    t16 = ((IEEE_P_2592010699) + 4024);
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t13, t8, (char)101);
    t17 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t2, t3, t5, t14, t15);
    t18 = (t0 + 1352U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t18 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t1, t17, t2, t20);
    t21 = (t1 + 12U);
    t22 = *((unsigned int *)t21);
    t23 = (1U * t22);
    t24 = (33U != t23);
    if (t24 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 4528);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t18, 33U);
    xsi_driver_first_trans_fast(t25);

LAB2:    t30 = (t0 + 4352);
    *((int *)t30) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t23, 0);
    goto LAB6;

}

static void work_a_3081869000_2153311146_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(40, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (32 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 4592);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 4368);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3081869000_2153311146_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (32 - 32);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4656);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4384);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3081869000_2153311146_init()
{
	static char *pe[] = {(void *)work_a_3081869000_2153311146_p_0,(void *)work_a_3081869000_2153311146_p_1,(void *)work_a_3081869000_2153311146_p_2,(void *)work_a_3081869000_2153311146_p_3};
	xsi_register_didat("work_a_3081869000_2153311146", "isim/test_mips_isim_beh.exe.sim/work/a_3081869000_2153311146.didat");
	xsi_register_executes(pe);
}
