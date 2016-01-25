// $RCSfile$     $Date$     $Revision$
// Copyright (c) 2007 Krodo
// Part of Bylins http://www.mud.ru

#include "conf.h"
#include "sysdep.h"
#include "structs.h"
#include "comm.h"
#include "utils.h"

volatile const char* revision = "$Revision$";
volatile const char* root_directory = "$RootDirectory$";
volatile const char* date = "$Date$";
volatile const char* build_date = "$Build date: " __DATE__ " " __TIME__ "$";
const char* build_datetime = __DATE__ " " __TIME__;

// * ���� ���� - ������������� ��� ������� �������������� ������� � ��� ���������� ���� ������.

void show_code_date(CHAR_DATA *ch)
{
	send_to_char(ch, "��� ������, ������ �� %s, �������: %s\r\n", build_datetime, revision);
}

void log_code_date()
{
	log("Code version %s, revision: %s", build_datetime, revision);
}

// vim: ts=4 sw=4 tw=0 noet syntax=cpp :
