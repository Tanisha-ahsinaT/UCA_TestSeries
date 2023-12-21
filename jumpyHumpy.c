#include <stdio.h>
#include <limits.h>
int main(){
	int max_Stamina=INT_MIN;
	int num;
	int val=0;
	int temp=0;
	scanf("%d", &num);
	int arr[num];
	int i;
	for(i=0; i<num; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<num; i++)
	{
		   val=arr[i];
           temp=arr[i];
           int j;
           for(j=i;j<num-1;j++)
           {
               if(arr[j+1]>temp)
               {
                   temp=arr[j+1];
                   val=val^temp;
               }
               else
               {
                   continue;
               }
			}
			if(max_Stamina<val)
			{
				max_Stamina=val;
			}
	}             
	printf("%d",max_Stamina);
}
