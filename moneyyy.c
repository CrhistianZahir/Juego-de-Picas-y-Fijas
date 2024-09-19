#include <16f877a.h>
#fuses XT, NOWDT
#use delay (clock= 4MHz)
#include <lcd.c>
#include <kbd.c>
#use standard_io(A)
#use standard_io(B)

void rand1();
void rand2();
void rand3();
void rand4();
void rand5();
void rand6();
void display();
void numDigits();
void ingreso();
void guardar();
void compare(int a);
int cont;
int x;
int y=9,z,w,t,s=9;
char vect[6];
char ingresado[6];
int f;
int p;
int g;
int b;


void main(){
     g=0;
     b=1;
     port_b_pullups(true);
     lcd_init();
     kbd_init();
     while (true){
     while (input(PIN_A0)==0){
      lcd_putc('\f');
      lcd_gotoxy(b,1);
      //lcd_gotoxy(x,2);
      //d significa que muestre la variable en formato decimal
      printf(lcd_putc,"BIENVENIDO! \n"); 
      b++;
      //lcd_gotoxy(1,2);
      printf(lcd_putc,"+-+-+-+-+-+-+-+-+-+-+\n "); 
    
      if (b== 17) b=1;
      delay_ms(200);
  }
     if(input(PIN_A0)==1){
     delay_ms(500);
     lcd_putc('\f');
     printf(lcd_putc,"\fnumber of digits:\n");
     numDigits();
     while(g<=20){
     ingreso();
     }
     //compare(cont);
     //display();
     }
     }
}

void rand1(){
     while(true){
     
     x++;
     delay_ms(100);
     if(x==10) x=0;
     if(input(pin_A0)==1) break;
   }
}
void rand2(){
     while(true){
     
     y--;
     delay_ms(100);
     if(y==0) y=9;
     if(input(pin_A0)==1) break;
   }
}
void rand3(){
     while(true){
     
     z++;
     delay_ms(100);
     if(z==10) z=0;
     if(input(pin_A0)==1) break;
   }
}
void rand4(){
     while(true){
     
     w++;
     delay_ms(100);
     if(w==10) w=0;
     if(input(pin_A0)==1) break;
   }
}
void rand5(){
     while(true){
     
     s--;
     delay_ms(100);
     if(s==0) s=9;
     if(input(pin_A0)==1) break;
   }
}
void rand6(){
     while(true){
     
     t++;
     delay_ms(100);
     if(t==10) t=0;
     if(input(pin_A0)==1) break;
   }
}
void display(){
     rand1();
     rand2();
     //if (input(PIN_A1)==1){
     //while (x!=y||x!=z||x!=w||x!=s||x!=t||y!=z||y!=w||y!=s||y!=t||z!=w||z!=s||z!=t||w!=s||w!=t||s!=t){
     while (x!=y){
     lcd_putc('\f');
     lcd_gotoxy(1,2);
     printf(lcd_putc,"num:%u %u",x,y);
     delay_ms(100);
     break;
     //}
     }
     //if (input(PIN_B1)==1)break;
}

void numDigits(){

   //while (input(PIN_A2)==0){
   //delay_ms(200);
   while(true){
   if(input(PIN_A1)==1){
   cont++;
   delay_ms(200);
   lcd_putc('\f');
   }
   
      if(cont==6) cont=1;
      
      switch(cont){
      case 1:
         lcd_gotoxy(1,1);
         printf(lcd_putc,"2 digitos");
         delay_ms(100);
         if (input(PIN_A0)==1){
         rand1();
         rand2();
         while (x!=y){
         lcd_putc('\f');
         lcd_gotoxy(1,2);
         printf(lcd_putc,"num:%u %u",x,y);
         delay_ms(200);
         vect[0]=x+48;
         vect[1]=y+48;
         break;
         }
         }
         break;
      case 2:
         lcd_gotoxy(1,1);
         printf(lcd_putc,"3 digitos");
         delay_ms(100);
         if (input(PIN_A0)==1){
         rand1();
         rand2();
         rand3();
         while (x!=y&&x!=z&&y!=z){
         lcd_putc('\f');
         lcd_gotoxy(1,2);
         printf(lcd_putc,"num:%u %u %u",x,y,z);
         delay_ms(100);
         vect[0]=x+48;
         vect[1]=y+48;
         vect[2]=z+48;
         break;
         }
         }
         break;
      case 3:
         lcd_gotoxy(1,1);
         printf(lcd_putc,"4 digitos");
         delay_ms(100);
         if (input(PIN_A0)==1){
         rand1();
         rand2();
         rand3();
         rand4();
         while (x!=y&&x!=z&&y!=z&&y!=w&&z!=w){
         lcd_putc('\f');
         lcd_gotoxy(1,2);
         printf(lcd_putc,"num:%u %u %u %u",x,y,z,w);
         delay_ms(100);
         vect[0]=x+48;
         vect[1]=y+48;
         vect[2]=z+48;
         vect[3]=w+48;
         break;
         }
         }
         break;
      case 4:
         lcd_gotoxy(1,1);
         printf(lcd_putc,"5 digitos");
         if (input(PIN_A0)==1){
         rand1();
         rand2();
         rand3();
         rand4();
         rand5();
         while (x!=y&&x!=z&&x!=w&&x!=s&&y!=z&&y!=w&&y!=s&&z!=w&&z!=s&&w!=s){
         lcd_putc('\f');
         lcd_gotoxy(1,2);
         printf(lcd_putc,"num:%u %u %u %u %u",x,y,z,w,s);
         delay_ms(100);
         vect[0]=x+48;
         vect[1]=y+48;
         vect[2]=z+48;
         vect[3]=w+48;
         vect[4]=s+48;
         break;
         }
         }
         break;
      case 5:
         lcd_gotoxy(1,1);
         printf(lcd_putc,"6 digitos");
         if (input(PIN_A0)==1){
         rand1();
         rand2();
         rand3();
         rand4();
         rand5();
         rand6();
         while (x!=y&&x!=z&&x!=w&&x!=s&&x!=t&&y!=z&&y!=w&&y!=s&&y!=t&&z!=w&&z!=s&&z!=t&&w!=s&&w!=t&&s!=t){
         lcd_putc('\f');
         lcd_gotoxy(1,2);
         printf(lcd_putc,"num:%u %u %u %u %u %u",x,y,z,w,s,t);
         delay_ms(100);
         vect[0]=x+48;
         vect[1]=y+48;
         vect[2]=z+48;
         vect[3]=w+48;
         vect[4]=s+48;
         vect[5]=t+48;
         break;
         }
         }
         break;
      }
      while(input(PIN_A0)==1){}
      if(input(PIN_A2)==1) break;
   }
}

void ingreso(){
   int i=0;
   char k;
   while(true){
   lcd_gotoxy(1,1);
   lcd_putc("\fIngrese clave:\n");
      while(i<=cont+1){
      k=kbd_getc();
         if(k!=0){
         ingresado[i]=k;
         i++;
         lcd_putc(k);
         }
         if(k=='#'){ 
         compare(cont);
         }
      }
      lcd_putc('\f');
      break;
  }
}

void compare(int a){
   int i;
   int j;
   f=0;
   p=0;
   for(i=0;i<a+1;i++){
      for(j=0;j<a+1;j++){
        if(ingresado[i]==vect[j] && i==j){
        f++;
        }
        if(ingresado[i]==vect[j] && i!=j){
        p++;
        }
        
      }
   }
   g++;
   lcd_putc('\f');
   printf(lcd_putc,"picas y fijas:\np: %d f: %d try: %d",p,f,g);
   delay_ms(1500);
   if(f==a+1){
   printf(lcd_putc,"\fcongratulations!");
   g=0;
   delay_ms(1000);
   lcd_putc('\f');
   numdigits();
   }
   
}


