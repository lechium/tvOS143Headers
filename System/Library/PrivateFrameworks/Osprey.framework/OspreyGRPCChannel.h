/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSURL, OspreyMessageWriter, NSMapTable, NSObject, AbsintheAuthenticationDurations, NSString;

@interface OspreyGRPCChannel : NSObject <NSURLSessionTaskDelegate> {

	NSURLSession* _session;
	NSURL* _baseURL;
	OspreyMessageWriter* _messageWriter;
	NSMapTable* _taskToContext;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _connectionMetricsHandler;
	AbsintheAuthenticationDurations* _absintheDurations;

}

@property (nonatomic,retain) AbsintheAuthenticationDurations * absintheDurations;              //@synthesize absintheDurations=_absintheDurations - In the implementation block
@property (nonatomic,copy) id connectionMetricsHandler;                                        //@synthesize connectionMetricsHandler=_connectionMetricsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setAbsintheTimestampForKey:(id)arg1 ;
-(void)unaryRequest:(id)arg1 requestData:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 queue:(id)arg3 ;
-(void)setConnectionMetricsHandler:(id)arg1 ;
-(id)connectionMetricsHandler;
-(void)serverStreamingRequest:(id)arg1 requestData:(id)arg2 streamingResponseHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)clientStreamingContextForRequest:(id)arg1 streamingResponseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)bidirectionalStreamingRequest:(id)arg1 streamingContext:(id)arg2 ;
-(void)preconnect;
-(AbsintheAuthenticationDurations *)absintheDurations;
-(id)bidirectionalStreamingRequest:(id)arg1 streamingResponseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startTask:(id)arg1 ;
-(id)clientStreamingRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 streamingContext:(id)arg3 ;
-(void)setAbsintheDurations:(AbsintheAuthenticationDurations *)arg1 ;
@end
