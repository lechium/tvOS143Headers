/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASCServices;
@class ASCPendingPromises;

@interface ASCMetrics : NSObject {

	id<ASCServices> _connection;
	ASCPendingPromises* _pendingProcesses;

}

@property (nonatomic,readonly) id<ASCServices> connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ASCPendingPromises * pendingProcesses;              //@synthesize pendingProcesses=_pendingProcesses - In the implementation block
+(id)sharedMetrics;
-(void)dealloc;
-(id<ASCServices>)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)daemonConnectionWasLost:(id)arg1 ;
-(id)processViewMetrics:(id)arg1 atInvocationPoint:(id)arg2 withActivity:(id)arg3 ;
-(id)processViewRenderWithPredicate:(id)arg1 ;
-(id)processMetricsData:(id)arg1 withActivity:(id)arg2 ;
-(void)logErrorMessage:(id)arg1 ;
-(ASCPendingPromises *)pendingProcesses;
-(id)processMetricsData:(id)arg1 pageFields:(id)arg2 activity:(id)arg3 ;
-(id)recordCampaignToken:(id)arg1 providerToken:(id)arg2 withLockup:(id)arg3 ;
@end

