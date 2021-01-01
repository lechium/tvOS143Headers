/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct MIDICIDeviceIdentification {
	unsigned char manufacturer[3];
	unsigned char family[2];
	unsigned char modelNumber[2];
	unsigned char revisionLevel[4];
	unsigned char reserved[5];
} MIDICIDeviceIdentification;

typedef struct shared_ptr<LocalCIResponder> {
	LocalCIResponder __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<LocalCIResponder>;

