#include <EEPROM.h>

/*#define ipblen 100
#define ashblen 300

#define textblen 100


char
input [ ipblen ] ;
char
ash[ashblen];
char
text [ textblen ] ;
*/
char ash_a[] = "*";
char ash_b[] = "!!*";
char ash_c[] = "!!@";
char ash_d[] = "*!";
char ash_e[] = "!";
char ash_f[] = "!*!";
char ash_g[] = "**";
char ash_h[] = "!**";
char ash_i[] = "!!";
char ash_j[] = "*!!";
char ash_k[] = "*@";
char ash_l[] = "!*@";
char ash_m[] = "!*";
char ash_n[] = "!@";
char ash_o[] = "@*";
char ash_p[] = "!@!";
char ash_q[] = "*!@";
char ash_r[] = "!@*";
char ash_s[] = "@!";
char ash_t[] = "@";
char ash_u[] = "@@";
char ash_v[] = "**!";
char ash_w[] = "***";
char ash_x[] = "*@!";
char ash_y[] = "!@@";
char ash_z[] = "**@";
char ash_unknown[] = "?";
char ash_space[] = " ";
char ash_1 [] = "@!!*";
char ash_2 [] = "@!!@";
char ash_3 [] = "@!*!";
char ash_4 [] = "@!**";
char ash_5 [] = "@!**";
char ash_6 [] = "@!@!";
char ash_7 [] = "@!@*";
char ash_8 [] = "@!@@";
char ash_9 [] = "@*!!";
char ash_0 [] = "@!!!";
char ash_fullstop[] = "@!!";
char ash_comma[] = "@!*";
char ash_apostrophe [] = "@*!";
char ash_questionmark[] = "@**";
char ash_exclamationmark[] = "@*@";
char ash_plus [] = "@@!";
char ash_minus [] = "@@*";
char ash_multiply [] = "@@@";
char ash_divide[] = "@!@";

/*Those are the ash code*/






void setup () {
  Serial.begin(9600);
}
/*void string2ashstring(char * input, char * buffer, int buffer_size)

char * token = stroke (input,"/");
int counter = 0 ;
while (token !+ NULL){
  buffer[counter] = as2char(token);
  counter++
  token = stroke(NULL, "/");
}
byffer[counter] = "\0";
}




*/


char * char2ash( char c) {
  c = tolower(c);
  switch (c) {
    case 'a':
      return ash_a;
    case 'b':
      return ash_b;

    case 'c':
      return ash_c;
    case 'd':
      return ash_d;
    case 'e':
      return ash_e;
    case 'f':
      return ash_f;
    case 'g':
      return ash_g;
    case 'h':
      return ash_h;
    case 'i':
      return ash_i;
    case 'j':
      return ash_j;
    case 'k':
      return ash_k;
    case 'l':
      return ash_l;
    case 'm':
      return ash_m;
    case 'n':
      return ash_n;
    case 'o':
      return ash_o;
    case 'p':
      return ash_p;
    case 'q':
      return ash_q;
    case 'r':
      return ash_r;
    case 's':
      return ash_s;
    case 't':
      return ash_t;
    case 'u':
      return ash_u;
    case 'v':
      return ash_v;
    case 'w':
      return ash_w;
    case 'x':
      return ash_x;
    case 'y':
      return ash_y;
    case 'z':
      return ash_z;
    case ' ':
      return ash_space;
    default:
      return ash_unknown;
    case '.':
      return ash_fullstop;
    case ',':
      return ash_comma;
    case '\'':
      return ash_apostrophe;
    case '?':
      return  ash_questionmark;
    case '!':
      return  ash_exclamationmark;
    case '+':
      return  ash_plus;
    case '-':
      return  ash_minus;
    case '*':
      return  ash_multiply;
    case '/':
      return  ash_divide;


  }
  /*char ash2char( char * ash){
   if (strcmp(ash_a, ash) == 0)(
   return'a';
   )
   else if (strcmp(ash_b, ash) ==0)(
   return'b';
   )
    else if (strcmp(ash_c, ash) ==0)(
   return'c';
   ) else if (strcmp(ash_d,ash) ==0)(
   return'd';
   ) else if (strcmp(ash_e, ash) ==0)(
   return'e';
   ) else if (strcmp(ash_f, ash) ==0)(
   return'f';
   ) else if (strcmp(ash_g, ash) ==0)(
   return'g';
   ) else if (strcmp(ash_h, ash) ==0)(
   return'h';
   ) else if (strcmp(ash_i, ash) ==0)(
   return'i';
   ) else if (strcmp(ash_j, ash) ==0)(
   return'j';
   ) else if (strcmp(ash_k, ash) ==0)(
   return'k';
   ) else if (strcmp(ash_l, ash) ==0)(
   return'l';
   ) else if (strcmp(ash_m, ash) ==0)(
   return'm';
   ) else if (strcmp(ash_n, ash) ==0)(
   return'n';
   ) else if (strcmp(ash_o, ash) ==0)(
   return'o';
   ) else if (strcmp(ash_p, ash) ==0)(
   return'p';
   ) else if (strcmp(ash_q, ash) ==0)(
   return'q';
   ) else if (strcmp(ash_r, ash) ==0)(
   return'r';
   ) else if (strcmp(ash_s, ash) ==0)(
   return's';
   ) else if (strcmp(ash_t, ash) ==0)(
   return't';
   ) else if (strcmp(ash_u, ash) ==0)(
   return'u';
   ) else if (strcmp(ash_v, ash) ==0)(
   return'v';
   ) else if (strcmp(ash_w, ash) ==0)(
   return'w';
   ) else if (strcmp(ash_x, ash) ==0)(
   return'x';
   ) else if (strcmp(ash_x, ash) ==0)(
   return'x';
   ) else if (strcmp(ash_y, ash) ==0)(
   return'y';
    else if (strcmp(ash_z, ash) ==0)(
   return'z';
   )
   )
  }
  */

}

void loop() {


  if (Serial.available() > 0) {
    char buffer = 0;
    buffer = Serial.read();
    if (buffer == '\n') {
      Serial.println();
    } else {
      if (buffer != '*' && buffer != '!' && buffer != '@') {

        Serial.print(char2ash(buffer));
      }
    }
  }

}

/*void loop() {
  promptReadln("New message", input, ipblen);
  if (input[0] == '.'|| input[0]== ''{
    strcpy (ash,input);
    ash2text(input, text, textblen);
  } else {
    strcpy (text,input);
    text2ash(ut, ash, ashblen);
  }
  Serial.println(text);
  Serial.println(ash);

}*/
