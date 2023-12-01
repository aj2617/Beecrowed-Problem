#include <stdio.h>

int main() {
 int iH,iM,fH,fM;
 scanf("%d %d %d %d",&iH,&iM,&fH,&fM);
  if(fH>iH ){
      int M=(fH*60+fM)-(iH*60+iM);
      int H=M/60;
      M=M%60;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",H,M);
  }
  else if(iH==fM && fH==fM){
         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
  }

    return 0;
}
