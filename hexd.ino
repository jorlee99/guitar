int hexd(int dispval){
  int valueout;
  if (dispval == 0 or dispval == 5) //Emaj or Emin
  { //100 1111 
    valueout = 79;
  }
   
  if (dispval == 1) //B
  {//001 1111
  valueout = 31;
  }
  
  if (dispval == 2) //G
  { //111 1011
  valueout = 123;
  }
  
  if (dispval == 3) //D
  { //011 1101
  valueout= 61;
  }
   
  if (dispval == 4)//A
  { //111 0111
  valueout = 119;
  }

  return valueout;
}
