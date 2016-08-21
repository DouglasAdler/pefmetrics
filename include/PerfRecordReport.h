/*****************************************************************************
MIT License

Copyright (c) 2016 Douglas Adler

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*****************************************************************************/

#ifndef PERFRECORDREPORT_H_
#define PERFRECORDREPORT_H_

/*
**---------------------------------------------------------------------
** Includes
**---------------------------------------------------------------------
*/
#include <stdint.h>

/*
**-------------------------------------------------------------------------
**  Macro Definitions
**-------------------------------------------------------------------------
*/

/*
**---------------------------------------------------------------------
** Constants and Primary Macro Definitions
**---------------------------------------------------------------------
*/


/*
**---------------------------------------------------------------------
** Type Definitions
**---------------------------------------------------------------------
*/

typedef struct PerfRecordReport_s
{
	uint32_t		nTotalCalls;
	uint64_t		nTotalTime;
	uint64_t		nTotalSelf;
	uint32_t		nMinTime;
	uint32_t		nMaxTime;
	uint64_t		nStartTime;
	uint64_t		nEndTime;
	double			nStartCPUTime;
	double			nExitCPUTime;
	double			nTotalCPUTime;
	double			nTotalCPUTimeSelf;
	double			nMinCPUTime;
	double			nMaxCPUTime;
} PerfRecordReport;


/*
**---------------------------------------------------------------------
** Prototypes
**---------------------------------------------------------------------
*/



#endif /*PERFRECORDREPORT_H_*/
