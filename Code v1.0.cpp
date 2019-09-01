#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<conio>
using namepspace std;
int AdminView();
int AdminLogin();
int StudentView();
int StudentLogin();
int CheckCredentials(string Username,string Password);
int GetAllStudentsByRollNo();
int DeleteStudents();
int DeleteAllStudentsByRollNo();
int StudentRegister();
int CheckRegisteredStudents();
int CheckPresenseCountByRollNo();
int GetListOfAllStudentsWithTheirPresensecount();
int MarkMyAttendance(string username);
int CountMyAttendance(string username);
int delay();

int delay()                                       //This Function edits the student Record and exits the Same !!!
{  cout<<"Saving Records.Please Wait.....\n"; 
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<20000;j++)
       {
          for(int k=0;k<20000;k++)
          {
          }
       }
    }
    cout<<"Exiting Records.We are Happy to Help you \n";
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<20000;j++)
       {
          for(int k=0;k<20000;k++)
          {
          }
       }
    }                     
    return 0;
}   

int AdminView()
{
  int GoBack=0; 
  while(1)
  {  clrscr();
     cout<<" 1. Register A Student \n";
     cout<<" 2. Delete all registered Students \n";
     cout<<" 3. Delete a student by Roll Number \n";
     cout<<" 4. Check All registered Students by Username \n";
     cout<<" 5. Check presense count by Roll Number \n";
     cout<<" 6. Get All list of Student's Attendance \n";
     cout<<" 0. Go Back To The Home Page \n";
     int choice;
     cout<<"Enter Function you want the system to perform \n";
     
     switch(choice)
     {
       case 1: StudentRegister();
               break;
       case 2: DeleteStudents();
               break;
       case 3: DeleteAllStudentsByRollNo();
               break;
       case 4: CheckRegisteredStudents();
               break;
       case 5: CheckPresenseCountByRollNo();
               break;
       case 6: GetListOfAllStudentsWithTheirPresenseCount();
               break;
       case 0: GoBack=1;
               break;
       default :cout<<"Entered Invalid Number.Enter Again....\n";
               break;
        getchar();                                                                 
       }
      if(GoBack==1)
      { 
          break ; //Come Out of The Loop         
      }              
                     
  }  
  
  return 0;      
}             
int StudentLogin()
{
    clrscr();
    cout<<"------------STUDENT LOGIN----------\n";
    StudentView();
    delay();
    return 0;
}

int AdminLogin()
{
    clrscr();
    cout<<"------------ADMIN LOGIN---------\n";
    string Username,Password ;
    cout<<"ENTER CREDENTIALS ......\n";
    cin>>Username>>Password;
    if(Username=="admin"&&Password=="admin123")
    {
         AdminView();
         getchar();
         delay();                                      
    } 
    else
    {
        cout<<"Invalid Credentials......Press any Key to Return to Main Menu \n";
        getchar();
    }  
   return 0;                                          
}































    
