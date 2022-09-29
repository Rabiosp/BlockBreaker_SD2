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
static const char *ng0 = "C:/Users/user/MIPS_Spartan6MimasV2/MIPS_2020/md_io.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2466118607_3212880686_p_0(char *t0)
{
    char t17[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t10 = (t0 + 4232U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB5;

LAB6:
LAB9:    t30 = xsi_get_transient_memory(32U);
    memset(t30, 0, 32U);
    t31 = t30;
    memset(t31, (unsigned char)2, 32U);
    t32 = (t0 + 6112);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t30, 32U);
    xsi_driver_first_trans_fast_port(t32);

LAB2:    t37 = (t0 + 6032);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t1 = (t0 + 6112);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    t10 = (t0 + 10004);
    t15 = (t0 + 4552U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 25;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (25 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t0 + 9860U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)97, t10, t19, (char)97, t16, t21, (char)101);
    t23 = (26U + 6U);
    t24 = (32U != t23);
    if (t24 == 1)
        goto LAB7;

LAB8:    t25 = (t0 + 6112);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t15, 32U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB2;

LAB7:    xsi_size_not_matching(32U, t23, 0);
    goto LAB8;

LAB10:    goto LAB2;

}


extern void work_a_2466118607_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2466118607_3212880686_p_0};
	xsi_register_didat("work_a_2466118607_3212880686", "isim/mips_tb2_isim_beh.exe.sim/work/a_2466118607_3212880686.didat");
	xsi_register_executes(pe);
}
