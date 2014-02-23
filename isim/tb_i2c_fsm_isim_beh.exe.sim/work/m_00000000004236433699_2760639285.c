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
static const char *ng0 = "C:/Users/Jan/Documents/GitHub/proj_i2c/i2c_fsm.v";
static unsigned int ng1[] = {200U, 0U};
static unsigned int ng2[] = {128U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {11U, 0U};
static unsigned int ng9[] = {33U, 0U};
static unsigned int ng10[] = {144U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {32U, 0U};
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {96U, 0U};
static unsigned int ng19[] = {7U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {8U, 0U};



static void NetDecl_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15U);

LAB1:    return;
}

static void NetDecl_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7U);

LAB1:    return;
}

static void Always_114_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 9792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 10608);
    *((int *)t2) = 1;
    t3 = (t0 + 9824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);
    t5 = (t0 + 3816U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(124, ng0);

LAB17:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 8216);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8056);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);

LAB15:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(116, ng0);

LAB12:    xsi_set_current_line(117, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 8056);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(120, ng0);

LAB16:    xsi_set_current_line(121, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 8056);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB15;

}

static void Always_128_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 10040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 10624);
    *((int *)t2) = 1;
    t3 = (t0 + 10072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);
    t5 = (t0 + 3816U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(145, ng0);

LAB17:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 8056);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8216);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 8376);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8376);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 7256);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7256);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 7576);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7576);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 8056);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB18:    t6 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB47;

LAB48:
LAB49:
LAB15:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(131, ng0);

LAB12:    xsi_set_current_line(132, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 8216);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB11;

LAB13:    xsi_set_current_line(138, ng0);

LAB16:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 8216);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB15;

LAB19:    xsi_set_current_line(152, ng0);

LAB50:    xsi_set_current_line(153, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 7896);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3976U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB49;

LAB21:    xsi_set_current_line(162, ng0);

LAB55:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7896);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB23:    xsi_set_current_line(168, ng0);

LAB56:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 6376U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t3) == 0)
        goto LAB57;

LAB59:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB60:    t13 = (t4 + 4);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB62;

LAB61:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(175, ng0);

LAB67:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB65:    goto LAB49;

LAB25:    xsi_set_current_line(181, ng0);

LAB68:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7896);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB27:    xsi_set_current_line(187, ng0);

LAB69:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 6376U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t3) == 0)
        goto LAB70;

LAB72:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB73:    t13 = (t4 + 4);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB75;

LAB74:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(194, ng0);

LAB80:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB78:    goto LAB49;

LAB29:    xsi_set_current_line(200, ng0);

LAB81:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7896);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB31:    xsi_set_current_line(208, ng0);

LAB82:    xsi_set_current_line(209, ng0);
    t3 = (t0 + 6376U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB86;

LAB84:    if (*((unsigned int *)t3) == 0)
        goto LAB83;

LAB85:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB86:    t13 = (t4 + 4);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB88;

LAB87:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(215, ng0);

LAB93:    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB91:    goto LAB49;

LAB33:    xsi_set_current_line(221, ng0);

LAB94:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7896);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 7576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB35:    xsi_set_current_line(228, ng0);

LAB95:    xsi_set_current_line(229, ng0);
    t3 = (t0 + 6376U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB99;

LAB97:    if (*((unsigned int *)t3) == 0)
        goto LAB96;

LAB98:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB99:    t13 = (t4 + 4);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB101;

LAB100:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(235, ng0);

LAB106:    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB104:    goto LAB49;

LAB37:    xsi_set_current_line(241, ng0);

LAB107:    xsi_set_current_line(242, ng0);
    t3 = ((char*)((ng17)));
    t6 = (t0 + 8216);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    goto LAB49;

LAB39:    xsi_set_current_line(245, ng0);

LAB108:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7896);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 7576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB41:    xsi_set_current_line(252, ng0);

LAB109:    xsi_set_current_line(253, ng0);
    t3 = (t0 + 6376U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB113;

LAB111:    if (*((unsigned int *)t3) == 0)
        goto LAB110;

LAB112:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB113:    t13 = (t4 + 4);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB115;

LAB114:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(259, ng0);

LAB120:    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB118:    goto LAB49;

LAB43:    xsi_set_current_line(265, ng0);

LAB121:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 8216);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    goto LAB49;

LAB45:    xsi_set_current_line(269, ng0);

LAB122:    xsi_set_current_line(270, ng0);
    t3 = (t0 + 6216U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t3) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t22 = (t18 != 0);
    if (t22 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 8376);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8216);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 4);

LAB125:    goto LAB49;

LAB47:    xsi_set_current_line(276, ng0);

LAB126:    xsi_set_current_line(277, ng0);
    t3 = (t0 + 6376U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB130;

LAB128:    if (*((unsigned int *)t3) == 0)
        goto LAB127;

LAB129:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB130:    t13 = (t4 + 4);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB132;

LAB131:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(283, ng0);

LAB137:    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB135:    goto LAB49;

LAB51:    xsi_set_current_line(157, ng0);

LAB54:    xsi_set_current_line(158, ng0);
    t6 = ((char*)((ng5)));
    t12 = (t0 + 8216);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 4);
    goto LAB53;

LAB57:    *((unsigned int *)t4) = 1;
    goto LAB60;

LAB62:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB61;

LAB63:    xsi_set_current_line(170, ng0);

LAB66:    xsi_set_current_line(171, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7896);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB65;

LAB70:    *((unsigned int *)t4) = 1;
    goto LAB73;

LAB75:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB74;

LAB76:    xsi_set_current_line(189, ng0);

LAB79:    xsi_set_current_line(190, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7896);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB78;

LAB83:    *((unsigned int *)t4) = 1;
    goto LAB86;

LAB88:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB87;

LAB89:    xsi_set_current_line(210, ng0);

LAB92:    xsi_set_current_line(211, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7896);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB91;

LAB96:    *((unsigned int *)t4) = 1;
    goto LAB99;

LAB101:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB100;

LAB102:    xsi_set_current_line(230, ng0);

LAB105:    xsi_set_current_line(231, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7896);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB104;

LAB110:    *((unsigned int *)t4) = 1;
    goto LAB113;

LAB115:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB114;

LAB116:    xsi_set_current_line(254, ng0);

LAB119:    xsi_set_current_line(255, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7896);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB118;

LAB123:    xsi_set_current_line(271, ng0);
    t19 = ((char*)((ng21)));
    t20 = (t0 + 8216);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB125;

LAB127:    *((unsigned int *)t4) = 1;
    goto LAB130;

LAB132:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB131;

LAB133:    xsi_set_current_line(278, ng0);

LAB136:    xsi_set_current_line(279, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7896);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB135;

}

static void Always_293_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 10288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 10640);
    *((int *)t2) = 1;
    t3 = (t0 + 10320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(294, ng0);

LAB5:    xsi_set_current_line(295, ng0);
    t5 = (t0 + 3816U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(308, ng0);

LAB18:    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = (t0 + 8056);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng16)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t4) = 1;

LAB22:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(312, ng0);
    t2 = (t0 + 8056);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng20)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t4) = 1;

LAB29:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(318, ng0);

LAB34:    xsi_set_current_line(319, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6936);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 7096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7096);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB32:
LAB25:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(296, ng0);

LAB13:    xsi_set_current_line(297, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 6936);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(302, ng0);

LAB17:    xsi_set_current_line(303, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 6936);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB21:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(311, ng0);
    t28 = (t0 + 5896U);
    t29 = *((char **)t28);
    t28 = (t0 + 6936);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    goto LAB25;

LAB28:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(313, ng0);

LAB33:    xsi_set_current_line(314, ng0);
    t28 = (t0 + 5896U);
    t29 = *((char **)t28);
    t28 = (t0 + 7096);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

}


extern void work_m_00000000004236433699_2760639285_init()
{
	static char *pe[] = {(void *)NetDecl_39_0,(void *)NetDecl_40_1,(void *)Always_114_2,(void *)Always_128_3,(void *)Always_293_4};
	xsi_register_didat("work_m_00000000004236433699_2760639285", "isim/tb_i2c_fsm_isim_beh.exe.sim/work/m_00000000004236433699_2760639285.didat");
	xsi_register_executes(pe);
}
