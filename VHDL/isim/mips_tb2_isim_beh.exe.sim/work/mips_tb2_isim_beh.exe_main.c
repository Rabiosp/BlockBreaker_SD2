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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_2531448762;
char *IEEE_P_1242562249;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *STD_TEXTIO;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_2531448762_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_a_1102301669_3212880686_init();
    work_a_0550431143_3212880686_init();
    work_a_0768645600_3212880686_init();
    work_a_1842653724_3212880686_init();
    work_a_0888127620_3212880686_init();
    work_a_0718150318_3212880686_init();
    work_a_1991350011_3212880686_init();
    work_a_0337599047_3212880686_init();
    work_a_0835655229_3212880686_init();
    work_a_0059776735_3212880686_init();
    work_a_2023191012_3212880686_init();
    work_a_2726086904_3212880686_init();
    work_a_4006925168_3212880686_init();
    work_a_1384461182_1516540902_init();
    work_a_0832606739_3212880686_init();
    work_a_3135888310_3212880686_init();
    work_a_1014080458_3212880686_init();
    work_a_0540126715_3212880686_init();
    work_a_0539050556_3212880686_init();
    work_a_3229675882_3212880686_init();
    work_a_2993209486_3212880686_init();
    work_a_2961494699_3212880686_init();
    work_a_2466118607_3212880686_init();
    work_a_2278322344_3212880686_init();
    work_a_0248750074_3212880686_init();
    work_a_1274177957_3212880686_init();
    work_a_4180954713_3212880686_init();
    work_a_4008818513_3212880686_init();
    work_a_3044219816_3212880686_init();
    work_a_3055587667_3212880686_init();
    work_a_3605741087_3212880686_init();
    work_a_1430113433_3212880686_init();
    work_a_1828698090_2372691052_init();


    xsi_register_tops("work_a_1828698090_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_2531448762 = xsi_get_engine_memory("work_p_2531448762");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
