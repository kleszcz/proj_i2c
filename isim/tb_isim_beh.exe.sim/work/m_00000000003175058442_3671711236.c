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
static int ng0[] = {1, 0};
static const char *ng1 = "C:/Users/Jan/Documents/GitHub/proj_i2c/tb.v";
static int ng2[] = {0, 0};
static const char *ng3 = "\nstatus: %t Testbench started\n\n";
static int ng4[] = {10, 0};
static const char *ng5 = "status: %t done reset";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {200U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {128U, 0U};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {144U, 0U};
static const char *ng12 = "status: %t generate 'start', write cmd %0h (slave address+write)";
static const char *ng13 = "status: %t tip==0";
static unsigned int ng14[] = {16U, 0U};
static const char *ng15 = "status: %t write slave memory address 01";
static unsigned int ng16[] = {165U, 0U};
static const char *ng17 = "status: %t write data a5";
static unsigned int ng18[] = {90U, 0U};
static unsigned int ng19[] = {80U, 0U};
static const char *ng20 = "status: %t write next data 5a, generate 'stop'";
static unsigned int ng21[] = {33U, 0U};
static const char *ng22 = "status: %t generate 'repeated start', write cmd %0h (slave address+read)";
static const char *ng23 = "status: %t read + ack";
static const char *ng24 = "\nERROR: Expected a5, received %x at time %t";
static const char *ng25 = "status: %t received %x";
static const char *ng26 = "\nERROR: Expected 5a, received %x at time %t";
static const char *ng27 = "status: %t Testbench done";
static unsigned int ng28[] = {0U, 1U};



static void Gate_62_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t6, 0, 8);
    t7 = 1U;
    t8 = t7;
    t9 = ((((char*)((ng0)))) + 0);
    t10 = ((((char*)((ng0)))) + 4);
    t11 = *((unsigned int *)t9);
    t7 = (t7 & t11);
    t12 = *((unsigned int *)t10);
    t8 = (t8 & t12);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 | t7);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t8);
    t16 = (t0 + 8656);
    xsi_driver_vfirst_trans(t16, 0, 0);

LAB1:    return;
}

static void Gate_63_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t6, 0, 8);
    t7 = 1U;
    t8 = t7;
    t9 = ((((char*)((ng0)))) + 0);
    t10 = ((((char*)((ng0)))) + 4);
    t11 = *((unsigned int *)t9);
    t7 = (t7 & t11);
    t12 = *((unsigned int *)t10);
    t8 = (t8 & t12);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 | t7);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t8);
    t16 = (t0 + 8720);
    xsi_driver_vfirst_trans(t16, 0, 0);

LAB1:    return;
}

static void Initial_101_2(char *t0)
{
    char t4[16];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng1);

LAB4:    xsi_set_current_line(105, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(109, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(110, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(111, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(112, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(113, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(114, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(121, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(123, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(123, ng1);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4416);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(124, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t5 = (t0 + 11668);
    *((int *)t5) = t9;

LAB7:    t10 = (t0 + 11668);
    if (*((int *)t10) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(125, ng1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(139, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB8:    xsi_set_current_line(124, ng1);
    t11 = (t0 + 8016);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    t2 = (t0 + 11668);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB11:    xsi_set_current_line(139, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(140, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(142, ng1);

LAB12:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB16:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB18;

LAB17:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(143, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB16;

LAB18:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB17;

LAB19:    xsi_set_current_line(142, ng1);
    t29 = (t0 + 8032);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    goto LAB12;

LAB22:    xsi_set_current_line(143, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(147, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(147, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(148, ng1);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(150, ng1);

LAB24:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t2) == 0)
        goto LAB25;

LAB27:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB28:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB30;

LAB29:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(151, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB25:    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB30:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB29;

LAB31:    xsi_set_current_line(150, ng1);
    t29 = (t0 + 8048);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    goto LAB24;

LAB34:    xsi_set_current_line(151, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(156, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(156, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(157, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(158, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(160, ng1);

LAB36:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t2) == 0)
        goto LAB37;

LAB39:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB40:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB42;

LAB41:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(161, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB37:    *((unsigned int *)t13) = 1;
    goto LAB40;

LAB42:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB41;

LAB43:    xsi_set_current_line(160, ng1);
    t29 = (t0 + 8064);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    goto LAB36;

LAB46:    xsi_set_current_line(161, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(163, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng10)));
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(167, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(167, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(169, ng1);

LAB48:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t2) == 0)
        goto LAB49;

LAB51:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB52:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB54;

LAB53:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(170, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB49:    *((unsigned int *)t13) = 1;
    goto LAB52;

LAB54:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB53;

LAB55:    xsi_set_current_line(169, ng1);
    t29 = (t0 + 8080);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    goto LAB48;

LAB58:    xsi_set_current_line(170, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(171, ng1);

LAB59:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(172, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(176, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB60:    xsi_set_current_line(171, ng1);
    t11 = (t0 + 8096);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    goto LAB59;

LAB63:    xsi_set_current_line(176, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(177, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(178, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(180, ng1);

LAB64:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB68;

LAB66:    if (*((unsigned int *)t2) == 0)
        goto LAB65;

LAB67:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB68:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB70;

LAB69:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(181, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB65:    *((unsigned int *)t13) = 1;
    goto LAB68;

LAB70:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB69;

LAB71:    xsi_set_current_line(180, ng1);
    t29 = (t0 + 8112);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB73:    goto LAB64;

LAB74:    xsi_set_current_line(181, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(183, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(188, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    xsi_set_current_line(188, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(190, ng1);

LAB76:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t2) == 0)
        goto LAB77;

LAB79:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB80:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB82;

LAB81:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(191, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB77:    *((unsigned int *)t13) = 1;
    goto LAB80;

LAB82:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB81;

LAB83:    xsi_set_current_line(190, ng1);
    t29 = (t0 + 8128);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    goto LAB76;

LAB86:    xsi_set_current_line(191, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(192, ng1);

LAB87:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(193, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(198, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB88:    xsi_set_current_line(192, ng1);
    t11 = (t0 + 8144);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    goto LAB87;

LAB91:    xsi_set_current_line(198, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(199, ng1);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(200, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(202, ng1);

LAB92:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB96;

LAB94:    if (*((unsigned int *)t2) == 0)
        goto LAB93;

LAB95:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB96:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB98;

LAB97:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(203, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB93:    *((unsigned int *)t13) = 1;
    goto LAB96;

LAB98:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB97;

LAB99:    xsi_set_current_line(202, ng1);
    t29 = (t0 + 8160);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    goto LAB92;

LAB102:    xsi_set_current_line(203, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(205, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(214, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    xsi_set_current_line(214, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(216, ng1);

LAB104:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB108;

LAB106:    if (*((unsigned int *)t2) == 0)
        goto LAB105;

LAB107:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB108:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB110;

LAB109:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(217, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB105:    *((unsigned int *)t13) = 1;
    goto LAB108;

LAB110:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB109;

LAB111:    xsi_set_current_line(216, ng1);
    t29 = (t0 + 8176);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB113:    goto LAB104;

LAB114:    xsi_set_current_line(217, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(218, ng1);

LAB115:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(219, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(224, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB116:    xsi_set_current_line(218, ng1);
    t11 = (t0 + 8192);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB118:    goto LAB115;

LAB119:    xsi_set_current_line(224, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(225, ng1);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(226, ng1);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(228, ng1);

LAB120:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB124;

LAB122:    if (*((unsigned int *)t2) == 0)
        goto LAB121;

LAB123:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB124:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB126;

LAB125:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(229, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB121:    *((unsigned int *)t13) = 1;
    goto LAB124;

LAB126:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB125;

LAB127:    xsi_set_current_line(228, ng1);
    t29 = (t0 + 8208);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB129:    goto LAB120;

LAB130:    xsi_set_current_line(229, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(231, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(236, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB131:    xsi_set_current_line(236, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(238, ng1);

LAB132:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB136;

LAB134:    if (*((unsigned int *)t2) == 0)
        goto LAB133;

LAB135:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB136:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB138;

LAB137:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(239, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB133:    *((unsigned int *)t13) = 1;
    goto LAB136;

LAB138:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB137;

LAB139:    xsi_set_current_line(238, ng1);
    t29 = (t0 + 8224);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB141:    goto LAB132;

LAB142:    xsi_set_current_line(239, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(240, ng1);

LAB143:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(241, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(250, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB144:    xsi_set_current_line(240, ng1);
    t11 = (t0 + 8240);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB146;
    goto LAB1;

LAB146:    goto LAB143;

LAB147:    xsi_set_current_line(250, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(251, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(252, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(254, ng1);

LAB148:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB152;

LAB150:    if (*((unsigned int *)t2) == 0)
        goto LAB149;

LAB151:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB152:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB154;

LAB153:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(255, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB158;
    goto LAB1;

LAB149:    *((unsigned int *)t13) = 1;
    goto LAB152;

LAB154:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB153;

LAB155:    xsi_set_current_line(254, ng1);
    t29 = (t0 + 8256);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB157;
    goto LAB1;

LAB157:    goto LAB148;

LAB158:    xsi_set_current_line(255, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(257, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng10)));
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(261, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB159;
    goto LAB1;

LAB159:    xsi_set_current_line(261, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(263, ng1);

LAB160:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB164;

LAB162:    if (*((unsigned int *)t2) == 0)
        goto LAB161;

LAB163:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB164:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB166;

LAB165:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(264, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB170;
    goto LAB1;

LAB161:    *((unsigned int *)t13) = 1;
    goto LAB164;

LAB166:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB165;

LAB167:    xsi_set_current_line(263, ng1);
    t29 = (t0 + 8272);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB169:    goto LAB160;

LAB170:    xsi_set_current_line(264, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(265, ng1);

LAB171:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(266, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(270, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB172:    xsi_set_current_line(265, ng1);
    t11 = (t0 + 8288);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB174;
    goto LAB1;

LAB174:    goto LAB171;

LAB175:    xsi_set_current_line(270, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(271, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(272, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(274, ng1);

LAB176:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB180;

LAB178:    if (*((unsigned int *)t2) == 0)
        goto LAB177;

LAB179:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB180:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB182;

LAB181:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB183;

LAB184:    xsi_set_current_line(275, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB177:    *((unsigned int *)t13) = 1;
    goto LAB180;

LAB182:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB181;

LAB183:    xsi_set_current_line(274, ng1);
    t29 = (t0 + 8304);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB185;
    goto LAB1;

LAB185:    goto LAB176;

LAB186:    xsi_set_current_line(275, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(277, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(282, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB187:    xsi_set_current_line(282, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(284, ng1);

LAB188:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB192;

LAB190:    if (*((unsigned int *)t2) == 0)
        goto LAB189;

LAB191:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB192:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB194;

LAB193:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB195;

LAB196:    xsi_set_current_line(285, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB198;
    goto LAB1;

LAB189:    *((unsigned int *)t13) = 1;
    goto LAB192;

LAB194:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB193;

LAB195:    xsi_set_current_line(284, ng1);
    t29 = (t0 + 8320);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB197;
    goto LAB1;

LAB197:    goto LAB188;

LAB198:    xsi_set_current_line(285, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(286, ng1);

LAB199:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB200;

LAB201:    xsi_set_current_line(287, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(291, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB203;
    goto LAB1;

LAB200:    xsi_set_current_line(286, ng1);
    t11 = (t0 + 8336);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB202;
    goto LAB1;

LAB202:    goto LAB199;

LAB203:    xsi_set_current_line(291, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(292, ng1);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(293, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(295, ng1);

LAB204:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB208;

LAB206:    if (*((unsigned int *)t2) == 0)
        goto LAB205;

LAB207:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB208:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB210;

LAB209:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB211;

LAB212:    xsi_set_current_line(296, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB214;
    goto LAB1;

LAB205:    *((unsigned int *)t13) = 1;
    goto LAB208;

LAB210:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB209;

LAB211:    xsi_set_current_line(295, ng1);
    t29 = (t0 + 8352);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB213;
    goto LAB1;

LAB213:    goto LAB204;

LAB214:    xsi_set_current_line(296, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(298, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng21)));
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(302, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB215;
    goto LAB1;

LAB215:    xsi_set_current_line(302, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(304, ng1);

LAB216:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB220;

LAB218:    if (*((unsigned int *)t2) == 0)
        goto LAB217;

LAB219:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB220:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB222;

LAB221:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB223;

LAB224:    xsi_set_current_line(305, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB226;
    goto LAB1;

LAB217:    *((unsigned int *)t13) = 1;
    goto LAB220;

LAB222:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB221;

LAB223:    xsi_set_current_line(304, ng1);
    t29 = (t0 + 8368);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB225;
    goto LAB1;

LAB225:    goto LAB216;

LAB226:    xsi_set_current_line(305, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(306, ng1);

LAB227:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB228;

LAB229:    xsi_set_current_line(307, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(310, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB231;
    goto LAB1;

LAB228:    xsi_set_current_line(306, ng1);
    t11 = (t0 + 8384);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB230;
    goto LAB1;

LAB230:    goto LAB227;

LAB231:    xsi_set_current_line(310, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(311, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(313, ng1);

LAB232:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB236;

LAB234:    if (*((unsigned int *)t2) == 0)
        goto LAB233;

LAB235:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB236:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB238;

LAB237:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB239;

LAB240:    xsi_set_current_line(314, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB242;
    goto LAB1;

LAB233:    *((unsigned int *)t13) = 1;
    goto LAB236;

LAB238:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB237;

LAB239:    xsi_set_current_line(313, ng1);
    t29 = (t0 + 8400);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB241;
    goto LAB1;

LAB241:    goto LAB232;

LAB242:    xsi_set_current_line(314, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(315, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(319, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB243;
    goto LAB1;

LAB243:    xsi_set_current_line(319, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(321, ng1);

LAB244:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB248;

LAB246:    if (*((unsigned int *)t2) == 0)
        goto LAB245;

LAB247:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB248:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB250;

LAB249:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB251;

LAB252:    xsi_set_current_line(322, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB254;
    goto LAB1;

LAB245:    *((unsigned int *)t13) = 1;
    goto LAB248;

LAB250:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB249;

LAB251:    xsi_set_current_line(321, ng1);
    t29 = (t0 + 8416);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB253;
    goto LAB1;

LAB253:    goto LAB244;

LAB254:    xsi_set_current_line(322, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(323, ng1);

LAB255:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB256;

LAB257:    xsi_set_current_line(324, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(330, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB259;
    goto LAB1;

LAB256:    xsi_set_current_line(323, ng1);
    t11 = (t0 + 8432);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB258;
    goto LAB1;

LAB258:    goto LAB255;

LAB259:    xsi_set_current_line(330, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(332, ng1);

LAB260:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB264;

LAB262:    if (*((unsigned int *)t2) == 0)
        goto LAB261;

LAB263:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB264:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB266;

LAB265:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB267;

LAB268:    xsi_set_current_line(333, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB270;
    goto LAB1;

LAB261:    *((unsigned int *)t13) = 1;
    goto LAB264;

LAB266:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB265;

LAB267:    xsi_set_current_line(332, ng1);
    t29 = (t0 + 8448);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB269;
    goto LAB1;

LAB269:    goto LAB260;

LAB270:    xsi_set_current_line(333, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(334, ng1);

LAB271:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB272;

LAB273:    xsi_set_current_line(335, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(336, ng1);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB276;

LAB275:    t5 = (t3 + 4);
    t10 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t10))
        goto LAB276;

LAB277:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB278;

LAB279:    xsi_set_current_line(339, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = (t0 + 1936U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t4, 64, (char)118, t5, 8);

LAB280:    xsi_set_current_line(342, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB281;
    goto LAB1;

LAB272:    xsi_set_current_line(334, ng1);
    t11 = (t0 + 8464);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB274;
    goto LAB1;

LAB274:    goto LAB271;

LAB276:    *((unsigned int *)t13) = 1;
    goto LAB277;

LAB278:    xsi_set_current_line(337, ng1);
    t12 = (t0 + 1936U);
    t29 = *((char **)t12);
    t12 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng24, 3, t0, (char)118, t29, 8, (char)118, t4, 64);
    goto LAB280;

LAB281:    xsi_set_current_line(342, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(343, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(345, ng1);

LAB282:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB286;

LAB284:    if (*((unsigned int *)t2) == 0)
        goto LAB283;

LAB285:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB286:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB288;

LAB287:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB289;

LAB290:    xsi_set_current_line(346, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB292;
    goto LAB1;

LAB283:    *((unsigned int *)t13) = 1;
    goto LAB286;

LAB288:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB287;

LAB289:    xsi_set_current_line(345, ng1);
    t29 = (t0 + 8480);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB291;
    goto LAB1;

LAB291:    goto LAB282;

LAB292:    xsi_set_current_line(346, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(347, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(351, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB293;
    goto LAB1;

LAB293:    xsi_set_current_line(351, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(353, ng1);

LAB294:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB298;

LAB296:    if (*((unsigned int *)t2) == 0)
        goto LAB295;

LAB297:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB298:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB300;

LAB299:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB301;

LAB302:    xsi_set_current_line(354, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB304;
    goto LAB1;

LAB295:    *((unsigned int *)t13) = 1;
    goto LAB298;

LAB300:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB299;

LAB301:    xsi_set_current_line(353, ng1);
    t29 = (t0 + 8496);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB303;
    goto LAB1;

LAB303:    goto LAB294;

LAB304:    xsi_set_current_line(354, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(355, ng1);

LAB305:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB306;

LAB307:    xsi_set_current_line(356, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(362, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB309;
    goto LAB1;

LAB306:    xsi_set_current_line(355, ng1);
    t11 = (t0 + 8512);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB308;
    goto LAB1;

LAB308:    goto LAB305;

LAB309:    xsi_set_current_line(362, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(364, ng1);

LAB310:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB314;

LAB312:    if (*((unsigned int *)t2) == 0)
        goto LAB311;

LAB313:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB314:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB316;

LAB315:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 1U);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB317;

LAB318:    xsi_set_current_line(365, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB320;
    goto LAB1;

LAB311:    *((unsigned int *)t13) = 1;
    goto LAB314;

LAB316:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB315;

LAB317:    xsi_set_current_line(364, ng1);
    t29 = (t0 + 8528);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB319;
    goto LAB1;

LAB319:    goto LAB310;

LAB320:    xsi_set_current_line(365, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(366, ng1);

LAB321:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t10 = (t13 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB322;

LAB323:    xsi_set_current_line(367, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(368, ng1);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB326;

LAB325:    t5 = (t3 + 4);
    t10 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t10))
        goto LAB326;

LAB327:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB328;

LAB329:    xsi_set_current_line(371, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = (t0 + 1936U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t4, 64, (char)118, t5, 8);

LAB330:    xsi_set_current_line(375, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB331;
    goto LAB1;

LAB322:    xsi_set_current_line(366, ng1);
    t11 = (t0 + 8544);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB324;
    goto LAB1;

LAB324:    goto LAB321;

LAB326:    *((unsigned int *)t13) = 1;
    goto LAB327;

LAB328:    xsi_set_current_line(369, ng1);
    t12 = (t0 + 1936U);
    t29 = *((char **)t12);
    t12 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t0, (char)118, t29, 8, (char)118, t4, 64);
    goto LAB330;

LAB331:    xsi_set_current_line(376, ng1);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng27, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(377, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_381_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(382, ng1);
    t2 = (t0 + 7008);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(382, ng1);
    t4 = (t0 + 4096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 4096);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2736U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t21 = (t0 + 8784);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t35 = (t0 + 8560);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng28)));
    goto LAB9;

LAB10:    t21 = (t0 + 2576U);
    t22 = *((char **)t21);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void implSig2_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 7696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3056U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t21 = (t0 + 8848);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t35 = (t0 + 8576);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng28)));
    goto LAB9;

LAB10:    t21 = (t0 + 2896U);
    t22 = *((char **)t21);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}


extern void work_m_00000000003175058442_3671711236_init()
{
	static char *pe[] = {(void *)Gate_62_0,(void *)Gate_63_1,(void *)Initial_101_2,(void *)Always_381_3,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000003175058442_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003175058442_3671711236.didat");
	xsi_register_executes(pe);
}
