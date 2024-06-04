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
static const char *ng0 = "D:/CSA Project/RISCV_Project/extractor.v";
static int ng1[] = {9, 0};
static int ng2[] = {0, 0};
static int ng3[] = {54, 0};
static int ng4[] = {63, 0};
static int ng5[] = {10, 0};
static int ng6[] = {11, 0};
static int ng7[] = {52, 0};
static int ng8[] = {12, 0};



static void Always_6_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t22[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t58[16];
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
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 920);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(9, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(10, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(16, ng0);

LAB14:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(23, ng0);

LAB23:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 20);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    t5 = (t0 + 828);
    t7 = (t0 + 828);
    t14 = (t7 + 44U);
    t16 = *((char **)t14);
    t23 = ((char*)((ng6)));
    t24 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t15, t22, t33, ((int*)(t16)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t15 + 4);
    t17 = *((unsigned int *)t25);
    t43 = (!(t17));
    t32 = (t22 + 4);
    t18 = *((unsigned int *)t32);
    t46 = (!(t18));
    t47 = (t43 && t46);
    t36 = (t33 + 4);
    t19 = *((unsigned int *)t36);
    t50 = (!(t19));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    xsi_vlog_mul_concat(t58, 52, 1, t2, 1U, t6, 1);
    t7 = (t0 + 828);
    t14 = (t0 + 828);
    t16 = (t14 + 44U);
    t23 = *((char **)t16);
    t24 = ((char*)((ng4)));
    t25 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t15, t22, t33, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t32 = (t15 + 4);
    t17 = *((unsigned int *)t32);
    t43 = (!(t17));
    t36 = (t22 + 4);
    t18 = *((unsigned int *)t36);
    t46 = (!(t18));
    t47 = (t43 && t46);
    t37 = (t33 + 4);
    t19 = *((unsigned int *)t37);
    t50 = (!(t19));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB26;

LAB27:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(11, ng0);

LAB9:    xsi_set_current_line(12, ng0);
    t7 = (t0 + 600U);
    t14 = *((char **)t7);
    memset(t15, 0, 8);
    t7 = (t15 + 4);
    t16 = (t14 + 4);
    t13 = *((unsigned int *)t14);
    t17 = (t13 >> 8);
    *((unsigned int *)t15) = t17;
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 8);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t20 & 15U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 15U);
    t23 = (t0 + 600U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 25);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 25);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 63U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 63U);
    xsi_vlogtype_concat(t6, 10, 10, 2U, t22, 6, t15, 4);
    t32 = (t0 + 828);
    t36 = (t0 + 828);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    t40 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t35 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 30);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 30);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    xsi_vlog_mul_concat(t58, 54, 1, t2, 1U, t6, 1);
    t7 = (t0 + 828);
    t14 = (t0 + 828);
    t16 = (t14 + 44U);
    t23 = *((char **)t16);
    t24 = ((char*)((ng4)));
    t25 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t22, t33, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t32 = (t15 + 4);
    t17 = *((unsigned int *)t32);
    t43 = (!(t17));
    t36 = (t22 + 4);
    t18 = *((unsigned int *)t36);
    t46 = (!(t18));
    t47 = (t43 && t46);
    t37 = (t33 + 4);
    t19 = *((unsigned int *)t37);
    t50 = (!(t19));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t52 = *((unsigned int *)t35);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t33);
    t55 = *((unsigned int *)t34);
    t56 = (t54 - t55);
    t57 = (t56 + 1);
    xsi_vlogvar_wait_assign_value(t32, t6, t53, *((unsigned int *)t34), t57, 0LL);
    goto LAB11;

LAB12:    t20 = *((unsigned int *)t33);
    t53 = (t20 + 0);
    t21 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t22);
    t56 = (t21 - t26);
    t57 = (t56 + 1);
    xsi_vlogvar_wait_assign_value(t7, t58, t53, *((unsigned int *)t22), t57, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(18, ng0);

LAB18:    xsi_set_current_line(19, ng0);
    t7 = (t0 + 600U);
    t14 = *((char **)t7);
    memset(t15, 0, 8);
    t7 = (t15 + 4);
    t16 = (t14 + 4);
    t13 = *((unsigned int *)t14);
    t17 = (t13 >> 7);
    *((unsigned int *)t15) = t17;
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 7);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t20 & 31U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 31U);
    t23 = (t0 + 600U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 25);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 25);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 127U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 127U);
    xsi_vlogtype_concat(t6, 12, 12, 2U, t22, 7, t15, 5);
    t32 = (t0 + 828);
    t36 = (t0 + 828);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    t40 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t35 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    xsi_vlog_mul_concat(t58, 52, 1, t2, 1U, t6, 1);
    t7 = (t0 + 828);
    t14 = (t0 + 828);
    t16 = (t14 + 44U);
    t23 = *((char **)t16);
    t24 = ((char*)((ng4)));
    t25 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t15, t22, t33, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t32 = (t15 + 4);
    t17 = *((unsigned int *)t32);
    t43 = (!(t17));
    t36 = (t22 + 4);
    t18 = *((unsigned int *)t36);
    t46 = (!(t18));
    t47 = (t43 && t46);
    t37 = (t33 + 4);
    t19 = *((unsigned int *)t37);
    t50 = (!(t19));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB21;

LAB22:    goto LAB17;

LAB19:    t52 = *((unsigned int *)t35);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t33);
    t55 = *((unsigned int *)t34);
    t56 = (t54 - t55);
    t57 = (t56 + 1);
    xsi_vlogvar_wait_assign_value(t32, t6, t53, *((unsigned int *)t34), t57, 0LL);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t33);
    t53 = (t20 + 0);
    t21 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t22);
    t56 = (t21 - t26);
    t57 = (t56 + 1);
    xsi_vlogvar_wait_assign_value(t7, t58, t53, *((unsigned int *)t22), t57, 0LL);
    goto LAB22;

LAB24:    t20 = *((unsigned int *)t33);
    t53 = (t20 + 0);
    t21 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t22);
    t56 = (t21 - t26);
    t57 = (t56 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t53, *((unsigned int *)t22), t57, 0LL);
    goto LAB25;

LAB26:    t20 = *((unsigned int *)t33);
    t53 = (t20 + 0);
    t21 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t22);
    t56 = (t21 - t26);
    t57 = (t56 + 1);
    xsi_vlogvar_wait_assign_value(t7, t58, t53, *((unsigned int *)t22), t57, 0LL);
    goto LAB27;

}


extern void work_m_00000000001786838565_0427295107_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000001786838565_0427295107", "isim/tb_isim_beh.exe.sim/work/m_00000000001786838565_0427295107.didat");
	xsi_register_executes(pe);
}
