#include <ti/screen.h>
#include <ti/getcsc.h>
#include <keypadc.h>

int screenIssues();
int screenOn();
int screenOff();
int wontTurnOn();
int wontCharge();
int ioIssues();
int otherIssues();

int replace();
int calculatorWorks();

int main(void) {
  os_ClrHomeFull();
  os_PutStrFull("Welcome to the Chromebook Diagnostic Tool!");
  os_PutStrFull("Please make a selection");
  os_PutStrFull("0 - Screen Issues");
  os_PutStrFull("1 - Wont Turn On");
  os_PutStrFull("4 - Wont Charge");
  os_PutStrFull("7 - I/O issues");
  os_PutStrFull("2nd - Other Issues");

  kb_key_t key;
  kb_Scan();
  key = kb_Data[7];
  switch (key)
  {
  case kb_0:
    screenIssues();
    break;
  case kb_1:
    wontTurnOn();
    break;
  case kb_4:
    wontCharge();
    break;  
  case kb_7:
    ioIssues();
    break;
  case kb_2nd:
    otherIssues();
    break;
  default:
    main();
    break;
  }
}

int screenIssues() {
  os_ClrHomeFull();
  kb_key_t key;
  os_PutStrFull("Does the screen turn on?");
  os_PutStrFull("1 - Yes / 0 - No");
  kb_Scan;
  key = kb_Data[7];
  switch (key)
  {
  case kb_1:
    screenOn();
    break;
  case kb_0:
    screenOff();
    break;
  default:
    break;
  }
}

int screenOn() {
  os_ClrHomeFull();
  os_PutStrFull("Please make a selection:");
  os_PutStrFull("0 - Screen Glitches");
  os_PutStrFull("1 - Hotspots");
  os_PutStrFull("4 - Broken Screen");
}

int screenOff() {
  replace("Screen");
  replace("Video Cable");
  replace("Screen\nVideo Cable");
}

int wontTurnOn() {

}

int wontCharge() {

}

int ioIssues() {

}

int otherIssues() {

}

int replace(char *text) {
  os_ClrHomeFull();
  os_PutStrFull("Please replace the following:");
  os_PutStrFull("\n");
  os_PutStrFull(text);
  if (calculatorWorks() == true) {
    os_ClrHomeFull();
    os_PutStrFull("Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!");
    
  }
}

int calculatorWorks() {
  os_PutStrFull("Please press any button once done");
  while (!os_GetCSC());
  kb_key_t key;
  os_PutStrFull("Does the calculator work now?");
  os_PutStrFull("1 - Yes / 0 - No");
  kb_Scan;
  key = kb_Data[7];
  switch (key)
  {
  case kb_1:
    return true;
    break;
  case kb_0:
    return false;
    break;
  default:
    break;
  }
}