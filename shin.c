#include<string.h>
#include<stdio.h>
#include<conio.h>
#include <windows.h>

void sjf()
 {system("cls");
   system("COLOR 03")
int bursttime[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],tat[10];
int totwt=0,tottat=0;
float awt,atat;
char process[5][5],t[10];
printf("\t\t\t\tE");
Sleep(250);
printf("N");
Sleep(250);
printf("T");
Sleep(250);
printf("E");
Sleep(250);
printf("R ");
Sleep(350);

printf("T");
Sleep(250);
printf("H");
Sleep(250);
printf("E ");
Sleep(350);

printf("N");
Sleep(250);
printf("U");
Sleep(250);
printf("M");
Sleep(250);
printf("B");
Sleep(250);
printf("E");
Sleep(250);
printf("R ");
Sleep(350);

printf("O");
Sleep(250);
printf("F ");
Sleep(350);

printf("P");
Sleep(250);
printf("R");
Sleep(250);
printf("O");
Sleep(250);
printf("C");
Sleep(250);
printf("E");
Sleep(250);
printf("S");
Sleep(250);
printf("S ");


scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter process name");
scanf("%s",process[i]);
printf("arrival time");
scanf("%d",&at[i]);
printf("execution time:");
scanf("%d",&bursttime[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(bursttime[i]<bursttime[j])
        {
        temp=at[i];
        at[i]=at[j];
        at[j]=temp;

        temp=bursttime[i];
        bursttime[i]=bursttime[j];
        bursttime[j]=temp;

        strcpy(t,process[i]);
        strcpy(process[i],process[j]);
        strcpy(process[j],t);
        }
    }
}
for(i=0;i<n;i++)
{
    if(i==0)
    st[i]=at[i];
    else
    st[i]=ft[i-1];
    wt[i]=st[i]-at[i];
    ft[i]=st[i]+bursttime[i];
    tat[i]=ft[i]-at[i];
    totwt+=wt[i];
    tottat+=tat[i];
}
awt=(float)totwt/n;
atat=(float)tottat/n;
system("cls");
printf("\nPid\tarrivaltime\texecutiontime \twaiting time\t tatime");
for(i=0;i<n;i++)
printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d",process[i],at[i],bursttime[i],wt[i],tat[i]);
printf("\nAverage waiting time is:%f",awt);
printf("\nAverage turnaroundtime is:%f",atat);
getch();
}

 int bsjf()
{
    system("cls");
    system("COLOR 8F");
int bursttime[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],tat[10];
int totwt=0,tottat=0;
float awt,atat;
char process[5][5],t[10];

printf("\t\t\t\t\tE");
Sleep(250);
printf("N");
Sleep(250);
printf("T");
Sleep(250);
printf("E");
Sleep(250);
printf("R ");
Sleep(350);

printf("T");
Sleep(250);
printf("H");
Sleep(250);
printf("E ");
Sleep(350);

printf("N");
Sleep(250);
printf("U");
Sleep(250);
printf("M");
Sleep(250);
printf("B");
Sleep(250);
printf("E");
Sleep(250);
printf("R ");
Sleep(350);

printf("O");
Sleep(250);
printf("F ");
Sleep(350);

printf("P");
Sleep(250);
printf("R");
Sleep(250);
printf("O");
Sleep(250);
printf("C");
Sleep(250);
printf("E");
Sleep(250);
printf("S");
Sleep(250);
printf("S ");


scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter process name");
scanf("%s",process[i]);
printf("arrival time");
scanf("%d",&at[i]);
printf("execution time:");
scanf("%d",&bursttime[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(bursttime[i]>bursttime[j])
        {
        temp=at[i];
        at[i]=at[j];
        at[j]=temp;

        temp=bursttime[i];
        bursttime[i]=bursttime[j];
        bursttime[j]=temp;

        strcpy(t,process[i]);
        strcpy(process[i],process[j]);
        strcpy(process[j],t);
        }
    }
}
for(i=0;i<n;i++)
{
    if(i==0)
    st[i]=at[i];
    else
    st[i]=ft[i-1];
    wt[i]=st[i]-at[i];
    ft[i]=st[i]+bursttime[i];
    tat[i]=ft[i]-at[i];
    totwt+=wt[i];
    tottat+=tat[i];
}
awt=(float)totwt/n;
atat=(float)tottat/n;
system("cls");
printf("\nPid\tarrivaltime\texecutiontime \twaiting time\t tatime");
for(i=0;i<n;i++)
printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d",process[i],at[i],bursttime[i],wt[i],tat[i]);
printf("\nAverage waiting time is:%f",awt);
printf("\nAverage turnaroundtime is:%f",atat);
getch();
return 0;
}

void main()
{
    system("COLOR F8");
   int z;
printf("\t\t\t\t\tE");
Sleep(300);
printf("N");
Sleep(300);
printf("T");
Sleep(300);
printf("E");
Sleep(300);
printf("R ");
Sleep(250);

printf("1 ");
Sleep(300);
printf("F");
Sleep(300);
printf("O");
Sleep(300);
printf("R ");
Sleep(250);

printf("S");
Sleep(300);
printf("J");
Sleep(300);
printf("F ");
Sleep(300);

printf("O");
Sleep(300);
printf("R ");
Sleep(250);

printf("2 ");
Sleep(300);
printf("F");
Sleep(300);
printf("O");
Sleep(250);
printf("R ");
Sleep(250);

printf("R");
Sleep(250);
printf("E");
Sleep(250);
printf("V");
Sleep(250);
printf("S");
Sleep(250);
printf("J");
Sleep(250);
printf("F ");


    scanf("%d",&z);
    if(z==1)
    {

        sjf();

    }
    else{
        bsjf();
    }


}
