/* 
 * �����Ϊ��ѡ���Դ�����
 * ������İ�Ȩ(����Դ�뼰�����Ʒ����汾)��һ�й������С�
 * ����������ʹ�á������������
 * ��Ҳ�������κ���ʽ���κ�Ŀ��ʹ�ñ����(����Դ�뼰�����Ʒ����汾)���������κΰ�Ȩ���ơ�
 * =====================
 * ����: ������
 * ����: sunmingbao@126.com
 */

#include <stdio.h>
#include "tty_cfg.h"

#include "debug.h"
#include "a.h"

int main(int argc, char *argv[])
{
    DBG_PRINT("2+3=%d", add_num(2, 3));

set_tty_input_to_raw_mode();
	while (1)
	{

	    DBG_PRINT("%c", getchar());

	}
    return 0;
}

