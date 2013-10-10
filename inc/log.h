/*
* Copyright (C) 2012-2014 jingchun.zhang email: jczhang AT 126.com ; danezhang77 AT gmail.com
* 
* 56VFS may be copied only under the terms of the GNU General Public License V3
* Please visit the github https://github.com/jingchunzhang/56vfs for more detail.
*/

/*
* Copyright (C) 2012-2014 jingchun.zhang
*
* 56VFS may be copied only under the terms of the GNU General Public License V3
* Please visit the github https://github.com/jingchunzhang/56vfs for more detail.
*/

#ifndef _LOG_H_
#define _LOG_H_
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <time.h>
#include <pthread.h>
#include <errno.h>

#define nowtime() time(0)

enum loglevel {LOG_TRACE = 0, LOG_DEBUG, LOG_NORMAL, LOG_ERROR, LOG_FAULT, LOG_NONE}; 

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * ע����־
 * le		��־������ز���
 * return	>0������־fd������ʧ��
 */
int registerlog(const char* filename, int level, int rotatesize, int rotateintval, int filenum);
int getloglevel(const char* llstr) ;
void logclose(int fd);
/*
 * ��ӡ��־
 * fd		��־�ļ�fd
 * level	��־����
 * fmt		��ʽ�ַ���
 */
void LOG(int fd, int level, const char* fmt, ...); 

int init_log();
#ifdef __cplusplus
}
#endif
#endif
