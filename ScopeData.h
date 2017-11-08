#ifndef __ScopeData__H__
#define __ScopeData__H__

#include <vector>
#include <string>
#include "lexer.h"


class VariableList {
    public:
	std::string name;
	Token tok;
	VariableList *next;

};


class ScopeData {
  public:
    int begOfScope;
    int endOfScope;
    VariableList *table;
    ScopeData *next;
    //InitScope();
    //AddScope();


};



#endif //__ScopeData__H__

