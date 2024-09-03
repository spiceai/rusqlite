#ifndef SQLITE3_DECIMAL_H
#define SQLITE3_DECIMAL_H
#include "sqlite3.h"

int sqlite3_decimal_init(
  sqlite3 *db, 
  char **pzErrMsg, 
  const sqlite3_api_routines *pApi
);

#endif
