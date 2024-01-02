// 10. Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <string.h>
char use_n[50] = "Prabhjot";
char p_wrd[50] = "Prabhjot@0123";
char name[50];
char P_wd[50];
int compare_str(char str[], char str1[])
{
  int i;
  for (i = 0; str[i] != 0 || str1[i] != 0; i++)
  {
    if (str[i] != str1[i])
    {
      return (str[i] - str1[i]);
    }
  }
  return 0;
}

int login(char n[], char p[])
{
  int uname, pas;

  printf("Enter the Username\n");
  fgets(name, 50, stdin);
  name[strcspn(name, "\n")] = 0;

  printf("Enter the Password\n");
  fgets(P_wd, 50, stdin);
  P_wd[strcspn(P_wd, "\n")] = 0;

  uname = compare_str(name, n);
  pas = compare_str(P_wd, p);
  if (uname == 0 && pas == 0)
    return 0;
  else
    return 1;
}
int create_acc(char kn[], char kp[])
{
  int ln, lp, i;

  printf("Enter the Username\n");
  fgets(use_n, 50, stdin);
  use_n[strcspn(use_n, "\n")] = 0;

  printf("Enter the Password\n");
  fgets(p_wrd, 50, stdin);
  p_wrd[strcspn(p_wrd, "\n")] = 0;

  for (i = 0; use_n[i]; i++)
  {
    if (use_n[i] >= 'A' && use_n[i] >= 'Z' || use_n[i] >= 'a' && use_n[i] <= 'z')
    {
    }
    else if (use_n[i] = ' ' && use_n[i + 1])
    {
      return 1;
    }
    else
      return 1;
  }
  ln = i;
  for (i = 0; p_wrd[i]; i++)
    ;
  lp = i;
  if (ln > 0 && lp > 0)
  {
    if (use_n[i] = ' ' && use_n[i + 1])
    {
      return 1;
    }
    return 0;
  }
  else
    printf("Enter the correct values");
}
int change_name()
{
  int i;
  printf("Please enter the password to change user name \n");
  fgets(P_wd, 50, stdin);
  P_wd[strcspn(p_wrd, "\n")] = 0;
  int s = compare_str(P_wd, p_wrd);
  if (s == 0)
  {
    int len;
    printf("Enter the new User name\n");
    fgets(use_n, 50, stdin);
    use_n[strcspn(use_n, "\n")] = 0;
    for (i = 0; use_n[i]; i++)
    {
      if (use_n[i] >= 'A' && use_n[i] >= 'Z' || use_n[i] >= 'a' && use_n[i] <= 'z')
      {
      }
      else if (use_n[i] = ' ' && use_n[i + 1])
      {
        return 1;
      }
      else
        return 1;
    }
    len = i;
    if (len < 0)
    {
      return 1;
    }
  
  }
  else
  {
    printf("Please enter the valid password\n");
    return 1;
  }
}
int change_password()
{
  int i;
  printf("Please enter the user name to change password \n");
  fgets(name, 50, stdin);
  name[strcspn(name, "\n")] = 0;
  int s = compare_str(name, use_n);
  if (s == 0)
  {
    int len;
    printf("Enter the new password name\n");
    fgets(p_wrd, 50, stdin);
    p_wrd[strcspn(p_wrd, "\n")] = 0;
    for (i = 0; p_wrd[i]; i++)
    {
      if (use_n[i] = ' ' && use_n[i + 1])
      {
        return 1;
      }
    }
    len = i;
    if (len < 0)
    {
      return 1;
    }
   
  }
  else
  {
    printf("Please enter the valid password\n");
    return 1;
  }
  return 0;
}
int main()
{
  int i, x;

  for (i = 0;; i++)
  {

    printf("--------Enter a choice---------\n");
    printf("1. Login \n");
    printf("2. Create New account\n");
    printf("3. Change Username\n");
    printf("4. Change Password\n");
    printf("5. Exit\n");
    scanf("%d", &x);
    fflush(stdin);
    switch (x)
    {
    case 1:
    {
      int n, p;
      n = login(use_n, p_wrd);
      if (n == 0)
        printf("Correct \n Welcome\n");
      else
        printf("Data not found create new account\n");

      break;
    }

    case 2:
    {
      int c;
      c = create_acc(use_n, p_wrd);
      if (c == 0)
        printf("succesfully account created\n");
      else
        printf("please enter correct values\n");

      break;
    }
    case 3:
    {
      int s;
      s = change_name();
      if (s == 0)
        printf("User name Updated successfully\n");
      else
        printf("please enter user name in correct form\n");
      break;
    }
    case 4:
    {
      int x;
      x = change_password();
      if (x == 0)
        printf("Password Successfully Updated");
      else
       printf("please enter password without spaces");
      break;
    }
    case 5:
      printf("Thanks\n");
      break;
    }
    if (x == 5)
      break;
  }
}