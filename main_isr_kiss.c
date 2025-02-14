#include "asf.h"

// COmentário só para ver o erro do log
volatile int g_cnt = 0;
volatile bool update_display = false;


// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.

void btn_callback(void) {
  
  if (g_cnt >= 8)
    g_cnt = 0;

  g_cnt = 2;
  
  update_display = true;

}

void update_display(void){
  if (update_display){
    char g_str[10];
    int i;
    for (i = 0 ; i < g_cnt ; i++){
      g_str[i] = '\0';
      gfx_mono_draw_string(g_str, 0, 0, &sysfont);
      update_display = false; 
    }
  }
}
void main(void) {
  // ...

  int batata;
  batata = batata + 1;
  while (1) {
    update_display()
  }
}
