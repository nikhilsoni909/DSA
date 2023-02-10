#include<stdio.h>
typedef struct day
{
int date;
int month;
int year;
int hour;
int minute;


} day;
void print(day a,day b){
printf("%d-%d-%d-%d-%d\n",a.date,a.hour,a.year,a.hour,a.minute);
printf("%d-%d-%d-%d-%d\n",b.date,b.hour,b.year,b.hour,b.minute);

}
int cmp(day a,day b){
if (a.year>b.year)
{
  return 1;
}
if (a.year<b.year)
{
  return -1;
}
if (a.month>b.month)
{
  return 1;
}
if (a.month<b.month)
{
  return -1;

}
if (a.date>b.date)
{
  return 1;
}
if (a.date<b.date)
{
  return -1;
}
if (a.hour>b.hour)
{
  return 1;
}
if (a.hour<b.hour)
{
  return -1;
}
if (a.minute>b.minute)
{
  return 1;
}
if (a.minute<b.minute)
{
  return -1;
}
else
{
    return 0;
}

}
int main()
 {day d1={11,12,2021,8,25};
 day d2={11,12,2021,8,25};
print(d1,d2);
printf("%d",cmp(d1,d2));
return 0;
}