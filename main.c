#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lp1 = 1;
int n = 0, i = 0, j=0, roll = 0, ch = 0, newMarks = 0, a;
int choice = 0;
char newName[20];

struct Student
{
    int rollNo;
    char  name[20];
    float ppr1, ppr2, ppr3;
} s[50];

void delete()
{

    printf("\nDo you really want to Delete Data ?\n");
    printf("1. Yes\n 2. No\n Choice : ");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            printf("\nOkay...Enter Roll Number : ");
            scanf("%d", &roll);
            for (i=0 ; i<n ; i++)
            {
                if (roll == s[i].rollNo)
                {
                    for(j=i ; j<n ; j++)
                    {
                        s[j]=s[j+1];
                    }
                    n--;
                }
            }
            printf("\nData Deleted Successfully..");
            break;
        case 2:
            printf("\nOkay Fine..");
            break;
        default:
            break;
    }

}

void display()
{

    printf("\n ******************** All Student Data ******************** \n");
    printf("\n--------------------------------------------------------------\n");
    printf("\nRoll No  |\t Name \t\t|\t Paper1 \t|\t Paper2 \t|\t Paper3 \n");
    for (i = 0 ; i < n+j-2 ; i++){
        printf("\n%d.      |\t %s   \t|\t %f     \t|\t %f     \t|\t %f \n", s[i].rollNo, s[i].name, s[i].ppr1, s[i].ppr2, s[i].ppr3);
    }
    printf("\n");
}

void search()
{
    a=0;
    printf("\nEnter Roll Number : ");
    scanf("%d", &roll);
    for (i = 0; i < n; i++)
    {
        if (roll == s[i].rollNo)
        {
            printf("\nRoll No  |\t Name \t\t|\t Paper1 \t|\t Paper2 \t|\t Paper3 \n");
            printf("\n%d.      |\t %s   \t|\t %f     \t|\t %f     \t|\t %f \n", s[i].rollNo, s[i].name, s[i].ppr1, s[i].ppr2, s[i].ppr3);
        }
        else
        {
            a++;
        }
    }
    if (a == n)
    {
        printf("\n\n Sorry.. This Roll No Not Exist. Please Check!!\n");
        a = 0;
    }
}

void update()
{
    long int rollN;
    printf("\nEnter Roll Number : ");
    scanf("%ld", &rollN);
    for (i = 0; i < n; i++)
    {
        if (s[i].rollNo == rollN)
        {
            printf("\n\n :: UPDATE MENU ::\n");
            printf("\n----------------------------------------\n");
            printf("1. | Change Name     \t \n");
            printf("2. | Change Paper1 Marks  \t \n");
            printf("3. | Change Paper2 Marks  \t \n");
            printf("4. | Change Paper3 Marks  \t \n");

            printf("\nEnter your choice : ");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                printf("\nDo you really want to Change Name ?\n");
                printf("1. Yes\n2. No\n Choice : ");
                scanf("%d", &ch);

                switch (ch)
                {
                    case 1:
                        printf("Please Enter Correct Name ?\n");
                        scanf("%s", &newName);
                        printf("\nOkay..\nYour Old Name is %s", s[i].name);
                        printf("\nNow, Your New Name is %s", newName);

                        printf("\nDo you really want to Update ?\n");
                        printf("1. Yes\n2. No\n Choice : ");
                        scanf("%d", &ch);

                        switch (ch)
                        {
                        case 1:
                            strcpy(s[i].name, newName);
                            printf("\nData Updated Succesfully...\n");
                            break;
                        case 2:
                            printf("Okay");

                            break;
                        default:
                            printf("\nSorry Invalid....\n");
                            break;
                        }
                        break;
                    case 2:
                        printf("Okay..No Problem\n\n");

                        break;
                    default:
                        printf("Invalid");
                        break;
                }
                break;
            case 2:
                printf("\nDo you really want to Change Paper 1 Marks ?\n");
                printf("1. Yes\n2. No\n Choice : ");
                scanf("%d", &ch);

                switch (ch)
                {
                case 1:
                    printf("Please Enter Correct Marks ?\n");
                    scanf("%s", &newMarks);
                    printf("\nOkay..\nYour Old Paper 1 marks is %s", s[i].ppr1);
                    printf("\nNow, Your New Paper 1 marks is %s", newMarks);

                    printf("\nDo you really want to Update ?\n");
                    printf("1. Yes\n2. No\n Choice : ");
                    scanf("%d", &ch);

                    switch (ch)
                    {
                    case 1:
                        s[i].ppr1 = newMarks;
                        printf("\nData Updated Succesfully...\n");
                        break;
                    case 2:
                        printf("Okay");

                        break;
                    default:
                        printf("\nSorry Invalid....\n");
                        break;
                    }
                    break;
                case 2:
                    printf("Okay..No Problem");

                default:
                    printf("Invalid");
                    break;
                }
                break;
            case 3:
                printf("\nDo you really want to Change Paper 2 Marks ?\n");
                printf("1. Yes\n2. No\n Choice : ");
                scanf("%d", &ch);

                switch (ch)
                {
                case 1:
                    printf("Please Enter Correct Marks ?\n");
                    scanf("%s", &newMarks);
                    printf("\nOkay..\nYour Old Paper 2 marks is %s", s[i].ppr1);
                    printf("\nNow, Your New Paper 2 marks is %s", newMarks);

                    printf("\nDo you really want to Update ?\n");
                    printf("1. Yes\n2. No\n Choice : ");
                    scanf("%d", &ch);

                    switch (ch)
                    {
                    case 1:
                        s[i].ppr1 = newMarks;
                        printf("\nData Updated Succesfully...\n");
                        break;
                    case 2:
                        printf("Okay");

                        break;
                    default:
                        printf("\nSorry Invalid....\n");
                        break;
                    }
                    break;
                case 2:
                    printf("Okay..No Problem");

                default:
                    printf("Invalid");
                    break;
                }
                break;
            case 4:
                printf("\nDo you really want to Change Paper 3 Marks ?\n");
                printf("1. Yes\n2. No\n Choice : ");
                scanf("%d", &ch);

                switch (ch)
                {
                case 1:
                    printf("Please Enter Correct Marks ?\n");
                    scanf("%s", &newMarks);
                    printf("\nOkay..\nYour Old Paper 3 marks is %s", s[i].ppr1);
                    printf("\nNow, Your New Paper 3 marks is %s", newMarks);

                    printf("\nDo you really want to Update ?\n");
                    printf("1. Yes\n2. No\n Choice : ");
                    scanf("%d", &ch);

                    switch (ch)
                    {
                    case 1:
                        s[i].ppr1 = newMarks;
                        printf("\nData Updated Succesfully...\n");
                        break;
                    case 2:
                        printf("Okay");

                        break;
                    default:
                        printf("\nSorry Invalid....\n");
                        break;
                    }
                    break;
                case 2:
                    printf("Okay..No Problem");

                default:
                    printf("Invalid");
                    break;
                }
                break;
            default:
                printf("\nInvalid !!\n");
                break;
            }
        }
    }
}

void addData()
{
    printf("Enter the number of Student : ");
    scanf("%d", &n);
    printf("\nOkay..");
    int final = n + j;
    for (i = j ; i < final ; i++)
    {
        printf("\nEnter student %d data\n", i + 1);
        printf("Roll No = ");
        scanf("%d", &s[i].rollNo);
        printf("Name = ");
        scanf("%s", &s[i].name);
        printf("Paper 1 Marks = ");
        scanf("%f", &s[i].ppr1);
        printf("Paper 2 Marks = ");
        scanf("%f", &s[i].ppr2);
        printf("Paper 3 Marks = ");
        scanf("%f", &s[i].ppr3);
        j++;
    }
    printf("\nOkay...Great Your All Data Saved!\n");
}

void menu()
{
    int choice = 0;
    printf("\n :: MENU ::\n");
    printf("\n----------------------------------------\n");
    printf("1. | Add Student Data     \t \n");
    printf("2. | Update Student Data  \t \n");
    printf("3. | Search Student Data  \t \n");
    printf("4. | Display All Student Data  \t \n");
    printf("5. | Delete Student Data  \t \n");
    printf("0. | Exit\n");

    printf("\nEnter your choice : ");
}

int main()
{

    printf("\n***** Welcome to Student Management System *****\n");

    while (lp1)
    {
        menu();

        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addData();
                break;
            case 2:
                update();
                break;
            case 3:
                search();
                break;
            case 4:
                display();
                break;
            case 5:
                delete();
                break;
            case 0:
                lp1 = 0; // stop looping
                printf("\nT H A N K   Y O U !\n\n");
                break;
            default:
                break;
        }
    }

    return 0;
}
