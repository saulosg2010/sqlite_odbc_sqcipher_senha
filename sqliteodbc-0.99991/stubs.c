#include "sqlite3.h"
int sqlite3_enable_load_extension(sqlite3 *db,int on){(void)db;(void)on;return SQLITE_OK;}
int sqlite3_load_extension(sqlite3 *db,const char *z,const char *p,char **e){if(e)*e=0;(void)db;(void)z;(void)p;return SQLITE_ERROR;}
int sqlite3_main(int argc,char **argv){(void)argc;(void)argv;return 0;}
void sqlite3_activate_see(const char *z){(void)z;}
