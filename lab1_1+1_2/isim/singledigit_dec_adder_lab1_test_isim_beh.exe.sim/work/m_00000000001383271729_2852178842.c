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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/singledigit_dec_adder_lab1/singledigit_dec_adder_lab1.v";
static int ng1[] = {9, 0};
static unsigned int ng2[] = {6U, 0U};



static void Always_37_0(char *t0)
{
    char t7[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 5, t5, 4, t6, 4);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 5, t7, 5, t8, 1);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 4);
    t10 = (t0 + 1196);
    xsi_vlogvar_assign_value(t10, t9, 4, 0, 1);
    goto LAB2;

}

static void Always_44_1(char *t0)
{
    char t4[8];
    char t12[8];
    char t22[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 1196);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t4, 32, 5, 2U, t10, 1, t7, 4);
    t11 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB7;

LAB6:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) > *((unsigned int *)t11))
        goto LAB8;

LAB9:    t16 = (t12 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1196);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 5, 5, 2U, t8, 1, t5, 4);
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 4);
    t10 = (t0 + 1104);
    xsi_vlogvar_assign_value(t10, t4, 4, 0, 1);

LAB13:    goto LAB2;

LAB7:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(47, ng0);
    t23 = (t0 + 1288);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 1196);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    xsi_vlogtype_concat(t22, 5, 5, 2U, t28, 1, t25, 4);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 5, t22, 5, t29, 5);
    t31 = (t0 + 1012);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 4);
    t32 = (t0 + 1104);
    xsi_vlogvar_assign_value(t32, t30, 4, 0, 1);
    goto LAB13;

}


extern void work_m_00000000001383271729_2852178842_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000001383271729_2852178842", "isim/singledigit_dec_adder_lab1_test_isim_beh.exe.sim/work/m_00000000001383271729_2852178842.didat");
	xsi_register_executes(pe);
}
