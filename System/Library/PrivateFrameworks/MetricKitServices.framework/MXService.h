/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MXService : NSObject {

	BOOL _isStarted;
	long long _sourceID;

}

@property (readonly) BOOL isStarted;                  //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) long long sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
-(id)init;
-(BOOL)isStarted;
-(BOOL)startService;
-(long long)sourceID;
-(BOOL)stopService;
-(BOOL)metricsSupported;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)initWithSourceID:(long long)arg1 ;
-(id)pruneSourceData:(id)arg1 ;
@end
