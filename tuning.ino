//microphone
int mic = A0;
int microphone = 0;

//string values
int Emin = 0;
int B = 1;
int G = 2;
int D = 3;
int A = 4;
int Emaj = 5;
//bluetooth
int string;
int bluein;
int upper_range, lower_range;
int tuned, feedback;
int decbin;

//hex pins
int dispval;
int ahexout = 12;
int bhexout = 11;
int chexout = 10;
int dhexout = 9;
int ehexout = 8;
int fhexout = 7;
int ghexout = 6;
int hexmat[6];

void setup() {
//microphone
pinMode(mic, INPUT);
pinMode(bluein, INPUT);

//output display
pinMode(tuned, OUTPUT);
//hex displays
pinMode(ahexout, OUTPUT);
pinMode(bhexout, OUTPUT);
pinMode(chexout, OUTPUT);
pinMode(dhexout, OUTPUT);
pinMode(ehexout, OUTPUT);
pinMode(fhexout, OUTPUT);
pinMode(ghexout, OUTPUT);

}

void loop() {

//1 pin for mic
//6 pins for bluetooth
microphone = digitalRead(mic);
if( microphone < upper_range && microphone > lower_range)
  tuned = HIGH;
else 
  tuned = LOW;

//6pins    
string = digitalRead(bluein);
if (string == Emin)
 decbin = hexd(Emin);
else if (string == B)
 decbin = hexd(B);
else if (string == G)
 decbin = hexd(G);
else if (string == D)
 decbin = hexd(D);
else if (string == A)
 decbin = hexd(A);
else if (string == Emaj)
 decbin = hexd(Emaj);

  if(bin1(decbin) == 1)
    ahexout = HIGH;
  else if(bin2(decbin) == 1)
    bhexout = HIGH;
  else if(bin3(decbin) == 1)
    chexout = HIGH;
  else if(bin4(decbin) ==1)
    dhexout = HIGH;
  else if(bin5(decbin)  == 1)
    ehexout = HIGH;
  else if(bin6(decbin) == 1)
    fhexout = HIGH;
  else if(bin7(decbin) == 1)
    ghexout = HIGH;

}
