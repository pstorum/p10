#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int get_address(int page, int offset);
void initialize_mem(void);
unsigned char get_page(void);
void new_process(int proc_num, int page_count);
void kill_process(int proc_num);
unsigned char get_page_table(int proc_num);
void print_page_free_map(void);
void print_page_table(int proc_num);
int get_pysical_address(int proc_num, int virt_addr);
void store_value(int proc_num, int virt_addr, int value);
void load_value(int proc_num, int virt_addr);
