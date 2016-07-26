#include <stdio.h>
/*bool isover(struct axis l1,struct axis r1,struct axis l2,struct axis r2)
{

}*/
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    
    if(x1>x4||x3>x2)
    printf("not overlapping");
    else if(y1<y4||y3<y2)
    printf("not overlapping");
    else
    printf("overlapping");
    return 0;
      
}
