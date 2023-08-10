/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include<stdio.h>

int main()
{
    int a, b, c ;

    printf( "Input[1] :\n" ) ;
    scanf( "%d", &a ) ;

    printf( "Input[2] :\n" ) ;
    scanf( "%d", &b ) ; 

    printf( "Input[3] :\n" ) ;
    scanf( "%d", &c ) ;

    if ( a > b && a > c) {
        if ( b > c ) {
            printf( "Output: %d %d %d", a, b, c ) ;
        } else if ( c > b ) {
            printf( "Output: %d %d %d", a, c, b ) ;
        }
    }// end if ถ้า A มากที่สุด

    if ( b > c && b > a ) {
        if ( c > a) {
            printf( "Output: %d %d %d", b, a, c ) ;
        } else if ( a > c ) {
            printf( "Output: %d %d %d", b, c, a ) ;
        }   
    }// end if ถ้า B มากสุด

    if ( c > a && c > b) {
        if ( a > b) {
            printf( "Output: %d %d %d", c, a, b ) ;
        } else if ( b > a) {
            printf( "Output: %d %d %d", c, b, a ) ;
        }        
    }// end if ถ้า C มากที่สุด

    return 0;
}
