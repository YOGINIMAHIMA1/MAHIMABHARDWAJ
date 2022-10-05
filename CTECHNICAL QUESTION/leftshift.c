#include <stdio.h>
#include <conio.h>
int main()
{
  
  clrscr();
  int a=-1;
  printf("%x",x<<4);
  return 0;
}
/*  1>  as a is 1 so find out its binary value and stored in 16 bit as it is integer type.
2> As a is negative so find out its 2's complement:- for finding 2's complement just see when first came then change after it all vale for 0 to 1 and 1 to 0 after that 
1 eg-    0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 1  = 1

2's-     1 1 1 1  1 1 1 1  1 1 1 1  1 1 1 1  = -1
 
 3> now , left shift value by 4 just delete 4 values from left side and shift other value at their place and add 0 value at right side where box are empty
  for ex-   1 1 1 1   1 1 1 1   1 1 1 1   1 1 1 1
        left shift by 4
            1 1 1 1   1 1 1 1   1 1 1 1   0 0 0 0 //x<<4
            
   4>   now find out hexadecimal after left shift
           1 1 1 1   1 1 1 1  1 1 1 1  0 0 0 0
           !______!  !______! !_____!  !______!
                !       !        !        ! 
                f      f        f        0      -------> hexadecimal value
                
                                           
                                          
