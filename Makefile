# -*- mode: makefile -*-
CXX = g++
CC = gcc
CXXFLAGS=-Wall -Wextra -g -O0 -std=c++11

FLYMAKE_FLAGS=-fsyntax-only 
ifeq ($(CXX),clang++)
  FLYMAKE_FLAGS+= -fno-caret-diagnostics
endif

check-syntax:
	$(CXX) $(CXXFLAGS) $(FLYMAKE_FLAGS) $(CPPFLAGS) $(DEFINES) $(CHK_SOURCES) \
	|| true
