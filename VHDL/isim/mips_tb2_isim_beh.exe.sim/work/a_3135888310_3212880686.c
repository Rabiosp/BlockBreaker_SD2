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
static const char *ng0 = "C:/Users/user/MIPS_Spartan6MimasV2/MIPS_2020/exten_signo_cero.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2045698577_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3410769178_1035706684(char *, char *, char *, char *, int );


static void work_a_3135888310_3212880686_p_0(char *t0)
{
    char t5[16];
    char t17[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)2);
    if (t16 != 0)
        goto LAB5;

LAB6:
LAB7:    t25 = (t0 + 4661);
    t27 = (t0 + 2912);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t25, 32U);
    xsi_driver_first_trans_fast_port(t27);

LAB2:    t32 = (t0 + 2832);
    *((int *)t32) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1032U);
    t6 = *((char **)t1);
    t1 = (t0 + 4604U);
    t7 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t5, t6, t1, 32);
    t8 = (t0 + 2912);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t7, 32U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t13 = (t0 + 1032U);
    t18 = *((char **)t13);
    t13 = (t0 + 4604U);
    t19 = ieee_p_1242562249_sub_3410769178_1035706684(IEEE_P_1242562249, t17, t18, t13, 32);
    t20 = (t0 + 2912);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t19, 32U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB2;

LAB8:    goto LAB2;

}


extern void work_a_3135888310_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3135888310_3212880686_p_0};
	xsi_register_didat("work_a_3135888310_3212880686", "isim/mips_tb2_isim_beh.exe.sim/work/a_3135888310_3212880686.didat");
	xsi_register_executes(pe);
}
