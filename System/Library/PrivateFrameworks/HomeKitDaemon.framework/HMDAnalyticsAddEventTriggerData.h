/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsEventTriggerData;

@interface HMDAnalyticsAddEventTriggerData : HMFObject {

	int _requestOrigin;
	unsigned _resultErrorCode;
	unsigned long long _timestamp;
	HMDAnalyticsEventTriggerData* _eventTrigger;

}

@property (assign) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) HMDAnalyticsEventTriggerData * eventTrigger;              //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (assign) int requestOrigin;                                                  //@synthesize requestOrigin=_requestOrigin - In the implementation block
@property (assign) unsigned resultErrorCode;                                           //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(HMDAnalyticsEventTriggerData *)eventTrigger;
-(void)setEventTrigger:(HMDAnalyticsEventTriggerData *)arg1 ;
-(void)setRequestOrigin:(int)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(unsigned)resultErrorCode;
-(int)requestOrigin;
@end

