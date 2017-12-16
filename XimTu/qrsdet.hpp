//
//  qrsdet.hpp
//  XimTu
//
//  Created by SIFEN ZHONG on 15/12/2017.
//  Copyright © 2017 ___ZHONGSIFEN___. All rights reserved.
//

#ifndef qrsdet_h
#define qrsdet_h

#include "samplerate.hpp"
#include "qrsfilt.hpp"

class QrsDet {
	QrsFilt filt;
	int det_thresh, qpkcnt = 0 ;
	int qrsbuf[8], noise[8], rrbuf[8] ;
	int rsetBuff[8], rsetCount = 0 ;
	int nmedian, qmedian, rrmedian ;
	int count, sbpeak = 0, sbloc, sbcount = MS1500 ;
	int maxder, lastmax ;
	int initBlank, initMax ;
	int preBlankCnt, tempPeak ;

	// Peak
	int peak(int datum);
	int smax = 0;
	int timeSinceMax = 0;
	int lastDatum = 0;
	
public:
	QrsDet();
	void reset();
	int detect(int datum);
};

#endif /* qrsdet_h */
