/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface LightweightTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _callback;
	double _slotScaleFactor;
	unsigned long long _timerExpiryTargetSlot;
	unsigned long long _numSlots;
	unsigned _seqno;
	unsigned long long _nsecsPerSlot;
	unsigned long long _activeSlotBitmask;
	NSMutableArray* _entries[64];

}
-(id)description;
-(void)dealloc;
-(BOOL)cancel:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 maxDelay:(double)arg2 precision:(double)arg3 callback:(/*^block*/id)arg4 ;
-(unsigned long long)setRelativeTimer:(double)arg1 context:(id)arg2 ;
-(void)_handleTimerExpiry;
@end

