/*
* Copyright (C) 2012-2014 jingchun.zhang email: jczhang AT 126.com ; danezhang77 AT gmail.com
* 
* 56VFS may be copied only under the terms of the GNU General Public License V3
* Please visit the github https://github.com/jingchunzhang/56vfs for more detail.
*/

#ifndef _FDINFO_H_
#define _FDINFO_H_
#include "global.h"

extern struct conn *acon ;
extern int maxfds; 
extern int init_fdinfo(void);		//��ʼ��ȫ��ʹ�õ�fd�����Դ
extern void fini_fdinfo(void);		//�ͷ�fdʹ�õ������Դ
#endif
