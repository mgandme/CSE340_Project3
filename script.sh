#!/bin/bash
g++ inputbuf.cc inputbuf.h lexer.cc lexer.h parser.cc parser.h ScopeData.h ScopeData.cc -o exec && ./exec < test.txt
