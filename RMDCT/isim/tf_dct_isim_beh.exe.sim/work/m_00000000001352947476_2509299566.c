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

/* This file is designed for use with ISim build 0x1048c146 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/FinalMUTThesis/Final/RMDCT/tf_dct.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {64, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "DCT_Input_Data.bin";
static const char *ng7 = "r";
static const char *ng8 = "DCT_Result_Data.bin";
static const char *ng9 = "w";
static const char *ng10 = "%h";
static const char *ng11 = "%h\n";
static int ng12[] = {8, 0};
static int ng13[] = {2, 0};
static int ng14[] = {3, 0};
static int ng15[] = {4, 0};
static int ng16[] = {5, 0};
static int ng17[] = {6, 0};
static int ng18[] = {7, 0};



static void Always_72_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3368);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3368);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Initial_84_1(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char t39[8];
    char t42[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 3612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);

LAB4:    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3512);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB6:    xsi_set_current_line(86, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 2760);
    t17 = (t0 + 2760);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 2760);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 2668);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2668);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB8:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t16), t36);
    goto LAB9;

LAB10:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng6, ng7);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng8, ng9);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2484);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3512);
    xsi_process_wait(t2, 4100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB12:    xsi_set_current_line(95, ng0);
    t13 = (t0 + 2484);
    t14 = (t13 + 36U);
    t17 = *((char **)t14);
    t18 = (t0 + 2760);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    t21 = (t0 + 2760);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (t0 + 2760);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    t29 = (t0 + 2668);
    t37 = (t29 + 36U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t16, 32, t20, t23, t26, 2, 1, t38, 32, 1);
    xsi_vlog_bit_copy(t15, 0, t16, 0, 32);
    *((int *)t39) = xsi_vlogfile_fscanf(*((unsigned int *)t17), ng10, 2, t0, (char)118, t15, 32);
    t40 = (t39 + 4);
    *((int *)t40) = 0;
    t41 = (t0 + 2760);
    t44 = (t0 + 2760);
    t45 = (t44 + 44U);
    t46 = *((char **)t45);
    t47 = (t0 + 2760);
    t48 = (t47 + 40U);
    t49 = *((char **)t48);
    t50 = (t0 + 2668);
    t51 = (t50 + 36U);
    t52 = *((char **)t51);
    xsi_vlog_generic_convert_array_indices(t42, t43, t46, t49, 2, 1, t52, 32, 1);
    t53 = (t42 + 4);
    t27 = *((unsigned int *)t53);
    t28 = (!(t27));
    t54 = (t43 + 4);
    t30 = *((unsigned int *)t54);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2668);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB11;

LAB14:    t33 = *((unsigned int *)t42);
    t34 = *((unsigned int *)t43);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t41, t15, 0, *((unsigned int *)t43), t36);
    goto LAB15;

LAB16:    xsi_set_current_line(98, ng0);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB1;

LAB18:    xsi_set_current_line(99, ng0);
    t13 = (t0 + 2576);
    t14 = (t13 + 36U);
    t17 = *((char **)t14);
    t18 = (t0 + 2852);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    t21 = (t0 + 2852);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (t0 + 2852);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    t29 = (t0 + 2668);
    t37 = (t29 + 36U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t15, 32, t20, t23, t26, 2, 1, t38, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t17), 0, 0, 1, ng11, 2, t0, (char)118, t15, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2668);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB17;

}

static void Initial_104_2(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;

LAB0:    t1 = (t0 + 3756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);

LAB4:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(113, ng0);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB6:    xsi_set_current_line(114, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 2852);
    t17 = (t0 + 2852);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 2852);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 2668);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2668);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB8:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t16), t36);
    goto LAB9;

LAB10:    xsi_set_current_line(116, ng0);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 2944);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:    goto LAB1;

LAB12:    xsi_set_current_line(116, ng0);

LAB14:    xsi_set_current_line(117, ng0);
    t13 = (t0 + 2760);
    t14 = (t13 + 36U);
    t17 = *((char **)t14);
    t18 = (t0 + 2760);
    t19 = (t18 + 44U);
    t20 = *((char **)t19);
    t21 = (t0 + 2760);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng12)));
    t25 = (t0 + 2944);
    t26 = (t25 + 36U);
    t29 = *((char **)t26);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t24, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t15, 32, t17, t20, t23, 2, 1, t16, 32, 1);
    t37 = (t0 + 1472);
    xsi_vlogvar_assign_value(t37, t15, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 1564);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng13)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 1656);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng14)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 1748);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng15)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 1840);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng16)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 1932);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng17)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 2024);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t7 = (t5 + 44U);
    t13 = *((char **)t7);
    t14 = (t0 + 2760);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 2944);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t19, 32, t22, 32);
    t23 = ((char*)((ng18)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t15, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t18, 2, 1, t16, 32, 1);
    t24 = (t0 + 2116);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3656);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t16, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t28 = (!(t8));
    t23 = (t15 + 4);
    t9 = *((unsigned int *)t23);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng5)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng13)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng14)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng15)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng16)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng17)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    t4 = (t0 + 2852);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t13 = (t0 + 2852);
    t14 = (t13 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 2944);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    xsi_vlog_signed_multiply(t16, 32, t18, 32, t21, 32);
    t22 = ((char*)((ng18)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t16, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t38, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t28 = (!(t8));
    t24 = (t15 + 4);
    t9 = *((unsigned int *)t24);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2944);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2944);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB11;

LAB16:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB17;

LAB18:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB19;

LAB20:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB21;

LAB22:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB23;

LAB24:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB25;

LAB26:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB27;

LAB28:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB29;

LAB30:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB31;

}


extern void work_m_00000000001352947476_2509299566_init()
{
	static char *pe[] = {(void *)Always_72_0,(void *)Initial_84_1,(void *)Initial_104_2};
	xsi_register_didat("work_m_00000000001352947476_2509299566", "isim/tf_dct_isim_beh.exe.sim/work/m_00000000001352947476_2509299566.didat");
	xsi_register_executes(pe);
}
