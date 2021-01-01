/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, NSArray;

@interface CLSRegionItemCacheCreator : NSObject {

	BOOL _simulatesTimeout;
	NSObject*<OS_os_log> _loggingConnection;
	double _timeoutInterval;
	unsigned long long _numberOfRetries;
	NSArray* _queryPerformers;

}

@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetries;                            //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> loggingConnection;                        //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,readonly) NSArray * queryPerformers;                                   //@synthesize queryPerformers=_queryPerformers - In the implementation block
+(id)businessItemsForRegion:(id)arg1 ;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(unsigned long long)numberOfRetries;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(BOOL)isSimulatingTimeout;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithQueryPerformers:(id)arg1 ;
-(BOOL)createCacheForRegions:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(NSArray *)queryPerformers;
@end

