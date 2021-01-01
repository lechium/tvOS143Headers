/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class NSObject, AirPlayReceiverMediaRemoteHelper;

@interface AirPlayReceiverContext : NSObject {

	AirPlayReceiverSessionPrivate* _session;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _receiverUIStarted;
	unsigned _receiverUISessionID;
	float _outputVolume;
	unsigned _powerAssertion;
	AirPlayReceiverMediaRemoteHelper* _mediaRemoteHelper;

}
-(void)handleMRCommand:(unsigned)arg1 translatedAPCommand:(unsigned)arg2 withOptions:(CFDictionaryRef)arg3 ;
@end
