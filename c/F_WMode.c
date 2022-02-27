#include <stdio.h>

void singleCharWrite()
{
  FILE *fp;
  char c = 'a';
  fp = fopen("abc.txt", "w");
  fputc(c, fp);
  fclose(fp);
}
void StringInput()
{
  FILE *fp;
  char c[] = "This is a demo of Input a String";
  fp = fopen("abc.txt", "w");
  fputs(c, fp);
  fclose(fp);
}
void formetdInput()
{
  FILE *fp;
  char c[] = "This is a demo of Input a String";
  int d = 90;
  fp = fopen("abc.txt", "w");
  fprintf(fp,"%d %s",d,c);
  fclose(fp);
}

int main()
{
  StringInput();
  singleCharWrite();
  formetdInput();
  return (0);
}
