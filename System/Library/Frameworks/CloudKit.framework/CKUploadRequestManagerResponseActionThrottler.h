/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSMutableDictionary;

@interface CKUploadRequestManagerResponseActionThrottler : NSObject {

	double _throttlePeriod;
	long long _minimumThrottleCount;
	double _maximumThrottleTime;
	double _minimumRetryTime;
	NSSet* _actionsToThrottle;
	NSMutableDictionary* _responseActionToMetadata;

}

@property (nonatomic,retain) NSMutableDictionary * responseActionToMetadata;              //@synthesize responseActionToMetadata=_responseActionToMetadata - In the implementation block
@property (assign,nonatomic) double throttlePeriod;                                       //@synthesize throttlePeriod=_throttlePeriod - In the implementation block
@property (assign,nonatomic) long long minimumThrottleCount;                              //@synthesize minimumThrottleCount=_minimumThrottleCount - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;                                  //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
@property (assign,nonatomic) double minimumRetryTime;                                     //@synthesize minimumRetryTime=_minimumRetryTime - In the implementation block
@property (nonatomic,copy) NSSet * actionsToThrottle;                                     //@synthesize actionsToThrottle=_actionsToThrottle - In the implementation block
+(double)currentTime;
+(void)sleep:(double)arg1 ;
-(id)init;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(double)maximumThrottleTime;
-(void)setActionsToThrottle:(NSSet *)arg1 ;
-(void)gateResponseAction:(long long)arg1 isRetry:(BOOL)arg2 ;
-(void)gateResponseAction:(long long)arg1 isRetry:(BOOL)arg2 currentTime:(double)arg3 ;
-(NSMutableDictionary *)responseActionToMetadata;
-(double)throttlePeriod;
-(NSSet *)actionsToThrottle;
-(double)throttleTimeForCount:(long long)arg1 isRetry:(BOOL)arg2 ;
-(long long)minimumThrottleCount;
-(double)minimumRetryTime;
-(void)setThrottlePeriod:(double)arg1 ;
-(void)setMinimumThrottleCount:(long long)arg1 ;
-(void)setMinimumRetryTime:(double)arg1 ;
-(void)setResponseActionToMetadata:(NSMutableDictionary *)arg1 ;
@end

