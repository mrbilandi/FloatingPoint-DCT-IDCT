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
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001352947476_2509299566_init();
    work_m_00000000004134447467_2073120511_init();
    ieee_p_2592010699_init();
    work_a_3740589364_3212880686_init();
    work_a_0775274316_1181938964_init();
    ieee_p_1242562249_init();
    work_a_0642663032_1516540902_init();
    work_a_1881823395_1516540902_init();
    work_a_0661085492_1516540902_init();
    work_a_3361092007_3212880686_init();
    work_a_3956407695_1181938964_init();
    work_a_0101402621_1181938964_init();
    work_a_0632151734_3212880686_init();
    work_a_0167252830_1181938964_init();
    work_a_0238239121_3212880686_init();
    work_a_1650957776_1181938964_init();
    work_a_0292574142_1181938964_init();
    work_a_1542103317_1181938964_init();
    work_a_0687697787_1181938964_init();
    work_a_1065777976_1181938964_init();
    work_a_3129384276_1181938964_init();


    xsi_register_tops("work_m_00000000001352947476_2509299566");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
