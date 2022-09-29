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
static const char *ng0 = "C:/Users/user/MIPS_Spartan6MimasV2/MIPS_2020/alu.vhd";
extern char *IEEE_P_3620187407;



static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t6[16];
    char t15[16];
    char t31[16];
    char t39[16];
    char t55[16];
    char t63[16];
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t40;
    char *t41;
    int t42;
    unsigned char t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    char *t52;
    char *t53;
    char *t56;
    char *t57;
    int t58;
    unsigned char t59;
    char *t60;
    char *t61;
    char *t64;
    char *t65;
    int t66;
    unsigned char t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;

LAB0:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 8172U);
    t4 = (t0 + 8484);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 1352U);
    t12 = *((char **)t8);
    t8 = (t0 + 8172U);
    t13 = (t0 + 8488);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 3;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (3 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t27 = (t0 + 1352U);
    t28 = *((char **)t27);
    t27 = (t0 + 8172U);
    t29 = (t0 + 8494);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 0;
    t33 = (t32 + 4U);
    *((int *)t33) = 3;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (3 - 0);
    t10 = (t34 * 1);
    t10 = (t10 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t10;
    t35 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t28, t27, t29, t31);
    if (t35 == 1)
        goto LAB10;

LAB11:    t33 = (t0 + 1352U);
    t36 = *((char **)t33);
    t33 = (t0 + 8172U);
    t37 = (t0 + 8498);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 0;
    t41 = (t40 + 4U);
    *((int *)t41) = 3;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (3 - 0);
    t10 = (t42 * 1);
    t10 = (t10 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t10;
    t43 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t36, t33, t37, t39);
    t26 = t43;

LAB12:    if (t26 != 0)
        goto LAB8;

LAB9:    t51 = (t0 + 1352U);
    t52 = *((char **)t51);
    t51 = (t0 + 8172U);
    t53 = (t0 + 8504);
    t56 = (t55 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = 0;
    t57 = (t56 + 4U);
    *((int *)t57) = 3;
    t57 = (t56 + 8U);
    *((int *)t57) = 1;
    t58 = (3 - 0);
    t10 = (t58 * 1);
    t10 = (t10 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t10;
    t59 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t52, t51, t53, t55);
    if (t59 == 1)
        goto LAB15;

LAB16:    t57 = (t0 + 1352U);
    t60 = *((char **)t57);
    t57 = (t0 + 8172U);
    t61 = (t0 + 8508);
    t64 = (t63 + 0U);
    t65 = (t64 + 0U);
    *((int *)t65) = 0;
    t65 = (t64 + 4U);
    *((int *)t65) = 3;
    t65 = (t64 + 8U);
    *((int *)t65) = 1;
    t66 = (3 - 0);
    t10 = (t66 * 1);
    t10 = (t10 + 1);
    t65 = (t64 + 12U);
    *((unsigned int *)t65) = t10;
    t67 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t60, t57, t61, t63);
    t50 = t67;

LAB17:    if (t50 != 0)
        goto LAB13;

LAB14:
LAB18:    t74 = (t0 + 8514);
    t76 = (t0 + 5248);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t74, 2U);
    xsi_driver_first_trans_fast(t76);

LAB2:    t81 = (t0 + 5104);
    *((int *)t81) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 8492);
    t21 = (t0 + 5248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t17, 2U);
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t41 = (t0 + 8502);
    t45 = (t0 + 5248);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t41, 2U);
    xsi_driver_first_trans_fast(t45);
    goto LAB2;

LAB10:    t26 = (unsigned char)1;
    goto LAB12;

LAB13:    t65 = (t0 + 8512);
    t69 = (t0 + 5248);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memcpy(t73, t65, 2U);
    xsi_driver_first_trans_fast(t69);
    goto LAB2;

LAB15:    t50 = (unsigned char)1;
    goto LAB17;

LAB19:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char t10[16];
    char t19[16];
    char t27[16];
    char t35[16];
    char t43[16];
    char t51[16];
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t36;
    char *t37;
    int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t44;
    char *t45;
    int t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t52;
    char *t53;
    int t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;

LAB0:    xsi_set_current_line(85, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t6 = (t0 + 8172U);
    t8 = (t0 + 8516);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t6, t8, t10);
    if (t15 == 1)
        goto LAB17;

LAB18:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t12 = (t0 + 8172U);
    t17 = (t0 + 8520);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 3;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (3 - 0);
    t14 = (t22 * 1);
    t14 = (t14 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t14;
    t23 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t16, t12, t17, t19);
    t5 = t23;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t21 = (t0 + 1352U);
    t24 = *((char **)t21);
    t21 = (t0 + 8172U);
    t25 = (t0 + 8524);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 0;
    t29 = (t28 + 4U);
    *((int *)t29) = 3;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t30 = (3 - 0);
    t14 = (t30 * 1);
    t14 = (t14 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t14;
    t31 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t24, t21, t25, t27);
    t4 = t31;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t29 = (t0 + 1352U);
    t32 = *((char **)t29);
    t29 = (t0 + 8172U);
    t33 = (t0 + 8528);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 3;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (3 - 0);
    t14 = (t38 * 1);
    t14 = (t14 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t14;
    t39 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t32, t29, t33, t35);
    t3 = t39;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t37 = (t0 + 1352U);
    t40 = *((char **)t37);
    t37 = (t0 + 8172U);
    t41 = (t0 + 8532);
    t44 = (t43 + 0U);
    t45 = (t44 + 0U);
    *((int *)t45) = 0;
    t45 = (t44 + 4U);
    *((int *)t45) = 3;
    t45 = (t44 + 8U);
    *((int *)t45) = 1;
    t46 = (3 - 0);
    t14 = (t46 * 1);
    t14 = (t14 + 1);
    t45 = (t44 + 12U);
    *((unsigned int *)t45) = t14;
    t47 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t40, t37, t41, t43);
    t2 = t47;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t45 = (t0 + 1352U);
    t48 = *((char **)t45);
    t45 = (t0 + 8172U);
    t49 = (t0 + 8536);
    t52 = (t51 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = 0;
    t53 = (t52 + 4U);
    *((int *)t53) = 3;
    t53 = (t52 + 8U);
    *((int *)t53) = 1;
    t54 = (3 - 0);
    t14 = (t54 * 1);
    t14 = (t14 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t14;
    t55 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t48, t45, t49, t51);
    t1 = t55;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t61 = (t0 + 1992U);
    t62 = *((char **)t61);
    t61 = (t0 + 5312);
    t63 = (t61 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memcpy(t66, t62, 32U);
    xsi_driver_first_trans_fast(t61);

LAB2:    t67 = (t0 + 5120);
    *((int *)t67) = 1;

LAB1:    return;
LAB3:    t53 = (t0 + 2152U);
    t56 = *((char **)t53);
    t53 = (t0 + 5312);
    t57 = (t53 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memcpy(t60, t56, 32U);
    xsi_driver_first_trans_fast(t53);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB21:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8252U);
    t3 = (t0 + 8540);
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
LAB5:    t15 = (t0 + 5376);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 5136);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5376);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_3(char *t0)
{
    char t7[16];
    char t16[16];
    char t24[16];
    char t40[16];
    char t48[16];
    char t56[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t25;
    char *t26;
    int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t41;
    char *t42;
    int t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t49;
    char *t50;
    int t51;
    unsigned char t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    int t59;
    unsigned char t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;

LAB0:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 8172U);
    t5 = (t0 + 8572);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t7);
    if (t12 == 1)
        goto LAB8;

LAB9:    t9 = (t0 + 1352U);
    t13 = *((char **)t9);
    t9 = (t0 + 8172U);
    t14 = (t0 + 8576);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 3;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (3 - 0);
    t11 = (t19 * 1);
    t11 = (t11 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t11;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t9, t14, t16);
    t2 = t20;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 1352U);
    t21 = *((char **)t18);
    t18 = (t0 + 8172U);
    t22 = (t0 + 8580);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 3;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t27 = (3 - 0);
    t11 = (t27 * 1);
    t11 = (t11 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t11;
    t28 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t21, t18, t22, t24);
    t1 = t28;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t36 = (t0 + 1352U);
    t37 = *((char **)t36);
    t36 = (t0 + 8172U);
    t38 = (t0 + 8584);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 0;
    t42 = (t41 + 4U);
    *((int *)t42) = 3;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (3 - 0);
    t11 = (t43 * 1);
    t11 = (t11 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t11;
    t44 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t37, t36, t38, t40);
    if (t44 == 1)
        goto LAB16;

LAB17:    t42 = (t0 + 1352U);
    t45 = *((char **)t42);
    t42 = (t0 + 8172U);
    t46 = (t0 + 8588);
    t49 = (t48 + 0U);
    t50 = (t49 + 0U);
    *((int *)t50) = 0;
    t50 = (t49 + 4U);
    *((int *)t50) = 3;
    t50 = (t49 + 8U);
    *((int *)t50) = 1;
    t51 = (3 - 0);
    t11 = (t51 * 1);
    t11 = (t11 + 1);
    t50 = (t49 + 12U);
    *((unsigned int *)t50) = t11;
    t52 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t45, t42, t46, t48);
    t35 = t52;

LAB18:    if (t35 == 1)
        goto LAB13;

LAB14:    t50 = (t0 + 1352U);
    t53 = *((char **)t50);
    t50 = (t0 + 8172U);
    t54 = (t0 + 8592);
    t57 = (t56 + 0U);
    t58 = (t57 + 0U);
    *((int *)t58) = 0;
    t58 = (t57 + 4U);
    *((int *)t58) = 3;
    t58 = (t57 + 8U);
    *((int *)t58) = 1;
    t59 = (3 - 0);
    t11 = (t59 * 1);
    t11 = (t11 + 1);
    t58 = (t57 + 12U);
    *((unsigned int *)t58) = t11;
    t60 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t53, t50, t54, t56);
    t34 = t60;

LAB15:    if (t34 != 0)
        goto LAB11;

LAB12:
LAB19:    t69 = (t0 + 8596);
    t71 = (t0 + 5440);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memcpy(t75, t69, 5U);
    xsi_driver_first_trans_fast(t71);

LAB2:    t76 = (t0 + 5152);
    *((int *)t76) = 1;

LAB1:    return;
LAB3:    t26 = (t0 + 1512U);
    t29 = *((char **)t26);
    t26 = (t0 + 5440);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t29, 5U);
    xsi_driver_first_trans_fast(t26);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t58 = (t0 + 1032U);
    t61 = *((char **)t58);
    t11 = (31 - 4);
    t62 = (t11 * 1U);
    t63 = (0 + t62);
    t58 = (t61 + t63);
    t64 = (t0 + 5440);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memcpy(t68, t58, 5U);
    xsi_driver_first_trans_fast(t64);
    goto LAB2;

LAB13:    t34 = (unsigned char)1;
    goto LAB15;

LAB16:    t35 = (unsigned char)1;
    goto LAB18;

LAB20:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(100, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5168);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1,(void *)work_a_0832606739_3212880686_p_2,(void *)work_a_0832606739_3212880686_p_3,(void *)work_a_0832606739_3212880686_p_4};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/mips_tb2_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
