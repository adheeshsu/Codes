#include <stdio.h>
#include<stdlib.h>

int main()
{   int n,i,A,B,C;
    printf("enter the maximum tools in the magazine: ");
    scanf("%d",&n);
    int max_tools[n];
    int actual_pos,demand_pos;
    
    for(i=1;i<=n;i++)
    {
        max_tools[i] = i;
    }
    printf("enter the actual position of tool: ");
    scanf("%d",&actual_pos);
    printf("enter the demanded position of tool: ");
    scanf("%d",&demand_pos);
    
    A = abs(max_tools[actual_pos] - max_tools[demand_pos]);
    B = max_tools[n] + max_tools[actual_pos]  - max_tools[demand_pos];
    C = max_tools[n] - max_tools[actual_pos]  + max_tools[demand_pos];
    
    if(A < B && A < C)
    {
        if (demand_pos < actual_pos)
        {
            printf("rotate anticlock\n");
            printf("the number of positions for the shortest path is %d",A);
        }
        else
          {
             printf("rotate clockwise\n");
             printf("the number of positions for the shortest path is %d",A);
          }
    }
    
    else if (B < C)
          {
            printf("rotate anticlock\n");
            printf("the number of positions for the shortest path is %d",B);
          }
    else
          {
            printf("rotate clockwise\n");
            printf("the number of positions for the shortest path is %d",C);
          }   
}
