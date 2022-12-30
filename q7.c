
#include<stdio.h>
#include<math.h>
int main()
{ int a;
double sin0,sin30,sin45,sin60,sin90,cos0,cos30,cos45,cos60,cos90,sec0,sec30,sec45,sec60,tan0,tan30,tan45,tan60,cosec30;
double cosec45,cosec60,cosec90,cot30,cot45,cot60,cot90;
     
        printf("Enter the value of an angle:");
        scanf("%d", &a);
sin0 =0; sin30 = 1/2,sin45 = 1/sqrt(2),sin60 = sqrt(3/2),sin90 = 1;
cos0 = 1; cos30 = sqrt(3)/2; cos45 = 1/sqrt(2); cos60 = 1/2; cosec90 = 1;
tan0 = 0; tan30 = 1/sqrt(3); tan45 = 1; tan60 = 2/sqrt(3); 
 cosec30 = 2; cosec45 = sqrt(2); cosec60 = 2/sqrt(3); cosec90 =1;
sec0 = 1; sec30 = 2/sqrt(3); sec45 = sqrt(3); sec60 = 2; cot30 = sqrt(3); cot45 = 1; cot60 = 1/sqrt(3);
if (a == 0)
{
         printf("sin %f\n",sin0);
         printf("cos %f\n",cos0);
         printf("tan %f\n",tan0);
         printf("cot defined \n");
         printf("sec %f\n",sec0);
         printf("not defined \n");
}
else if (a == 30)
{
         printf("sin %f\n",sin30);
         printf("cos %f\n",cos30);
         printf("tan %f\n",tan30);
         printf("not defined \n");
         printf("sec %f\n",sec30);
         printf("cot %f\n",cot30);    

}
else if (a == 45)
{
         printf("sin %f\n",sin45);
         printf("cos %f\n",cos45);
         printf("tan %f\n",tan45);
         printf("coseec %f\n",cosec45);
         printf("sec %f\n",sec45);
         printf("cot %f\n",cot45);
}
else if (a == 60)
{
         printf("sin %f\n",sin60);
         printf("cos %f\n",cos60);
         printf("tan %f\n",tan60);
         printf("coseec\n %f",cosec60);
         printf("sec %f\n",sec60);
         printf("cot %f\n",cot60);
}

else if (a == 90)
{
         printf("sin %f\n",sin90);
         printf("cos %f\n",cos90);
         printf("not defined \n");
         printf("coseec %f\n",cosec90);
         printf(" not defined \n");
         printf("cot %f\n",cot90);
}
         
else
{
    printf("You are not entering a valid angle");
}







     return 0;

}
