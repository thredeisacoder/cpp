#include <stdio.h>
#include <conio.h>
#include <math.h>
void tcso( unsigned long int n,unsigned long int x ,int dem );              //Ham goi ten chu so
void thdvi( unsigned long int n,unsigned long int x,int dem );           //Ham goi ten hang don vi
int scso( int n );               //Ham dem so chu so
int Luythua10(int n);          
int main()
{  
    unsigned long int n,y;
    int dem;
    printf("Nhap n (den 2 ty): ");
    scanf("%ld",&n);
    dem=scso(n);            
     while(n>0){
       y=n/Luythua10(dem-1);          //phan tich n vi du 5678 thi y=5
       tcso(n,y,dem);                   // goi ten y.Vd y=5 thi in ra la nam
       n=n - y*Luythua10(dem-1);       //bat dau chuong trinh n=5678 thuc hien cau lenh n=678;
       if(n==0){                        //vi du 400000 khi thuc hien cau lenh n=0 dem =5 thi thu hien in ra bon tram nghin
       dem=dem-1;
       thdvi(n,y,dem);
       }
       else{                            //vi du khi 567 thi thuc hien in ra nam ,thuc hien in ra tram roi khi ay dem moi bang dem-1
       thdvi(n,y,dem);
       dem=dem-1;    
      }
    }  
    getch();
    return 0;
}
 
int Luythua10(int n)
{
    int lt = 1;
    int i;
    for(i = 0; i < n; i++)
        lt*= 10;
    return lt;        
}
 
void tcso(unsigned long int n,unsigned long int x,int dem ){          //Ham goi ten chu so          
     if(n>0&&x==1 &&(dem==2||dem==5||dem==8)){
        printf("");
      }
     else if(x==0&&n>=1&&n<10000&&dem==4){
        printf("");
     }
     else if(x==0&&n>=1&&n<10000&&dem==5){
          printf("");
     }
     
     else if(x==0&&n>=1&&n<10000000&&dem==7){
       printf("");
     }
     else if(x==0&&n>=1&&n<10000000&&dem==8){
          printf("");
     }
     
     else if(x==0&&n>=1&&n<100000000&&dem==8){
        printf("linh ");
     }
     else if(x==0&&n>=1&&n<10000&&dem==4){
          printf("");
     }
     else if(x==0&&n>=1&&n<100000&&dem==5){
       printf("linh ");
     }
     else if(x==0&&n>=1&&n<100&&dem==2){
          printf("linh ");
     }
     else if(x==0&&n>=1&&n<10000000&&dem==7){
          printf("");
     }
     
     else
    switch(x){
        case 0:
          printf( "khong " );
          break;
        case 1:
          printf( "mot " );
          break;
        case 2:
          printf( "hai " );
          break;
        case 3:
          printf( "ba " );
          break;
        case 4:
          printf( "bon " );
          break;
        case 5:
          printf( "nam " );
          break;
        case 6:
          printf( "sau " );
          break;
        case 7:
          printf( "bay " );
          break;
        case 8:
          printf( "tam " );
          break;
        case 9:
          printf( "chin " );
          break;
        default:
          printf("");
          break;
     }
}  
int scso( int n ){        //Ham dem so chu so
     int dem;
     dem=0;
     while( n>0 ){
       n=n/10;
       dem=dem+1;
       if(n==0){
             break;
       }
     }
     return dem;
}
void thdvi( unsigned long int n,unsigned long int x,int dem ){      //Ham goi ten hang don vi        
      if(x==0&&n>=1&&n<100000&&dem==5){
         printf("");
      }
      else if(x==0&&n>=1&&n<100&&dem==2){
         printf("");
      }
      else if(x==0&&n>=1&&n<100000&&dem==5){
         printf("");
      }
      else if(x==0&&n>=1&&n<100000000&&dem==8){
        printf("");
      }
      else if(x==0&&n>1&&n<100000000&&dem==8){
        printf("");
      }
     
      else if (n==0){
            if(dem==9){
              printf("ty");
            }
            else if(dem==8){
              printf("tram trieu");
            }
            else if(dem==7){
              printf("chuc trieu");
            }
            else if(dem==6){
              printf("trieu");
            }      
            else if(dem==5){
              printf("tram nghin");
            }
            else if(dem== 4){
              printf("chuc nghin");
            }
            else if(dem==3){
              printf("nghin");
            }
            else if(dem==2){
              printf("tram");
            }
            else if(dem==1){
              printf("muoi");
            }  
            else{
                printf("");
            }
    }          
               
    else{
    switch ( dem ){
      case 10:
        printf("ty ");
        break;
      case 9:
        printf("tram ");
        break;
      case 8:
        printf("muoi ");
        break;
      case 7:
        printf( "trieu ");
        break;    
      case 6:  
        printf( "tram ");
        break;
      case 5:
        printf( "muoi ");
        break;
      case 4:
        printf( "nghin " );
        break;
      case 3:
        printf( "tram " );
        break;
      case 2:
        printf( "muoi " );
        break;
      default :
        printf("");
        break;
    }
  }  
}