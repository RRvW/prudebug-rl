#pragma once


int cmd_print_breakpoints();
int cmd_set_breakpoint (unsigned int bpnum, unsigned int addr);
int cmd_clear_breakpoint (unsigned int bpnum);
int cmd_d (int offset, int addr, int len);
int cmd_dis (int offset, int addr, int len);
void cmd_halt();
int cmd_loadprog(unsigned int addr, char *fn);
void cmd_printregs();
void cmd_run();
void cmd_runss();
void cmd_single_step();
void cmd_soft_reset();
void cmd_print_watch();
void cmd_clear_watch (unsigned int wanum);
void cmd_set_watch_any (unsigned int wanum, unsigned int addr);
void cmd_set_watch (unsigned int wanum, unsigned int addr, unsigned int value);
