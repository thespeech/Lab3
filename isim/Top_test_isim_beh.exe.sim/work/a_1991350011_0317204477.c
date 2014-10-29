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
static const char *ng0 = "C:/Lab3/PC.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1991350011_0317204477_p_0(char *t0)
{
    char t12[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3152);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1032U);
    t9 = *((char **)t4);
    t4 = (t0 + 4752U);
    t10 = (t0 + 4874);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 31;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (31 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t4, t10, t12);
    if (t17 == 1)
        goto LAB11;

LAB12:    t14 = (t0 + 1512U);
    t18 = *((char **)t14);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t8 = t20;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 3232);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);

LAB9:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 4752U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t4, t2, 4);
    t9 = (t12 + 12U);
    t16 = *((unsigned int *)t9);
    t27 = (1U * t16);
    t1 = (32U != t27);
    if (t1 == 1)
        goto LAB14;

LAB15:    t10 = (t0 + 3296);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t5, 32U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(42, ng0);
    t14 = (t0 + 4906);
    t22 = (t0 + 3232);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 32U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_size_not_matching(32U, t27, 0);
    goto LAB15;

}


extern void work_a_1991350011_0317204477_init()
{
	static char *pe[] = {(void *)work_a_1991350011_0317204477_p_0};
	xsi_register_didat("work_a_1991350011_0317204477", "isim/Top_test_isim_beh.exe.sim/work/a_1991350011_0317204477.didat");
	xsi_register_executes(pe);
}
