// OBSTACLE DETECTOR ROBOT

int m11 = 4;
int m12 = 5;
int m21 = 6;
int m22 = 7;
int ir1 = 2;  //IR1
int ir2 = 3;  //IR2

void setup() {
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
}

// 0 obstacle detected ; 1 clear path
void loop() {
  if ((digitalRead(ir1) == 0) || (digitalRead(ir2) == 0)) {
    stp();
    rev();
    delay(1000);
    rht();
    delay(1000);
  }else{
    fwd();
  }
  // if ((digitalRead(ir1) == 0) && (digitalRead(ir2) == 0)) {  //without obstacle
  //   fwd();
  // }
  // if ((digitalRead(ir1) == 1) && (digitalRead(ir2) == 1)) {  //with obstacle
  //   stp();                                                   //stop
  //   delay(1000);
  //   rev();  //reverse
  //   delay(1000);
  //   rht();

  //   if ((digitalRead(ir1) == 1) && (digitalRead(ir2) == 1)) {  //with obstacle
  //     stp();                                                   //stop
  //     delay(1000);

  //     rev();  //reverse

  //     else() {
  //       ((digitalRead(ir1) == 0) && (digitalRead(ir2) == 0));
  //       fwd();
  //     }
  //   }
  // }
}

void fwd() {
  digitalWrite(m11, 1);
  digitalWrite(m12, 0);
  digitalWrite(m21, 1);
  digitalWrite(m22, 0);
}

void rht() {
  digitalWrite(m11, 1);
  digitalWrite(m12, 0);
  digitalWrite(m21, 0);
  digitalWrite(m22, 1);
}

void rev() {
  digitalWrite(m11, 0);
  digitalWrite(m12, 1);
  digitalWrite(m21, 1);
  digitalWrite(m22, 0);
}

void lft() {
  digitalWrite(m11, 0);
  digitalWrite(m12, 1);
  digitalWrite(m21, 0);
  digitalWrite(m22, 1);
}
void stp() {
  digitalWrite(m11, 0);
  digitalWrite(m12, 0);
  digitalWrite(m21, 0);
  digitalWrite(m22, 0);
}
