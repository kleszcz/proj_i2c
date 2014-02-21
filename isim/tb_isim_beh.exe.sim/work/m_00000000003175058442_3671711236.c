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

LAB2:    t2 = (t0 + 9328);
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
    t16 = (t0 + 9328);
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

LAB2:    t2 = (t0 + 9392);
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
    t16 = (t0 + 9392);
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
    t5 = (t0 + 12500);
    *((int *)t5) = t9;

LAB7:    t10 = (t0 + 12500);
    if (*((int *)t10) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(125, ng1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(138, ng1);
    t2 = (t0 + 8032);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB8:    xsi_set_current_line(124, ng1);
    t11 = (t0 + 8016);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    t2 = (t0 + 12500);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB11:    xsi_set_current_line(139, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(139, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(140, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(141, ng1);
    t2 = (t0 + 8048);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(142, ng1);

LAB14:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB19:    t22 = *((unsigned int *)t13);
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
        goto LAB21;

LAB22:    xsi_set_current_line(143, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB15:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB19;

LAB21:    xsi_set_current_line(142, ng1);
    t29 = (t0 + 8064);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    goto LAB14;

LAB24:    xsi_set_current_line(143, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(146, ng1);
    t2 = (t0 + 8080);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(147, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(147, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(148, ng1);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(149, ng1);
    t2 = (t0 + 8096);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(150, ng1);

LAB28:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t2) == 0)
        goto LAB29;

LAB31:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB32:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB34;

LAB33:    t22 = *((unsigned int *)t13);
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
        goto LAB35;

LAB36:    xsi_set_current_line(151, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB29:    *((unsigned int *)t13) = 1;
    goto LAB32;

LAB34:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB33;

LAB35:    xsi_set_current_line(150, ng1);
    t29 = (t0 + 8112);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    goto LAB28;

LAB38:    xsi_set_current_line(151, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(155, ng1);
    t2 = (t0 + 8128);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(156, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(156, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(157, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(158, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(159, ng1);
    t2 = (t0 + 8144);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(160, ng1);

LAB42:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t2) == 0)
        goto LAB43;

LAB45:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB46:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB48;

LAB47:    t22 = *((unsigned int *)t13);
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
        goto LAB49;

LAB50:    xsi_set_current_line(161, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB43:    *((unsigned int *)t13) = 1;
    goto LAB46;

LAB48:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB47;

LAB49:    xsi_set_current_line(160, ng1);
    t29 = (t0 + 8160);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    goto LAB42;

LAB52:    xsi_set_current_line(161, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(169, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng10)));
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(172, ng1);
    t2 = (t0 + 8176);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(173, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(173, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(174, ng1);
    t2 = (t0 + 8192);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(175, ng1);

LAB56:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t2) == 0)
        goto LAB57;

LAB59:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB60:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB62;

LAB61:    t22 = *((unsigned int *)t13);
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
        goto LAB63;

LAB64:    xsi_set_current_line(176, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB57:    *((unsigned int *)t13) = 1;
    goto LAB60;

LAB62:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB61;

LAB63:    xsi_set_current_line(175, ng1);
    t29 = (t0 + 8208);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    goto LAB56;

LAB66:    xsi_set_current_line(176, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(177, ng1);

LAB67:    t2 = (t0 + 2256U);
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
        goto LAB68;

LAB69:    xsi_set_current_line(178, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(181, ng1);
    t2 = (t0 + 8240);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB68:    xsi_set_current_line(177, ng1);
    t11 = (t0 + 8224);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    goto LAB67;

LAB71:    xsi_set_current_line(182, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    xsi_set_current_line(182, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(183, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(184, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(185, ng1);
    t2 = (t0 + 8256);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB73:    xsi_set_current_line(186, ng1);

LAB74:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB78;

LAB76:    if (*((unsigned int *)t2) == 0)
        goto LAB75;

LAB77:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB78:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB80;

LAB79:    t22 = *((unsigned int *)t13);
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
        goto LAB81;

LAB82:    xsi_set_current_line(187, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB75:    *((unsigned int *)t13) = 1;
    goto LAB78;

LAB80:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB79;

LAB81:    xsi_set_current_line(186, ng1);
    t29 = (t0 + 8272);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB83:    goto LAB74;

LAB84:    xsi_set_current_line(187, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(195, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(199, ng1);
    t2 = (t0 + 8288);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(200, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(200, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(201, ng1);
    t2 = (t0 + 8304);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(202, ng1);

LAB88:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t2) == 0)
        goto LAB89;

LAB91:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB92:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB94;

LAB93:    t22 = *((unsigned int *)t13);
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
        goto LAB95;

LAB96:    xsi_set_current_line(203, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB89:    *((unsigned int *)t13) = 1;
    goto LAB92;

LAB94:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB93;

LAB95:    xsi_set_current_line(202, ng1);
    t29 = (t0 + 8320);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    goto LAB88;

LAB98:    xsi_set_current_line(203, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(204, ng1);

LAB99:    t2 = (t0 + 2256U);
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
        goto LAB100;

LAB101:    xsi_set_current_line(205, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(209, ng1);
    t2 = (t0 + 8352);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB100:    xsi_set_current_line(204, ng1);
    t11 = (t0 + 8336);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    goto LAB99;

LAB103:    xsi_set_current_line(210, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB104:    xsi_set_current_line(210, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(211, ng1);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(212, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(213, ng1);
    t2 = (t0 + 8368);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB105:    xsi_set_current_line(214, ng1);

LAB106:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB110;

LAB108:    if (*((unsigned int *)t2) == 0)
        goto LAB107;

LAB109:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB110:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB112;

LAB111:    t22 = *((unsigned int *)t13);
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
        goto LAB113;

LAB114:    xsi_set_current_line(215, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB107:    *((unsigned int *)t13) = 1;
    goto LAB110;

LAB112:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB111;

LAB113:    xsi_set_current_line(214, ng1);
    t29 = (t0 + 8384);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB115:    goto LAB106;

LAB116:    xsi_set_current_line(215, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(223, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(231, ng1);
    t2 = (t0 + 8400);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB117:    xsi_set_current_line(232, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB118:    xsi_set_current_line(232, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(233, ng1);
    t2 = (t0 + 8416);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB119:    xsi_set_current_line(234, ng1);

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

LAB128:    xsi_set_current_line(235, ng1);
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

LAB127:    xsi_set_current_line(234, ng1);
    t29 = (t0 + 8432);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB129:    goto LAB120;

LAB130:    xsi_set_current_line(235, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(236, ng1);

LAB131:    t2 = (t0 + 2256U);
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
        goto LAB132;

LAB133:    xsi_set_current_line(237, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(241, ng1);
    t2 = (t0 + 8464);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB132:    xsi_set_current_line(236, ng1);
    t11 = (t0 + 8448);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB134;
    goto LAB1;

LAB134:    goto LAB131;

LAB135:    xsi_set_current_line(242, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB136:    xsi_set_current_line(242, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(243, ng1);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(244, ng1);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(245, ng1);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB137:    xsi_set_current_line(246, ng1);

LAB138:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB142;

LAB140:    if (*((unsigned int *)t2) == 0)
        goto LAB139;

LAB141:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB142:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB144;

LAB143:    t22 = *((unsigned int *)t13);
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
        goto LAB145;

LAB146:    xsi_set_current_line(247, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB148;
    goto LAB1;

LAB139:    *((unsigned int *)t13) = 1;
    goto LAB142;

LAB144:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB143;

LAB145:    xsi_set_current_line(246, ng1);
    t29 = (t0 + 8496);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB147:    goto LAB138;

LAB148:    xsi_set_current_line(247, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(255, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(259, ng1);
    t2 = (t0 + 8512);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB149:    xsi_set_current_line(260, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB150;
    goto LAB1;

LAB150:    xsi_set_current_line(260, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(261, ng1);
    t2 = (t0 + 8528);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB151:    xsi_set_current_line(262, ng1);

LAB152:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB156;

LAB154:    if (*((unsigned int *)t2) == 0)
        goto LAB153;

LAB155:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB156:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB158;

LAB157:    t22 = *((unsigned int *)t13);
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
        goto LAB159;

LAB160:    xsi_set_current_line(263, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB162;
    goto LAB1;

LAB153:    *((unsigned int *)t13) = 1;
    goto LAB156;

LAB158:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB157;

LAB159:    xsi_set_current_line(262, ng1);
    t29 = (t0 + 8544);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB161;
    goto LAB1;

LAB161:    goto LAB152;

LAB162:    xsi_set_current_line(263, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(264, ng1);

LAB163:    t2 = (t0 + 2256U);
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
        goto LAB164;

LAB165:    xsi_set_current_line(265, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(273, ng1);
    t2 = (t0 + 8576);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB164:    xsi_set_current_line(264, ng1);
    t11 = (t0 + 8560);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB166;
    goto LAB1;

LAB166:    goto LAB163;

LAB167:    xsi_set_current_line(274, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB168:    xsi_set_current_line(274, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(275, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(276, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(277, ng1);
    t2 = (t0 + 8592);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB169:    xsi_set_current_line(278, ng1);

LAB170:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB174;

LAB172:    if (*((unsigned int *)t2) == 0)
        goto LAB171;

LAB173:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB174:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB176;

LAB175:    t22 = *((unsigned int *)t13);
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
        goto LAB177;

LAB178:    xsi_set_current_line(279, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB180;
    goto LAB1;

LAB171:    *((unsigned int *)t13) = 1;
    goto LAB174;

LAB176:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB175;

LAB177:    xsi_set_current_line(278, ng1);
    t29 = (t0 + 8608);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB179;
    goto LAB1;

LAB179:    goto LAB170;

LAB180:    xsi_set_current_line(279, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(287, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng10)));
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(290, ng1);
    t2 = (t0 + 8624);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB181;
    goto LAB1;

LAB181:    xsi_set_current_line(291, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB182;
    goto LAB1;

LAB182:    xsi_set_current_line(291, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(292, ng1);
    t2 = (t0 + 8640);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB183:    xsi_set_current_line(293, ng1);

LAB184:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB188;

LAB186:    if (*((unsigned int *)t2) == 0)
        goto LAB185;

LAB187:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB188:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB190;

LAB189:    t22 = *((unsigned int *)t13);
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
        goto LAB191;

LAB192:    xsi_set_current_line(294, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB194;
    goto LAB1;

LAB185:    *((unsigned int *)t13) = 1;
    goto LAB188;

LAB190:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB189;

LAB191:    xsi_set_current_line(293, ng1);
    t29 = (t0 + 8656);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB193;
    goto LAB1;

LAB193:    goto LAB184;

LAB194:    xsi_set_current_line(294, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(295, ng1);

LAB195:    t2 = (t0 + 2256U);
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
        goto LAB196;

LAB197:    xsi_set_current_line(296, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(299, ng1);
    t2 = (t0 + 8688);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB199;
    goto LAB1;

LAB196:    xsi_set_current_line(295, ng1);
    t11 = (t0 + 8672);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB198;
    goto LAB1;

LAB198:    goto LAB195;

LAB199:    xsi_set_current_line(300, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB200;
    goto LAB1;

LAB200:    xsi_set_current_line(300, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(301, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(302, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(303, ng1);
    t2 = (t0 + 8704);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB201;
    goto LAB1;

LAB201:    xsi_set_current_line(304, ng1);

LAB202:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB206;

LAB204:    if (*((unsigned int *)t2) == 0)
        goto LAB203;

LAB205:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB206:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB208;

LAB207:    t22 = *((unsigned int *)t13);
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
        goto LAB209;

LAB210:    xsi_set_current_line(305, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB212;
    goto LAB1;

LAB203:    *((unsigned int *)t13) = 1;
    goto LAB206;

LAB208:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB207;

LAB209:    xsi_set_current_line(304, ng1);
    t29 = (t0 + 8720);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB211;
    goto LAB1;

LAB211:    goto LAB202;

LAB212:    xsi_set_current_line(305, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(313, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(317, ng1);
    t2 = (t0 + 8736);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB213;
    goto LAB1;

LAB213:    xsi_set_current_line(318, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB214;
    goto LAB1;

LAB214:    xsi_set_current_line(318, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(319, ng1);
    t2 = (t0 + 8752);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB215;
    goto LAB1;

LAB215:    xsi_set_current_line(320, ng1);

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

LAB224:    xsi_set_current_line(321, ng1);
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

LAB223:    xsi_set_current_line(320, ng1);
    t29 = (t0 + 8768);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB225;
    goto LAB1;

LAB225:    goto LAB216;

LAB226:    xsi_set_current_line(321, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(322, ng1);

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

LAB229:    xsi_set_current_line(323, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(326, ng1);
    t2 = (t0 + 8800);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB231;
    goto LAB1;

LAB228:    xsi_set_current_line(322, ng1);
    t11 = (t0 + 8784);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB230;
    goto LAB1;

LAB230:    goto LAB227;

LAB231:    xsi_set_current_line(327, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB232;
    goto LAB1;

LAB232:    xsi_set_current_line(327, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(328, ng1);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(329, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(330, ng1);
    t2 = (t0 + 8816);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB233;
    goto LAB1;

LAB233:    xsi_set_current_line(331, ng1);

LAB234:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB238;

LAB236:    if (*((unsigned int *)t2) == 0)
        goto LAB235;

LAB237:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB238:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB240;

LAB239:    t22 = *((unsigned int *)t13);
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
        goto LAB241;

LAB242:    xsi_set_current_line(332, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB244;
    goto LAB1;

LAB235:    *((unsigned int *)t13) = 1;
    goto LAB238;

LAB240:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB239;

LAB241:    xsi_set_current_line(331, ng1);
    t29 = (t0 + 8832);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB243;
    goto LAB1;

LAB243:    goto LAB234;

LAB244:    xsi_set_current_line(332, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(340, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng21)));
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(343, ng1);
    t2 = (t0 + 8848);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB245;
    goto LAB1;

LAB245:    xsi_set_current_line(344, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB246;
    goto LAB1;

LAB246:    xsi_set_current_line(344, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(345, ng1);
    t2 = (t0 + 8864);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB247;
    goto LAB1;

LAB247:    xsi_set_current_line(346, ng1);

LAB248:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB252;

LAB250:    if (*((unsigned int *)t2) == 0)
        goto LAB249;

LAB251:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB252:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB254;

LAB253:    t22 = *((unsigned int *)t13);
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
        goto LAB255;

LAB256:    xsi_set_current_line(347, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB258;
    goto LAB1;

LAB249:    *((unsigned int *)t13) = 1;
    goto LAB252;

LAB254:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB253;

LAB255:    xsi_set_current_line(346, ng1);
    t29 = (t0 + 8880);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB257;
    goto LAB1;

LAB257:    goto LAB248;

LAB258:    xsi_set_current_line(347, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(348, ng1);

LAB259:    t2 = (t0 + 2256U);
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
        goto LAB260;

LAB261:    xsi_set_current_line(349, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(351, ng1);
    t2 = (t0 + 8912);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB263;
    goto LAB1;

LAB260:    xsi_set_current_line(348, ng1);
    t11 = (t0 + 8896);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB262;
    goto LAB1;

LAB262:    goto LAB259;

LAB263:    xsi_set_current_line(352, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB264;
    goto LAB1;

LAB264:    xsi_set_current_line(352, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(353, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(354, ng1);
    t2 = (t0 + 8928);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB265;
    goto LAB1;

LAB265:    xsi_set_current_line(355, ng1);

LAB266:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB270;

LAB268:    if (*((unsigned int *)t2) == 0)
        goto LAB267;

LAB269:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB270:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB272;

LAB271:    t22 = *((unsigned int *)t13);
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
        goto LAB273;

LAB274:    xsi_set_current_line(356, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB276;
    goto LAB1;

LAB267:    *((unsigned int *)t13) = 1;
    goto LAB270;

LAB272:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB271;

LAB273:    xsi_set_current_line(355, ng1);
    t29 = (t0 + 8944);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB275;
    goto LAB1;

LAB275:    goto LAB266;

LAB276:    xsi_set_current_line(356, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(357, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(360, ng1);
    t2 = (t0 + 8960);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB277;
    goto LAB1;

LAB277:    xsi_set_current_line(361, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB278;
    goto LAB1;

LAB278:    xsi_set_current_line(361, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(362, ng1);
    t2 = (t0 + 8976);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB279;
    goto LAB1;

LAB279:    xsi_set_current_line(363, ng1);

LAB280:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB284;

LAB282:    if (*((unsigned int *)t2) == 0)
        goto LAB281;

LAB283:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB284:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB286;

LAB285:    t22 = *((unsigned int *)t13);
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
        goto LAB287;

LAB288:    xsi_set_current_line(364, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB290;
    goto LAB1;

LAB281:    *((unsigned int *)t13) = 1;
    goto LAB284;

LAB286:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB285;

LAB287:    xsi_set_current_line(363, ng1);
    t29 = (t0 + 8992);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB289;
    goto LAB1;

LAB289:    goto LAB280;

LAB290:    xsi_set_current_line(364, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(365, ng1);

LAB291:    t2 = (t0 + 2256U);
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
        goto LAB292;

LAB293:    xsi_set_current_line(366, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(371, ng1);
    t2 = (t0 + 9024);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB295;
    goto LAB1;

LAB292:    xsi_set_current_line(365, ng1);
    t11 = (t0 + 9008);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB294;
    goto LAB1;

LAB294:    goto LAB291;

LAB295:    xsi_set_current_line(372, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB296;
    goto LAB1;

LAB296:    xsi_set_current_line(372, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(373, ng1);
    t2 = (t0 + 9040);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB297;
    goto LAB1;

LAB297:    xsi_set_current_line(374, ng1);

LAB298:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB302;

LAB300:    if (*((unsigned int *)t2) == 0)
        goto LAB299;

LAB301:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB302:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB304;

LAB303:    t22 = *((unsigned int *)t13);
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
        goto LAB305;

LAB306:    xsi_set_current_line(375, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB308;
    goto LAB1;

LAB299:    *((unsigned int *)t13) = 1;
    goto LAB302;

LAB304:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB303;

LAB305:    xsi_set_current_line(374, ng1);
    t29 = (t0 + 9056);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB307;
    goto LAB1;

LAB307:    goto LAB298;

LAB308:    xsi_set_current_line(375, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(376, ng1);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB310;

LAB309:    t5 = (t3 + 4);
    t10 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t10))
        goto LAB310;

LAB311:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB312;

LAB313:    xsi_set_current_line(379, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = (t0 + 1936U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t4, 64, (char)118, t5, 8);

LAB314:    xsi_set_current_line(381, ng1);
    t2 = (t0 + 9072);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB315;
    goto LAB1;

LAB310:    *((unsigned int *)t13) = 1;
    goto LAB311;

LAB312:    xsi_set_current_line(377, ng1);
    t12 = (t0 + 1936U);
    t29 = *((char **)t12);
    t12 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng24, 3, t0, (char)118, t29, 8, (char)118, t4, 64);
    goto LAB314;

LAB315:    xsi_set_current_line(382, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB316;
    goto LAB1;

LAB316:    xsi_set_current_line(382, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(383, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(384, ng1);
    t2 = (t0 + 9088);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB317;
    goto LAB1;

LAB317:    xsi_set_current_line(385, ng1);

LAB318:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB322;

LAB320:    if (*((unsigned int *)t2) == 0)
        goto LAB319;

LAB321:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB322:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB324;

LAB323:    t22 = *((unsigned int *)t13);
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
        goto LAB325;

LAB326:    xsi_set_current_line(386, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB328;
    goto LAB1;

LAB319:    *((unsigned int *)t13) = 1;
    goto LAB322;

LAB324:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB323;

LAB325:    xsi_set_current_line(385, ng1);
    t29 = (t0 + 9104);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB327;
    goto LAB1;

LAB327:    goto LAB318;

LAB328:    xsi_set_current_line(386, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(387, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(390, ng1);
    t2 = (t0 + 9120);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB329;
    goto LAB1;

LAB329:    xsi_set_current_line(391, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB330;
    goto LAB1;

LAB330:    xsi_set_current_line(391, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(392, ng1);
    t2 = (t0 + 9136);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB331;
    goto LAB1;

LAB331:    xsi_set_current_line(393, ng1);

LAB332:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB336;

LAB334:    if (*((unsigned int *)t2) == 0)
        goto LAB333;

LAB335:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB336:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB338;

LAB337:    t22 = *((unsigned int *)t13);
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
        goto LAB339;

LAB340:    xsi_set_current_line(394, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB342;
    goto LAB1;

LAB333:    *((unsigned int *)t13) = 1;
    goto LAB336;

LAB338:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB337;

LAB339:    xsi_set_current_line(393, ng1);
    t29 = (t0 + 9152);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB341;
    goto LAB1;

LAB341:    goto LAB332;

LAB342:    xsi_set_current_line(394, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(395, ng1);

LAB343:    t2 = (t0 + 2256U);
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
        goto LAB344;

LAB345:    xsi_set_current_line(396, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(401, ng1);
    t2 = (t0 + 9184);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB347;
    goto LAB1;

LAB344:    xsi_set_current_line(395, ng1);
    t11 = (t0 + 9168);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB346;
    goto LAB1;

LAB346:    goto LAB343;

LAB347:    xsi_set_current_line(402, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB348;
    goto LAB1;

LAB348:    xsi_set_current_line(402, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(403, ng1);
    t2 = (t0 + 9200);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB349;
    goto LAB1;

LAB349:    xsi_set_current_line(404, ng1);

LAB350:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB354;

LAB352:    if (*((unsigned int *)t2) == 0)
        goto LAB351;

LAB353:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB354:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB356;

LAB355:    t22 = *((unsigned int *)t13);
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
        goto LAB357;

LAB358:    xsi_set_current_line(405, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB360;
    goto LAB1;

LAB351:    *((unsigned int *)t13) = 1;
    goto LAB354;

LAB356:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB355;

LAB357:    xsi_set_current_line(404, ng1);
    t29 = (t0 + 9216);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB359;
    goto LAB1;

LAB359:    goto LAB350;

LAB360:    xsi_set_current_line(405, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(406, ng1);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB362;

LAB361:    t5 = (t3 + 4);
    t10 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t10))
        goto LAB362;

LAB363:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB364;

LAB365:    xsi_set_current_line(409, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = (t0 + 1936U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t4, 64, (char)118, t5, 8);

LAB366:    xsi_set_current_line(410, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB367;
    goto LAB1;

LAB362:    *((unsigned int *)t13) = 1;
    goto LAB363;

LAB364:    xsi_set_current_line(407, ng1);
    t12 = (t0 + 1936U);
    t29 = *((char **)t12);
    t12 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t0, (char)118, t29, 8, (char)118, t4, 64);
    goto LAB366;

LAB367:    xsi_set_current_line(411, ng1);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng27, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(412, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_416_3(char *t0)
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

LAB2:    xsi_set_current_line(417, ng1);
    t2 = (t0 + 7008);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(417, ng1);
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

LAB16:    t21 = (t0 + 9456);
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
    t35 = (t0 + 9232);
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

LAB16:    t21 = (t0 + 9520);
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
    t35 = (t0 + 9248);
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
	static char *pe[] = {(void *)Gate_62_0,(void *)Gate_63_1,(void *)Initial_101_2,(void *)Always_416_3,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000003175058442_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003175058442_3671711236.didat");
	xsi_register_executes(pe);
}
