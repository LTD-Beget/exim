/* $Cambridge: exim/src/src/dkim.h,v 1.1.2.2 2009/02/24 18:43:59 tom Exp $ */

/*************************************************
*     Exim - an Internet mail transport agent    *
*************************************************/

/* Copyright (c) University of Cambridge 2009 */
/* See the file NOTICE for conditions of use and distribution. */

uschar *dkim_exim_sign(int ,
                       uschar *,
                       uschar *,
                       uschar *,
                       uschar *,
                       uschar *);

void dkim_exim_verify_init(void);
void dkim_exim_verify_finish(void);
int dkim_exim_verify_result(uschar *domain,
                            uschar **,
                            uschar **);