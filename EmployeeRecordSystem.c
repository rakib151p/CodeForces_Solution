#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Employee ID (Integer)
// Employee name (String)
// Employee position (String)
// Employee salary (Integer)
struct employee
{
    int Id, salary;
    char name[100], position[100];
};
typedef struct employee Employee;
Employee employeeArray[100];
int employee_count = 0;

void printMenu()
{
    printf("   1. Enter 1 to add employee:\n   2. Enter 2 to update employee data:\n   3. Enter 3 to Delete a existing employee:\n   4. Enter 4 to view employee information:\n   5. Enter 5 to Exit the system:\n");
}
void addEmployee()
{
    int Id, salary;
    char name[100], position[100];
    printf("Enter Employee name:");
    getchar();
    gets(name);
    printf("\n");
    printf("Enter Employee designation:");
    gets(position);
    printf("\n");
    printf("Enter Employee Id & salary:");
    scanf("%d %d", &Id, &salary);
    printf("\n");
    strcpy(employeeArray[employee_count].name, name);
    strcpy(employeeArray[employee_count].position, name);
    employeeArray[employee_count].Id = Id;
    employeeArray[employee_count].salary = salary;
    employee_count++;
}
void updateEmployee()
{
    // the name of multiple user can be same so the only way
    // to change existing data is to use Id no of the employee
    printf("Type Id of the employee:");
    int Id, flag = 0;
    scanf("%d", &Id);
    for (int i = 0; i < employee_count; i++)
    {
        if (employeeArray[i].Id == Id)
        {
            flag = 1;
            int salary;
            char name[100], position[100];
            printf("Enter Employee name(or Type old name):");
            getchar();
            gets(name);
            printf("\n");
            printf("Enter Employee new designation:");
            gets(position);
            printf("\n");
            printf("Enter Employee new salary:");
            scanf("%d", &salary);
            printf("\n");
            strcpy(employeeArray[employee_count].name, name);
            strcpy(employeeArray[employee_count].position, name);
            employeeArray[employee_count].salary = salary;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Your Inputed Id doesn't Exist.Thank you.\n");
    }
}
void deleteEmployee()
{
    int i, found = 0, idToDelete;
    printf("Type the Employee ID :");
    scanf("%d", &idToDelete);
    printf("\n");
    for (i = 0; i < employee_count; i++)
    {
        if (employeeArray[i].Id == idToDelete)
        {
            found = 1;
            break;
        }
    }
    // printf("%d",i);
    // if the employee is found, remove them from the array
    if (found)
    {
        for (; i < employee_count; i++)
        {
            employeeArray[i] = employeeArray[i + 1];
        }
        employee_count--;
        printf("Employee with ID %d deleted.\n", idToDelete);
    }
    else
    {
        printf("Employee with ID %d not found.\n", idToDelete);
    }
}
void viewEmployeeInformation()
{
    if (employee_count == 0)
    {
        printf("There is no employee Enlisted Yet.\nThank You.\n");
    }
    else
    {
        for (int i = 0; i < employee_count; i++)
        {
            printf("Employee: %d\n", i + 1);
            printf("------------\n");
            printf("  Name : %s\n  Designation : %s\n  ID : %d\n  Salary : %d\n", employeeArray[i].name, employeeArray[i].position, employeeArray[i].Id, employeeArray[i].salary);
        }
    }
}
int main()
{
    printf("*****Wellcome to Employee Management system*****\n");
    printf("*****--------------------------------------*****\n");

    int choice;
    while (1)
    {
        printMenu();
        printf("Enter Your Choice:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            addEmployee();
        }
        else if (choice == 2)
        {
            updateEmployee();
        }
        else if (choice == 3)
        {
            deleteEmployee();
        }
        else if (choice == 4)
        {
            viewEmployeeInformation();
        }
        else
        {
            if (choice == 5)
            {
                break;
            }
            else
            {
                printf("Invalid choice. Try Again.");
            }
        }
    }
}