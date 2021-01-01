/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject {

	unsigned long long _maxRetryCount;
	unsigned long long _minSecondsBetweenRetries;
	unsigned long long _maxSecondsBetweenRetries;
	unsigned long long _minSecondsBetweenRetriesUnderMemoryPressure;
	unsigned long long _maxSecondsBetweenRetriesUnderMemoryPressure;
	NSMutableDictionary* _countersByBundleID;

}

@property (assign,nonatomic) unsigned long long maxRetryCount;                                            //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (assign,nonatomic) unsigned long long minSecondsBetweenRetries;                                 //@synthesize minSecondsBetweenRetries=_minSecondsBetweenRetries - In the implementation block
@property (assign,nonatomic) unsigned long long maxSecondsBetweenRetries;                                 //@synthesize maxSecondsBetweenRetries=_maxSecondsBetweenRetries - In the implementation block
@property (assign,nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure;              //@synthesize minSecondsBetweenRetriesUnderMemoryPressure=_minSecondsBetweenRetriesUnderMemoryPressure - In the implementation block
@property (assign,nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure;              //@synthesize maxSecondsBetweenRetriesUnderMemoryPressure=_maxSecondsBetweenRetriesUnderMemoryPressure - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countersByBundleID;                                    //@synthesize countersByBundleID=_countersByBundleID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)countersByBundleID;
-(unsigned long long)minSecondsBetweenRetriesUnderMemoryPressure;
-(unsigned long long)maxSecondsBetweenRetriesUnderMemoryPressure;
-(unsigned long long)minSecondsBetweenRetries;
-(unsigned long long)maxSecondsBetweenRetries;
-(unsigned long long)maxRetryCount;
-(long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(BOOL)arg3 ;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(void)setMinSecondsBetweenRetries:(unsigned long long)arg1 ;
-(void)setMaxSecondsBetweenRetries:(unsigned long long)arg1 ;
-(void)setMinSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1 ;
-(void)setMaxSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1 ;
-(void)setCountersByBundleID:(NSMutableDictionary *)arg1 ;
@end

