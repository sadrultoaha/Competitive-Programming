#include<stdio.h>
#define OPENTIME 3
#define CLOSETIME 3
#define ENTERTIME 5
#define LEFTTIME 5
#define LIFTMOVETIME 4

int main()
{
    int i,j;
    int TestCase ;
    int StudentPosition;
    int LiftPosition;
    int LiftTime;
    int ReachTime;
	scanf("%d",&TestCase);

    for (i=1;i<=TestCase;i++)
    {
        scanf("%d %d",&StudentPosition,&LiftPosition);

        if(LiftPosition > StudentPosition)
        {
            LiftTime = (LiftPosition - StudentPosition)+StudentPosition;
            ReachTime =(LIFTMOVETIME*LiftTime)+OPENTIME+ENTERTIME+CLOSETIME+OPENTIME+LEFTTIME;
            printf("Case %d: %d\n",i,ReachTime);
        }
        else
        {
            LiftTime = ( StudentPosition-LiftPosition )+StudentPosition;
            ReachTime =(LIFTMOVETIME*LiftTime)+OPENTIME+ENTERTIME+CLOSETIME+OPENTIME+LEFTTIME;
            printf("Case %d: %d\n",i,ReachTime);
        }
    }



return 0;
}