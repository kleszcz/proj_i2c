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
static const char *ng1 = "C:/Users/Jan/Desktop/proj_i2c/tb.v";
static int ng2[] = {0, 0};
static const char *ng3 = "\nstatus: %t Testbench started\n\n";
static int ng4[] = {10, 0};
static const char *ng5 = "status: %t done reset";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {250U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {200U, 0U};
static unsigned int ng10[] = {128U, 0U};
static unsigned int ng11[] = {32U, 0U};
static unsigned int ng12[] = {144U, 0U};
static const char *ng13 = "status: %t generate 'start', write cmd %0h (slave address+write)";
static const char *ng14 = "status: %t tip==0";
static unsigned int ng15[] = {16U, 0U};
static const char *ng16 = "status: %t write slave memory address 01";
static unsigned int ng17[] = {165U, 0U};
static const char *ng18 = "status: %t write data a5";
static unsigned int ng19[] = {90U, 0U};
static unsigned int ng20[] = {80U, 0U};
static const char *ng21 = "status: %t write next data 5a, generate 'stop'";
static unsigned int ng22[] = {33U, 0U};
static const char *ng23 = "status: %t generate 'repeated start', write cmd %0h (slave address+read)";
static const char *ng24 = "status: %t read + ack";
static const char *ng25 = "\nERROR: Expected a5, received %x at time %t";
static const char *ng26 = "status: %t received %x";
static const char *ng27 = "status: %t Testbench done";
static unsigned int ng28[] = {0U, 1U};

static void NetReassign_222_4(char *);


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

LAB2:    t2 = (t0 + 9624);
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
    t16 = (t0 + 9624);
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

LAB2:    t2 = (t0 + 9688);
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
    t16 = (t0 + 9688);
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
    t5 = (t0 + 12892);
    *((int *)t5) = t9;

LAB7:    t10 = (t0 + 12892);
    if (*((int *)t10) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(125, ng1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(130, ng1);
    t2 = (t0 + 8280);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB8:    xsi_set_current_line(124, ng1);
    t11 = (t0 + 8264);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    t2 = (t0 + 12892);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB11:    xsi_set_current_line(131, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(131, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(132, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(133, ng1);
    t2 = (t0 + 8296);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(134, ng1);

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

LAB22:    xsi_set_current_line(135, ng1);
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

LAB21:    xsi_set_current_line(134, ng1);
    t29 = (t0 + 8312);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    goto LAB14;

LAB24:    xsi_set_current_line(135, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(137, ng1);
    t2 = (t0 + 8328);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(138, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(138, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(139, ng1);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(140, ng1);
    t2 = (t0 + 8344);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(141, ng1);

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

LAB36:    xsi_set_current_line(142, ng1);
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

LAB35:    xsi_set_current_line(141, ng1);
    t29 = (t0 + 8360);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    goto LAB28;

LAB38:    xsi_set_current_line(142, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(145, ng1);
    t2 = (t0 + 8376);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(146, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(146, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(147, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(148, ng1);
    t2 = (t0 + 8392);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(149, ng1);

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

LAB50:    xsi_set_current_line(150, ng1);
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

LAB49:    xsi_set_current_line(149, ng1);
    t29 = (t0 + 8408);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    goto LAB42;

LAB52:    xsi_set_current_line(150, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(154, ng1);
    t2 = (t0 + 8424);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(155, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(155, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(156, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(157, ng1);
    t2 = (t0 + 8440);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(158, ng1);

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

LAB64:    xsi_set_current_line(159, ng1);
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

LAB63:    xsi_set_current_line(158, ng1);
    t29 = (t0 + 8456);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    goto LAB56;

LAB66:    xsi_set_current_line(159, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(161, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    xsi_set_current_line(161, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(162, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(163, ng1);
    t2 = (t0 + 8472);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(164, ng1);

LAB69:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t2) == 0)
        goto LAB70;

LAB72:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB73:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB75;

LAB74:    t22 = *((unsigned int *)t13);
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
        goto LAB76;

LAB77:    xsi_set_current_line(165, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB70:    *((unsigned int *)t13) = 1;
    goto LAB73;

LAB75:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB74;

LAB76:    xsi_set_current_line(164, ng1);
    t29 = (t0 + 8488);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    goto LAB69;

LAB79:    xsi_set_current_line(165, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(167, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng11)));
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(170, ng1);
    t2 = (t0 + 8504);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(171, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(171, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(172, ng1);
    t2 = (t0 + 8520);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(173, ng1);

LAB83:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB87;

LAB85:    if (*((unsigned int *)t2) == 0)
        goto LAB84;

LAB86:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB87:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB89;

LAB88:    t22 = *((unsigned int *)t13);
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
        goto LAB90;

LAB91:    xsi_set_current_line(174, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB84:    *((unsigned int *)t13) = 1;
    goto LAB87;

LAB89:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB88;

LAB90:    xsi_set_current_line(173, ng1);
    t29 = (t0 + 8536);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    goto LAB83;

LAB93:    xsi_set_current_line(174, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(175, ng1);

LAB94:    t2 = (t0 + 2256U);
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
        goto LAB95;

LAB96:    xsi_set_current_line(176, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(179, ng1);
    t2 = (t0 + 8568);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB95:    xsi_set_current_line(175, ng1);
    t11 = (t0 + 8552);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    goto LAB94;

LAB98:    xsi_set_current_line(180, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB99:    xsi_set_current_line(180, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(181, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(182, ng1);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(183, ng1);
    t2 = (t0 + 8584);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB100:    xsi_set_current_line(184, ng1);

LAB101:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB105;

LAB103:    if (*((unsigned int *)t2) == 0)
        goto LAB102;

LAB104:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB105:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB107;

LAB106:    t22 = *((unsigned int *)t13);
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
        goto LAB108;

LAB109:    xsi_set_current_line(185, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB102:    *((unsigned int *)t13) = 1;
    goto LAB105;

LAB107:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB106;

LAB108:    xsi_set_current_line(184, ng1);
    t29 = (t0 + 8600);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB110:    goto LAB101;

LAB111:    xsi_set_current_line(185, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(193, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(197, ng1);
    t2 = (t0 + 8616);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB112:    xsi_set_current_line(198, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB113:    xsi_set_current_line(198, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(199, ng1);
    t2 = (t0 + 8632);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB114:    xsi_set_current_line(200, ng1);

LAB115:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t2) == 0)
        goto LAB116;

LAB118:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB119:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB121;

LAB120:    t22 = *((unsigned int *)t13);
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
        goto LAB122;

LAB123:    xsi_set_current_line(201, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB116:    *((unsigned int *)t13) = 1;
    goto LAB119;

LAB121:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB120;

LAB122:    xsi_set_current_line(200, ng1);
    t29 = (t0 + 8648);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB124:    goto LAB115;

LAB125:    xsi_set_current_line(201, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(202, ng1);

LAB126:    t2 = (t0 + 2256U);
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
        goto LAB127;

LAB128:    xsi_set_current_line(203, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(207, ng1);
    t2 = (t0 + 8680);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB127:    xsi_set_current_line(202, ng1);
    t11 = (t0 + 8664);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB129:    goto LAB126;

LAB130:    xsi_set_current_line(208, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB131:    xsi_set_current_line(208, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(209, ng1);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(210, ng1);
    t2 = (t0 + 8696);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB132;
    goto LAB1;

LAB132:    xsi_set_current_line(211, ng1);

LAB133:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB137;

LAB135:    if (*((unsigned int *)t2) == 0)
        goto LAB134;

LAB136:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB137:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB139;

LAB138:    t22 = *((unsigned int *)t13);
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
        goto LAB140;

LAB141:    xsi_set_current_line(212, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB134:    *((unsigned int *)t13) = 1;
    goto LAB137;

LAB139:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB138;

LAB140:    xsi_set_current_line(211, ng1);
    t29 = (t0 + 8712);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB142:    goto LAB133;

LAB143:    xsi_set_current_line(212, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(214, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB144;
    goto LAB1;

LAB144:    xsi_set_current_line(214, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(215, ng1);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(216, ng1);
    t2 = (t0 + 8728);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB145:    xsi_set_current_line(217, ng1);

LAB146:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB150;

LAB148:    if (*((unsigned int *)t2) == 0)
        goto LAB147;

LAB149:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB150:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB152;

LAB151:    t22 = *((unsigned int *)t13);
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
        goto LAB153;

LAB154:    xsi_set_current_line(218, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB156;
    goto LAB1;

LAB147:    *((unsigned int *)t13) = 1;
    goto LAB150;

LAB152:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB151;

LAB153:    xsi_set_current_line(217, ng1);
    t29 = (t0 + 8744);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB155;
    goto LAB1;

LAB155:    goto LAB146;

LAB156:    xsi_set_current_line(218, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(219, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(221, ng1);

LAB157:    t2 = (t0 + 3376U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(222, ng1);
    t2 = (t0 + 12896);
    memset(t2, -1, 4);
    t6 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t6 & 1U);
    NetReassign_222_4(t0);
    xsi_set_current_line(223, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB161;
    goto LAB1;

LAB158:    xsi_set_current_line(221, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB160;
    goto LAB1;

LAB160:    goto LAB157;

LAB161:    xsi_set_current_line(224, ng1);
    t2 = (t0 + 3336U);
    xsi_vlogsignal_release_indexed(t2, 0, 0);
    xsi_set_current_line(227, ng1);
    t2 = (t0 + 8760);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB162;
    goto LAB1;

LAB162:    xsi_set_current_line(228, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB163:    xsi_set_current_line(228, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(229, ng1);
    t2 = (t0 + 8776);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB164;
    goto LAB1;

LAB164:    xsi_set_current_line(230, ng1);

LAB165:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB169;

LAB167:    if (*((unsigned int *)t2) == 0)
        goto LAB166;

LAB168:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB169:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB171;

LAB170:    t22 = *((unsigned int *)t13);
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
        goto LAB172;

LAB173:    xsi_set_current_line(231, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB166:    *((unsigned int *)t13) = 1;
    goto LAB169;

LAB171:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB170;

LAB172:    xsi_set_current_line(230, ng1);
    t29 = (t0 + 8792);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB174;
    goto LAB1;

LAB174:    goto LAB165;

LAB175:    xsi_set_current_line(231, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(232, ng1);

LAB176:    t2 = (t0 + 2256U);
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
        goto LAB177;

LAB178:    xsi_set_current_line(233, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(237, ng1);
    t2 = (t0 + 8824);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB180;
    goto LAB1;

LAB177:    xsi_set_current_line(232, ng1);
    t11 = (t0 + 8808);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB179;
    goto LAB1;

LAB179:    goto LAB176;

LAB180:    xsi_set_current_line(238, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB181;
    goto LAB1;

LAB181:    xsi_set_current_line(238, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(239, ng1);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(240, ng1);
    t2 = (t0 + 8840);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB182;
    goto LAB1;

LAB182:    xsi_set_current_line(241, ng1);

LAB183:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB187;

LAB185:    if (*((unsigned int *)t2) == 0)
        goto LAB184;

LAB186:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB187:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB189;

LAB188:    t22 = *((unsigned int *)t13);
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
        goto LAB190;

LAB191:    xsi_set_current_line(242, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB193;
    goto LAB1;

LAB184:    *((unsigned int *)t13) = 1;
    goto LAB187;

LAB189:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB188;

LAB190:    xsi_set_current_line(241, ng1);
    t29 = (t0 + 8856);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB192;
    goto LAB1;

LAB192:    goto LAB183;

LAB193:    xsi_set_current_line(242, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(244, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB194;
    goto LAB1;

LAB194:    xsi_set_current_line(244, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(245, ng1);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(246, ng1);
    t2 = (t0 + 8872);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB195;
    goto LAB1;

LAB195:    xsi_set_current_line(247, ng1);

LAB196:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB200;

LAB198:    if (*((unsigned int *)t2) == 0)
        goto LAB197;

LAB199:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB200:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB202;

LAB201:    t22 = *((unsigned int *)t13);
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
        goto LAB203;

LAB204:    xsi_set_current_line(248, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB206;
    goto LAB1;

LAB197:    *((unsigned int *)t13) = 1;
    goto LAB200;

LAB202:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB201;

LAB203:    xsi_set_current_line(247, ng1);
    t29 = (t0 + 8888);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB205;
    goto LAB1;

LAB205:    goto LAB196;

LAB206:    xsi_set_current_line(248, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(249, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(253, ng1);
    t2 = (t0 + 8904);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB207;
    goto LAB1;

LAB207:    xsi_set_current_line(254, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB208;
    goto LAB1;

LAB208:    xsi_set_current_line(254, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(255, ng1);
    t2 = (t0 + 8920);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB209;
    goto LAB1;

LAB209:    xsi_set_current_line(256, ng1);

LAB210:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB214;

LAB212:    if (*((unsigned int *)t2) == 0)
        goto LAB211;

LAB213:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB214:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB216;

LAB215:    t22 = *((unsigned int *)t13);
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
        goto LAB217;

LAB218:    xsi_set_current_line(257, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB220;
    goto LAB1;

LAB211:    *((unsigned int *)t13) = 1;
    goto LAB214;

LAB216:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB215;

LAB217:    xsi_set_current_line(256, ng1);
    t29 = (t0 + 8936);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB219;
    goto LAB1;

LAB219:    goto LAB210;

LAB220:    xsi_set_current_line(257, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(258, ng1);

LAB221:    t2 = (t0 + 2256U);
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
        goto LAB222;

LAB223:    xsi_set_current_line(259, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(267, ng1);
    t2 = (t0 + 8968);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB225;
    goto LAB1;

LAB222:    xsi_set_current_line(258, ng1);
    t11 = (t0 + 8952);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB224;
    goto LAB1;

LAB224:    goto LAB221;

LAB225:    xsi_set_current_line(268, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB226;
    goto LAB1;

LAB226:    xsi_set_current_line(268, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(269, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(270, ng1);
    t2 = (t0 + 8984);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB227;
    goto LAB1;

LAB227:    xsi_set_current_line(271, ng1);

LAB228:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB232;

LAB230:    if (*((unsigned int *)t2) == 0)
        goto LAB229;

LAB231:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB232:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB234;

LAB233:    t22 = *((unsigned int *)t13);
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
        goto LAB235;

LAB236:    xsi_set_current_line(272, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB238;
    goto LAB1;

LAB229:    *((unsigned int *)t13) = 1;
    goto LAB232;

LAB234:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB233;

LAB235:    xsi_set_current_line(271, ng1);
    t29 = (t0 + 9000);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB237;
    goto LAB1;

LAB237:    goto LAB228;

LAB238:    xsi_set_current_line(272, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(274, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB239;
    goto LAB1;

LAB239:    xsi_set_current_line(274, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(275, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(276, ng1);
    t2 = (t0 + 9016);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB240;
    goto LAB1;

LAB240:    xsi_set_current_line(277, ng1);

LAB241:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB245;

LAB243:    if (*((unsigned int *)t2) == 0)
        goto LAB242;

LAB244:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB245:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB247;

LAB246:    t22 = *((unsigned int *)t13);
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
        goto LAB248;

LAB249:    xsi_set_current_line(278, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB251;
    goto LAB1;

LAB242:    *((unsigned int *)t13) = 1;
    goto LAB245;

LAB247:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB246;

LAB248:    xsi_set_current_line(277, ng1);
    t29 = (t0 + 9032);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB250;
    goto LAB1;

LAB250:    goto LAB241;

LAB251:    xsi_set_current_line(278, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(280, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng11)));
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(283, ng1);
    t2 = (t0 + 9048);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB252;
    goto LAB1;

LAB252:    xsi_set_current_line(284, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB253;
    goto LAB1;

LAB253:    xsi_set_current_line(284, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(285, ng1);
    t2 = (t0 + 9064);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB254;
    goto LAB1;

LAB254:    xsi_set_current_line(286, ng1);

LAB255:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB259;

LAB257:    if (*((unsigned int *)t2) == 0)
        goto LAB256;

LAB258:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB259:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB261;

LAB260:    t22 = *((unsigned int *)t13);
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
        goto LAB262;

LAB263:    xsi_set_current_line(287, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB265;
    goto LAB1;

LAB256:    *((unsigned int *)t13) = 1;
    goto LAB259;

LAB261:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB260;

LAB262:    xsi_set_current_line(286, ng1);
    t29 = (t0 + 9080);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB264;
    goto LAB1;

LAB264:    goto LAB255;

LAB265:    xsi_set_current_line(287, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(288, ng1);

LAB266:    t2 = (t0 + 2256U);
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
        goto LAB267;

LAB268:    xsi_set_current_line(289, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(292, ng1);
    t2 = (t0 + 9112);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB270;
    goto LAB1;

LAB267:    xsi_set_current_line(288, ng1);
    t11 = (t0 + 9096);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB269;
    goto LAB1;

LAB269:    goto LAB266;

LAB270:    xsi_set_current_line(293, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB271;
    goto LAB1;

LAB271:    xsi_set_current_line(293, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(294, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(295, ng1);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(296, ng1);
    t2 = (t0 + 9128);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB272;
    goto LAB1;

LAB272:    xsi_set_current_line(297, ng1);

LAB273:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB277;

LAB275:    if (*((unsigned int *)t2) == 0)
        goto LAB274;

LAB276:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB277:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB279;

LAB278:    t22 = *((unsigned int *)t13);
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
        goto LAB280;

LAB281:    xsi_set_current_line(298, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB283;
    goto LAB1;

LAB274:    *((unsigned int *)t13) = 1;
    goto LAB277;

LAB279:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB278;

LAB280:    xsi_set_current_line(297, ng1);
    t29 = (t0 + 9144);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB282;
    goto LAB1;

LAB282:    goto LAB273;

LAB283:    xsi_set_current_line(298, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(306, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(310, ng1);
    t2 = (t0 + 9160);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB284;
    goto LAB1;

LAB284:    xsi_set_current_line(311, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB285;
    goto LAB1;

LAB285:    xsi_set_current_line(311, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(312, ng1);
    t2 = (t0 + 9176);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB286;
    goto LAB1;

LAB286:    xsi_set_current_line(313, ng1);

LAB287:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB291;

LAB289:    if (*((unsigned int *)t2) == 0)
        goto LAB288;

LAB290:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB291:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB293;

LAB292:    t22 = *((unsigned int *)t13);
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
        goto LAB294;

LAB295:    xsi_set_current_line(314, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB297;
    goto LAB1;

LAB288:    *((unsigned int *)t13) = 1;
    goto LAB291;

LAB293:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB292;

LAB294:    xsi_set_current_line(313, ng1);
    t29 = (t0 + 9192);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB296;
    goto LAB1;

LAB296:    goto LAB287;

LAB297:    xsi_set_current_line(314, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(315, ng1);

LAB298:    t2 = (t0 + 2256U);
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
        goto LAB299;

LAB300:    xsi_set_current_line(316, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(319, ng1);
    t2 = (t0 + 9224);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB302;
    goto LAB1;

LAB299:    xsi_set_current_line(315, ng1);
    t11 = (t0 + 9208);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB301;
    goto LAB1;

LAB301:    goto LAB298;

LAB302:    xsi_set_current_line(320, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB303;
    goto LAB1;

LAB303:    xsi_set_current_line(320, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(321, ng1);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(322, ng1);
    t2 = (t0 + 9240);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB304;
    goto LAB1;

LAB304:    xsi_set_current_line(323, ng1);

LAB305:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB309;

LAB307:    if (*((unsigned int *)t2) == 0)
        goto LAB306;

LAB308:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB309:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB311;

LAB310:    t22 = *((unsigned int *)t13);
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
        goto LAB312;

LAB313:    xsi_set_current_line(324, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB315;
    goto LAB1;

LAB306:    *((unsigned int *)t13) = 1;
    goto LAB309;

LAB311:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB310;

LAB312:    xsi_set_current_line(323, ng1);
    t29 = (t0 + 9256);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB314;
    goto LAB1;

LAB314:    goto LAB305;

LAB315:    xsi_set_current_line(324, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(326, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB316;
    goto LAB1;

LAB316:    xsi_set_current_line(326, ng1);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(327, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(328, ng1);
    t2 = (t0 + 9272);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB317;
    goto LAB1;

LAB317:    xsi_set_current_line(329, ng1);

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

LAB326:    xsi_set_current_line(330, ng1);
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

LAB325:    xsi_set_current_line(329, ng1);
    t29 = (t0 + 9288);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB327;
    goto LAB1;

LAB327:    goto LAB318;

LAB328:    xsi_set_current_line(330, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(331, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = ((char*)((ng22)));
    xsi_vlogfile_write(1, 0, 0, ng23, 3, t0, (char)118, t4, 64, (char)118, t3, 8);
    xsi_set_current_line(334, ng1);
    t2 = (t0 + 9304);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB329;
    goto LAB1;

LAB329:    xsi_set_current_line(335, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB330;
    goto LAB1;

LAB330:    xsi_set_current_line(335, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(336, ng1);
    t2 = (t0 + 9320);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB331;
    goto LAB1;

LAB331:    xsi_set_current_line(337, ng1);

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

LAB340:    xsi_set_current_line(338, ng1);
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

LAB339:    xsi_set_current_line(337, ng1);
    t29 = (t0 + 9336);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB341;
    goto LAB1;

LAB341:    goto LAB332;

LAB342:    xsi_set_current_line(338, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(339, ng1);

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

LAB345:    xsi_set_current_line(340, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(342, ng1);
    t2 = (t0 + 9368);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB347;
    goto LAB1;

LAB344:    xsi_set_current_line(339, ng1);
    t11 = (t0 + 9352);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB346;
    goto LAB1;

LAB346:    goto LAB343;

LAB347:    xsi_set_current_line(343, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB348;
    goto LAB1;

LAB348:    xsi_set_current_line(343, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(344, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(345, ng1);
    t2 = (t0 + 9384);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB349;
    goto LAB1;

LAB349:    xsi_set_current_line(346, ng1);

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

LAB358:    xsi_set_current_line(347, ng1);
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

LAB357:    xsi_set_current_line(346, ng1);
    t29 = (t0 + 9400);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB359;
    goto LAB1;

LAB359:    goto LAB350;

LAB360:    xsi_set_current_line(347, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(348, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(351, ng1);
    t2 = (t0 + 9416);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB361;
    goto LAB1;

LAB361:    xsi_set_current_line(352, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB362;
    goto LAB1;

LAB362:    xsi_set_current_line(352, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(353, ng1);
    t2 = (t0 + 9432);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB363;
    goto LAB1;

LAB363:    xsi_set_current_line(354, ng1);

LAB364:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB368;

LAB366:    if (*((unsigned int *)t2) == 0)
        goto LAB365;

LAB367:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB368:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB370;

LAB369:    t22 = *((unsigned int *)t13);
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
        goto LAB371;

LAB372:    xsi_set_current_line(355, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB374;
    goto LAB1;

LAB365:    *((unsigned int *)t13) = 1;
    goto LAB368;

LAB370:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB369;

LAB371:    xsi_set_current_line(354, ng1);
    t29 = (t0 + 9448);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB373;
    goto LAB1;

LAB373:    goto LAB364;

LAB374:    xsi_set_current_line(355, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(356, ng1);

LAB375:    t2 = (t0 + 2256U);
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
        goto LAB376;

LAB377:    xsi_set_current_line(357, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(362, ng1);
    t2 = (t0 + 9480);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB379;
    goto LAB1;

LAB376:    xsi_set_current_line(356, ng1);
    t11 = (t0 + 9464);
    *((int *)t11) = 1;
    t12 = (t0 + 6984);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB378;
    goto LAB1;

LAB378:    goto LAB375;

LAB379:    xsi_set_current_line(363, ng1);
    t5 = (t0 + 6760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB380;
    goto LAB1;

LAB380:    xsi_set_current_line(363, ng1);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 5536);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(364, ng1);
    t2 = (t0 + 9496);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB381;
    goto LAB1;

LAB381:    xsi_set_current_line(365, ng1);

LAB382:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t14 = (t8 & t7);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB386;

LAB384:    if (*((unsigned int *)t2) == 0)
        goto LAB383;

LAB385:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB386:    t10 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB388;

LAB387:    t22 = *((unsigned int *)t13);
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
        goto LAB389;

LAB390:    xsi_set_current_line(366, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB392;
    goto LAB1;

LAB383:    *((unsigned int *)t13) = 1;
    goto LAB386;

LAB388:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB387;

LAB389:    xsi_set_current_line(365, ng1);
    t29 = (t0 + 9512);
    *((int *)t29) = 1;
    t30 = (t0 + 6984);
    *((char **)t30) = t29;
    *((char **)t1) = &&LAB391;
    goto LAB1;

LAB391:    goto LAB382;

LAB392:    xsi_set_current_line(366, ng1);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(367, ng1);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB394;

LAB393:    t5 = (t3 + 4);
    t10 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t10))
        goto LAB394;

LAB395:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB396;

LAB397:    xsi_set_current_line(370, ng1);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    t3 = (t0 + 1936U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t0, (char)118, t4, 64, (char)118, t5, 8);

LAB398:    xsi_set_current_line(373, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB399;
    goto LAB1;

LAB394:    *((unsigned int *)t13) = 1;
    goto LAB395;

LAB396:    xsi_set_current_line(368, ng1);
    t12 = (t0 + 1936U);
    t29 = *((char **)t12);
    t12 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t29, 8, (char)118, t4, 64);
    goto LAB398;

LAB399:    xsi_set_current_line(374, ng1);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 100.00000000000000);
    xsi_vlogfile_write(1, 0, 0, ng27, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(375, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_379_3(char *t0)
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

LAB2:    xsi_set_current_line(380, ng1);
    t2 = (t0 + 7008);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(380, ng1);
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

static void NetReassign_222_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng1);
    t3 = 0;
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12896);
    t5 = (t0 + 12896);
    memset(t6, 0, 4);
    t7 = memcmp(t5, t6, 4);
    if (t7 != 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t8 = (t0 + 9752);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t2 + 4);
    t16 = *((unsigned int *)t2);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    t21 = (t0 + 7256);
    xsi_driver_vforce_trans_indexed(t8, 0, 0, t4, t21);
    t3 = 1;
    goto LAB5;

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

LAB0:    t1 = (t0 + 7696U);
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

LAB16:    t21 = (t0 + 9816);
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
    t35 = (t0 + 9528);
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

LAB0:    t1 = (t0 + 7944U);
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

LAB16:    t21 = (t0 + 9880);
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
    t35 = (t0 + 9544);
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
	static char *pe[] = {(void *)Gate_62_0,(void *)Gate_63_1,(void *)Initial_101_2,(void *)Always_379_3,(void *)NetReassign_222_4,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000003175058442_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003175058442_3671711236.didat");
	xsi_register_executes(pe);
}
