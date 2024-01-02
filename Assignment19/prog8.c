/* 8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 1 ) */
 #include<stdio.h>
 int compare_str(char str[], char str1[])
{
   int i;
   for (i = 0; str[i]!=0||str1[i]!=0; i++)
   {
      if (str[i] != str1[i])
      {
           return(str[i]-str1[i]);
      }
     
   }
    return 0;
}
 int main()
 {
    char str[10][20]={"the","quick","fox","love","what","how","are","you","good","student"};
    char str_1[20],str_2[20];
    printf("Enter the two words\n");
    fgets(str_1,20,stdin);
     str_1[strcspn(str_1,"\n")]=0;
    fgets(str_2,20,stdin);
     str_2[strcspn(str_2,"\n")]=0;
      
    int i,c,s,first_pos,sec_pos;
    for(i=0;i<10;i++)
    {
        c=compare_str(str_1,str[i]);
        if(c==0)
        {
           first_pos=i;
          break;
        }
        
    }
   for(i=0;i<10;i++)
    {
        s=compare_str(str_2,str[i]);
        if(s==0)
        {
          sec_pos=i;
        
          break;
        }
    }

    if(c==0&&s==0)
    {
       int t_w=0;
       if(first_pos<sec_pos)
        {
                t_w=sec_pos-first_pos;
        }
      else
      {

        t_w=first_pos-sec_pos-1;
      }
      printf("total words = %d\n",t_w);

    }
    else
      printf("not available");
 }
