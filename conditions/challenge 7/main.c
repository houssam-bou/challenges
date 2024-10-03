#include <stdio.h>
#include <stdlib.h>

int main()
{

  int j,m,a;
  printf("une date au format jj/mm/aaaa ");
  scanf("%d/%d/%d",&j,&m,&a);
  switch (m)
  {
  case 1 :
    printf("%d-janvier-%d",j,a);
  }




    return 0;
}
