#include<stdio.h>
#include<string.h>
int main()
{
    int b,s;
    printf("CGPA\n");
    printf("Enter which type of university would you prefer ?\nEnter your option=\n");
    printf("1.Public University\n2.Private University\nOption = ");
    scanf("%d",&b);
    if(b==1)
    {
        int t=1;
        while(t==1)
        {


            int i,j,k,n,num,m;
            float a,x,g,s,cr,y,fa1=0,fa,p=0;
            printf("Enter the number of your semesters=");
            scanf("%d",&m);
            for(j=1; j<=m; j++)
            {


                printf("Enter your number of your subjects in semester-%d=",j);
                scanf("%d",&n);
                for(i=1,k=1,s=0.00,cr=0.00; i<=n; i++,k++)
                {

                    printf("\nEnter the number of your subject-%d=",k);
                    scanf("%f",&x);
                    if(x>100 || x<0)
                    {
                        printf("Invalid marks, the answer may be wrong and incomplete.....\n");
                        break;
                    }
                    printf("\nEnter the credit of your subject-%d=",k);
                    scanf("%f",&y);
                    if(x>=80) g=4.00;//A
                    else if(x>=75 && x<80) g=3.75;//A-
                    else if(x>=70 && x<75) g=3.50;//b+
                    else if(x>=65 && x<70) g=3.25;//B
                    else if(x>=60 && x<65) g=3.00;//b-
                    else if(x>=55 && x<60)  g=2.75;//c+
                    else if(x>=50 && x<55)  g=2.50;//C
                    else if(x>=45 && x<50)  g=2.25;//c-
                    else if(x>=40 && x<45)  g=2.00;//d
                    else if(x<40) g=0.00;//F
                    printf("\nGpa on this subject= %.2f\n",g);

                    s=s+(y*g);//Gpa * credit in one subject

                    cr=cr+y;//total credit in one semester

                }
                p=p+cr;

                a=s/cr;
                printf("\n\nYour GPA is in semester-%d = %.2f\n\n",j,a);
                fa1=fa1+(a*cr);
            }
            fa=fa1/p;
            printf("\n\n\nYour final CGPA is = %.2f",fa);
            printf("\n\nDo you want to do it again ? \npress 1 or press 0 to exit\n\n");
            scanf("%d",&t);

        }

    }
    else if(b==2)
    {

        printf("\n1.By number of per subject ?\n2.By grade ?\n");
        scanf("%d",&s);
        if(s==1)
        {

            int t=1;
            while(t==1)
            {


                int i,j,k,n,num,m;
                float a,x,g,s,cr,y,fa1=0,fa,p=0;
                printf("Enter the number of your semesters=");
                scanf("%d",&m);
                for(j=1; j<=m; j++)
                {


                    printf("Enter your number of your subjects in semester-%d=",j);
                    scanf("%d",&n);
                    for(i=1,k=1,s=0.00,cr=0.00; i<=n; i++,k++)
                    {

                        printf("\nEnter the number of your subject-%d=",k);
                        scanf("%f",&x);
                        if(x>100 || x<0)
                        {
                            printf("Invalid marks, the answer may be wrong and incomplete.....\n");
                            break;
                        }
                        printf("\nEnter the credit of your subject-%d=",k);
                        scanf("%f",&y);
                        if(x>=93 && x<=100) g=4.00;//A
                        else if(x>=90 && x<92) g=3.70;//A-
                        else if(x>=87 && x<=89) g=3.30;//b+
                        else if(x>=83 && x<=86) g=3.00;//B
                        else if(x>=80 && x<=82) g=2.70;//b-
                        else if(x>=77 && x<=79)  g=2.30;//c+
                        else if(x>=73 && x<=76)  g=2.00;//C
                        else if(x>=70 && x<=72)  g=1.70;//c-
                        else if(x>=67 && x<=69)  g=1.30;//d+
                        else if(x>=60 && x<=66)  g=1.00;//d
                        else if(x<60 && x>=0) g=0.00;//F

                        printf("\nGpa on this subject= %.2f\n",g);

                        s=s+(y*g);//Gpa * credit in one subject

                        cr=cr+y;//total credit in one semester

                    }
                    p=p+cr;

                    a=s/cr;
                    printf("\n\nYour GPA is in semester-%d = %.2f\n\n",j,a);
                    fa1=fa1+(a*cr);
                }
                fa=fa1/p;
                printf("\n\n\nYour final CGPA is = %.2f",fa);
                printf("\n\nDo you want to do it again ? \npress 1 or press 0 to exit\n\n");
                scanf("%d",&t);

            }
        }
        if(s==2)
        {

            int t=1;
            while(t==1)
            {


                int i,j,k,n,num,m;
                float a,g,s,cr,y,fa1=0,fa,p=0;
                char x[10];
                printf("Enter the number of your semesters=");
                scanf("%d",&m);
                for(j=1; j<=m; j++)
                {


                    printf("Enter your number of your subjects in semester-%d=",j);
                    scanf("%d",&n);
                    for(i=1,k=1,s=0.00,cr=0.00; i<=n; i++,k++)
                    {
                        fflush(stdin);

                        printf("\nEnter the Grade of your subject-%d=",k);
                        scanf("%s",x);
                        if(strcmp(x,"A")!=0 && strcmp(x,"A-")!=0 && strcmp(x,"B+")!=0 && strcmp(x,"B")!=0 && strcmp(x,"B-")!=0 && strcmp(x,"C+")!=0 && strcmp(x,"C")!=0 && strcmp(x,"C-")!=0 && strcmp(x,"D+")!=0 && strcmp(x,"D")!=0 && strcmp(x,"F")!=0)
                        {
                            printf("Invalid Grade, the answer may be wrong and incomplete.....\n");
                            break;
                        }
                        fflush(stdin);
                        printf("\nEnter the credit of your subject-%d=",k);
                        scanf("%f",&y);
                        fflush(stdin);

                        if(strcmp(x,"A")==0) g=4.00;//A
                        else if(strcmp(x,"A-")==0) g=3.70;//A-
                        else if(strcmp(x,"B+")==0) g=3.30;//b+
                        else if(strcmp(x,"B")==0) g=3.00;//B
                        else if(strcmp(x,"B-")==0) g=2.70;//b-
                        else if(strcmp(x,"C+")==0)  g=2.30;//c+
                        else if(strcmp(x,"C")==0)  g=2.00;//C
                        else if(strcmp(x,"C-")==0)  g=1.70;//c-
                        else if(strcmp(x,"D+")==0)  g=1.30;//d+v
                        else if(strcmp(x,"D")==0)  g=1.00;//d
                        else if(strcmp(x,"F")==0) g=0.00;//F
                        printf("\nGpa on this subject= %.2f\n",g);

                        s=s+(y*g);//Gpa * credit in one subject

                        cr=cr+y;//total credit in one semester

                    }
                    p=p+cr;

                    a=s/cr;
                    printf("\n\nYour GPA is in semester-%d = %.2f\n\n",j,a);
                    fa1=fa1+(a*cr);
                }
                fa=fa1/p;
                printf("\n\n\nYour final CGPA is = %.2f",fa);
                printf("\n\nDo you want to do it again ? \npress 1 or press 0 to exit\n\n");
                scanf("%d",&t);

            }

        }
    }
    return 0;
}


