/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface ATAssetLinkPowerLogger : NSObject {

	NSMutableDictionary* _aggregation;
	NSObject*<OS_dispatch_queue> _loggerQueue;
	NSObject*<OS_dispatch_source> _flushTimer;

}

@property (retain) NSMutableDictionary * aggregation;                     //@synthesize aggregation=_aggregation - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> flushTimer;              //@synthesize flushTimer=_flushTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_source>)flushTimer;
-(void)setFlushTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)logAssetLinkOfType:(long long)arg1 didBeginDownloadingAsset:(id)arg2 ;
-(void)logAssetLinkOfType:(long long)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 ;
-(NSMutableDictionary *)aggregation;
-(void)setAggregation:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)loggerQueue;
-(void)setLoggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

