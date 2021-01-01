/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, NSArray;

@interface HMDAnalyticsEventTriggerExecutionSessionData : HMFObject {

	int _executionState;
	int _resultErrorCode;
	unsigned long long _timestamp;
	NSString* _sessionID;
	NSArray* _triggerEvents;
	NSArray* _endEvents;

}

@property (assign) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) int executionState;                           //@synthesize executionState=_executionState - In the implementation block
@property (assign) int resultErrorCode;                          //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSArray * triggerEvents;              //@synthesize triggerEvents=_triggerEvents - In the implementation block
@property (nonatomic,copy) NSArray * endEvents;                  //@synthesize endEvents=_endEvents - In the implementation block
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSArray *)endEvents;
-(void)setTriggerEvents:(NSArray *)arg1 ;
-(NSArray *)triggerEvents;
-(void)setResultErrorCode:(int)arg1 ;
-(int)resultErrorCode;
-(int)executionState;
-(void)setExecutionState:(int)arg1 ;
-(void)setEndEvents:(NSArray *)arg1 ;
@end

