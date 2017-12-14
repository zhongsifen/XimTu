//
//  qrsfilt.hpp
//  XimTu
//
//  Created by SIFEN ZHONG on 14/12/2017.
//  Copyright © 2017 ___ZHONGSIFEN___. All rights reserved.
//

#ifndef qrsfilt_h
#define qrsfilt_h

class QrsFilt {
	
public:
	QrsFilt();
	int QRSFilter(int datum);

	int lpfilt(int datum ,int init);
	int hpfilt(int datum, int init);
	int deriv1(int x0, int init);
	int deriv2(int x0, int init);
	int mvwint(int datum, int init);
};


#endif /* qrsfilt_h */
