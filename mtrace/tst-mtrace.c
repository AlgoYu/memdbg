#include <mcheck.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv)
{
  /* 1.����MALLOC_TRACE��������,ָ��������ļ���������·�� */
  setenv("MALLOC_TRACE", "mmlog", 1);
	
  /* 2.Enable memory usage tracing. */
  mtrace();
  
   /* 3.malloc memory. */
  char *nofree = (char *)malloc(32);

  /* 4.no free test. */
  //free(nofree);

  return 0;
}