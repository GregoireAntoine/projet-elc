

void main() {
       
       int COMPTEUR=195;
   TRISD=0b00000000;
   TRISB=0b00000000;
   TRISE=0b00000000;
       switch(COMPTEUR){
       case 0:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 1:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 2:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 3:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 4:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 5:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 6:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 7:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 8:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 9:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 10:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;    PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 11:PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;    PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 12:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 13:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 14:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 15:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 16:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 17:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 18:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 19:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 20:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 21:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 22:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 23:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 24:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 25:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 26:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 27:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 28:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 29:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 30:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 31:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 32:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 33:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 34:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 35:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 36:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 37:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 38:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 39:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=0;break;
       case 40:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 41:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 42:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 43:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 44:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 45:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 46:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 47:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 48:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 49:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 50:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 51:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 52:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 53:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 54:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 55:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 56:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 57:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 58:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 59:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 60:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 61:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 62:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 63:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 64:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 65:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 66:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 67:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 68:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 69:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 70:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 71:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 72:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 73:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 74:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 75:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 76:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 77:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 78:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 79:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=1 ;PORTB.RB2=1;PORTB.RB3=0;PORTE.RE0=0;break;
       case 80:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 81:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 82:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 83:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 84:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 85:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 86:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 87:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 88:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 89:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=0;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 90:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 91:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 92:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 93:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 94:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 95:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 96:  PORTB.RB4=0;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 97:  PORTB.RB4=1;PORTB.RB5=1;PORTB.RB6=1;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 98:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       case 99:  PORTB.RB4=1;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=1;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=1;PORTE.RE0=0;break;
       
       
       
       case 100:  PORTB.RB4=0;PORTB.RB5=0;PORTB.RB6=0;PORTB.RB7=0;   PORTB.RB0=1;PORTB.RB1=0 ;PORTB.RB2=0;PORTB.RB3=0;PORTE.RE0=1;break;
        };}
