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
static const char *ng0 = "C:/Users/user/MIPS_Spartan6MimasV2/MIPS_2020/entrada.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0540126715_3212880686_p_0(char *t0)
{
    char t5[16];
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t4 = *((unsigned char *)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 4748U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)97, t2, t7, (char)99, t4, (char)101);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t1, t5, (char)99, t10, (char)101);
    t13 = (4U + 1U);
    t14 = (t13 + 1U);
    t15 = (6U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 3072);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 6U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 2992);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, t14, 0);
    goto LAB6;

}


extern void work_a_0540126715_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0540126715_3212880686_p_0};
	xsi_register_didat("work_a_0540126715_3212880686", "isim/mips_tb2_isim_beh.exe.sim/work/a_0540126715_3212880686.didat");
	xsi_register_executes(pe);
}
