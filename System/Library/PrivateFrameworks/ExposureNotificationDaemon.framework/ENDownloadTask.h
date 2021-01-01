/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject, NSBackgroundActivityScheduler, ENDownloadEndpointState, NSDate, NSString;

@interface ENDownloadTask : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSBackgroundActivityScheduler* _scheduler;
	BOOL _finished;
	BOOL _didDefer;
	ENDownloadEndpointState* _endpointState;
	NSDate* _date;
	unsigned long long _downloadCount;

}

@property (nonatomic,readonly) ENDownloadEndpointState * endpointState;              //@synthesize endpointState=_endpointState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL shouldDefer; 
@property (nonatomic,readonly) BOOL didDefer;                                        //@synthesize didDefer=_didDefer - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadCount;                     //@synthesize downloadCount=_downloadCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortIdentifier; 
+(id)taskWithEndpointState:(id)arg1 date:(id)arg2 group:(id)arg3 scheduler:(id)arg4 ;
-(NSDate *)date;
-(BOOL)shouldDefer;
-(NSString *)shortIdentifier;
-(ENDownloadEndpointState *)endpointState;
-(unsigned long long)downloadCount;
-(BOOL)didDefer;
-(void)finishDeferred:(BOOL)arg1 error:(id)arg2 ;
-(void)incrementDownloadCount;
@end

