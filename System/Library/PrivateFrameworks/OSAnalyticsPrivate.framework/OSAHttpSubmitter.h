/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OSAnalyticsPrivate/OSASubmitter.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSObject;

@interface OSAHttpSubmitter : OSASubmitter {

	NSURL* _submissionURL;
	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSMutableData* _payload;
	NSObject*<OS_dispatch_semaphore> _submissionSem;
	unsigned _thoughput_warnings;
	double _last_thoughput_check;

}
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithEndpoint:(int)arg1 ;
-(void)abort;
-(void)startConnection:(id)arg1 ;
-(void)postContent:(id)arg1 withHeaders:(id)arg2 ;
-(id)submissionURL;
-(void)cleanupConnectionAndDisable:(id)arg1 ;
@end

