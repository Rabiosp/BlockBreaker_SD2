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
static const char *ng0 = "C:/Users/user/MIPS_Spartan6MimasV2/MIPS_2020/alu_parcial.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2720006528_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_4006925168_3212880686_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7293);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB13:    t21 = (t0 + 1192U);
    t22 = *((char **)t21);
    t21 = (t0 + 4504);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t22, 32U);
    xsi_driver_first_trans_fast(t21);

LAB2:    t27 = (t0 + 4376);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t9 = (t0 + 7024U);
    t11 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t8, t10, t9);
    t12 = (t8 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (32U != t14);
    if (t15 == 1)
        goto LAB11;

LAB12:    t16 = (t0 + 4504);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 32U);
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_size_not_matching(32U, t14, 0);
    goto LAB12;

LAB14:    goto LAB2;

}

static void work_a_4006925168_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7297);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t15 = (t0 + 7302);
    t17 = (t0 + 4568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 1U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 4392);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 7301);
    t10 = (t0 + 4568);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 1U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_4006925168_3212880686_p_2(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 7008U);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 7072U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t2, t4, t3, t6, t5);
    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t8 = (t0 + 7088U);
    t10 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t7, t2, t9, t8);
    t11 = (t0 + 4632);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 4408);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4006925168_3212880686_p_3(char *t0)
{
    char t32[16];
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
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7303);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB11:    t5 = (t0 + 7307);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB3;

LAB12:    t8 = (t0 + 7311);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB4;

LAB13:    t11 = (t0 + 7315);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB5;

LAB14:    t14 = (t0 + 7319);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB6;

LAB15:    t17 = (t0 + 7323);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB7;

LAB16:    t20 = (t0 + 7327);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB8;

LAB17:    t23 = (t0 + 7331);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB9;

LAB18:
LAB10:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 7463);
    t3 = (t0 + 4696);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4424);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(63, ng0);
    t26 = (t0 + 1672U);
    t27 = *((char **)t26);
    t26 = (t0 + 4696);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t27, 32U);
    xsi_driver_first_trans_fast(t26);
    goto LAB2;

LAB4:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7024U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (32U != t34);
    if (t35 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 4696);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7024U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (32U != t34);
    if (t35 == 1)
        goto LAB22;

LAB23:    t9 = (t0 + 4696);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7024U);
    t35 = ieee_p_1242562249_sub_2720006528_1035706684(IEEE_P_1242562249, t2, t1, t5, t3);
    if (t35 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 7367);
    t3 = (t0 + 4696);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7024U);
    t35 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t5, t3);
    if (t35 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 7431);
    t3 = (t0 + 4696);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB28:    goto LAB2;

LAB8:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7024U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (32U != t34);
    if (t35 == 1)
        goto LAB30;

LAB31:    t9 = (t0 + 4696);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7024U);
    t6 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (32U != t34);
    if (t35 == 1)
        goto LAB32;

LAB33:    t9 = (t0 + 4696);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB19:;
LAB20:    xsi_size_not_matching(32U, t34, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(32U, t34, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(72, ng0);
    t6 = (t0 + 7335);
    t9 = (t0 + 4696);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB25;

LAB27:    xsi_set_current_line(80, ng0);
    t6 = (t0 + 7399);
    t9 = (t0 + 4696);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB28;

LAB30:    xsi_size_not_matching(32U, t34, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(32U, t34, 0);
    goto LAB33;

}


extern void work_a_4006925168_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4006925168_3212880686_p_0,(void *)work_a_4006925168_3212880686_p_1,(void *)work_a_4006925168_3212880686_p_2,(void *)work_a_4006925168_3212880686_p_3};
	xsi_register_didat("work_a_4006925168_3212880686", "isim/mips_tb2_isim_beh.exe.sim/work/a_4006925168_3212880686.didat");
	xsi_register_executes(pe);
}
