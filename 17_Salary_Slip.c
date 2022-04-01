#include <stdio.h>
struct SalarySlip
{
    int no;
    int empid;
    char Name[60];
    char Job_type[100];
    int Salary;
};

int add_row(struct SalarySlip *row,int size);
int display_row(struct SalarySlip *row,int size);

int main()
{
    int n;
    printf("Enter the no. of rows :");
    scanf("%d",&n);
    struct SalarySlip S1[n],*ptr;
    ptr=&S1[0];
    add_row(ptr,n);
    display_row(ptr,n);

    return 0;
}

int add_row(struct SalarySlip *row,int size)
{
    for (int i=0;i<size;i++)
    {
        printf("\nEnter Serial no :");
        scanf("%d",&row[i].no);

        printf("\nEnter employee id :");
        scanf("%d",&row[i].empid);

        printf("\nEnter name :");
        scanf("%s",row[i].Name);

        printf("\nEnter job type :");
        scanf("%s",row[i].Job_type);

        printf("\nEnter Salary :");
        scanf("%d",&row[i].Salary);
    }

    return 0;
}

int display_row(struct SalarySlip *row,int size)
{
    for (int i=0;i<size;i++)
    {
        printf("\nSI.no=%d \nEMP.no=%d \nName=%s \nJob Type=%s \nSalary=Rs.%d\n",row[i].no,row[i].empid,row[i].Name,row[i].Job_type,row[i].Salary);
    }
    return 0;
}
