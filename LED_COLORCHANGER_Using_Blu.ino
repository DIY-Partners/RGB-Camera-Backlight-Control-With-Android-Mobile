int color =0;
int red = 12;
int green =11;
int blue =10;


char received;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);


 analogWrite(red,0);
 analogWrite(green,0);
 analogWrite(blue,0);
}

void loop(){
    if(Serial.available()>0){
    color = Serial.read();
    char Rec = char(color);
    if (Rec != '0')
    {
    Serial.println(Rec); 
    }  
  } 
  
  //Black
  if (color == 'B')
  {
    analogWrite(red,0);
    analogWrite(green,0);
    analogWrite(blue,0);
  }

   //WHITE
  if (color == 'W')
  {
    analogWrite(red,255);
    analogWrite(green,255);
    analogWrite(blue,255);
  }

   //RED
  if (color == 'R')
  {
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,0);
  }

   //LIME
  if (color == 'L')
  {
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,0);
  }

   //BlUE
  if (color == 'E')
  {
    analogWrite(red,0);
    analogWrite(green,0);
    analogWrite(blue,255);
  }

   //Yellow
  if (color == 'Y')
  {
    analogWrite(red,255);
    analogWrite(green,255);
    analogWrite(blue,0);
  }

   //Cyan/Aqua
  if (color == 'C')
  {
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,255);
  }

   //Magenta / Fuchsia
  if (color == 'M')
  {
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,255);
  }


   // Maroon
  if (color == 'F')
  {
    analogWrite(red,128);
    analogWrite(green,0);
    analogWrite(blue,0);
  }

   // Olive
  if (color == 'O')
  {
    analogWrite(red,128);
    analogWrite(green,128);
    analogWrite(blue,0);
  }

   //Green
  if (color == 'G')
  {
    analogWrite(red,0);
    analogWrite(green,128);
    analogWrite(blue,0);
  }

   // Purple
  if (color == 'P')
  {
    analogWrite(red,128);
    analogWrite(green,0);
    analogWrite(blue,128);
  }

   //  Navy
  if (color == 'N')
  {
    analogWrite(red,0);
    analogWrite(green,0);
    analogWrite(blue,128);
  }

   //light coral
  if (color == 'J')
  {
    analogWrite(red,240);
    analogWrite(green,128);
    analogWrite(blue,128);
  }

   //orange red
  if (color == 'X')
  {
    analogWrite(red,255);
    analogWrite(green,69);
    analogWrite(blue,0);
  }

   //green yellow
  if (color == 'G')
  {
    analogWrite(red,173);
    analogWrite(green,255);
    analogWrite(blue,47);
  }

   // spring green
  if (color == 'S')
  {
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,127);
  }

   //   aqua marine
  if (color == 'A')
  {
    analogWrite(red,127);
    analogWrite(green,255);
    analogWrite(blue,212);
  }

   //   hot pink
  if (color == 'H')
  {
    analogWrite(red,255);
    analogWrite(green,105);
    analogWrite(blue,180);
  }

   // honeydew
  if (color == 'D')
  {
    analogWrite(red,240);
    analogWrite(green,255);
    analogWrite(blue,240);
  }

   // light gray / light grey
  if (color == 'U')
  {
    analogWrite(red,211);
    analogWrite(green,211);
    analogWrite(blue,211);
  }
}

