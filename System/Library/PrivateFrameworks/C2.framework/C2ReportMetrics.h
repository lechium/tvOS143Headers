/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <C2/C2RequestDelegate.h>

@class NSString, NSMutableURLRequest, C2RequestOptions, NSURLSessionTask, C2MetricOptions;

@interface C2ReportMetrics : NSObject <C2RequestDelegate> {

	BOOL _ignoreRequestThrottle;
	NSString* _requestThrottleIdentifier;
	unsigned long long _requestThrottleLimit;
	NSMutableURLRequest* _metricRequest;
	C2RequestOptions* _metricsTransportRequestOptions;
	NSURLSessionTask* _metricTask;
	C2MetricOptions* _metricOptions;
	/*^block*/id _testBehavior_tooManyTasksRunning;
	/*^block*/id _testBehavior_didCompleteWithError;

}

@property (assign,nonatomic) BOOL ignoreRequestThrottle;                                     //@synthesize ignoreRequestThrottle=_ignoreRequestThrottle - In the implementation block
@property (nonatomic,retain) NSString * requestThrottleIdentifier;                           //@synthesize requestThrottleIdentifier=_requestThrottleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long requestThrottleLimit;                        //@synthesize requestThrottleLimit=_requestThrottleLimit - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * metricRequest;                            //@synthesize metricRequest=_metricRequest - In the implementation block
@property (nonatomic,retain) C2RequestOptions * metricsTransportRequestOptions;              //@synthesize metricsTransportRequestOptions=_metricsTransportRequestOptions - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * metricTask;                                  //@synthesize metricTask=_metricTask - In the implementation block
@property (nonatomic,retain) C2MetricOptions * metricOptions;                                //@synthesize metricOptions=_metricOptions - In the implementation block
@property (nonatomic,copy) id testBehavior_tooManyTasksRunning;                              //@synthesize testBehavior_tooManyTasksRunning=_testBehavior_tooManyTasksRunning - In the implementation block
@property (nonatomic,copy) id testBehavior_didCompleteWithError;                             //@synthesize testBehavior_didCompleteWithError=_testBehavior_didCompleteWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reportCKEventMetric:(id)arg1 proxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)reportMetricWithOptions:(id)arg1 genericMetricType:(long long)arg2 eventName:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 attributes:(id)arg6 ;
+(id)gzipEncode:(id)arg1 ;
+(void)_reportWithOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4 ;
+(id)requestForMetricRequestOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4 ;
+(id)gzipDecode:(id)arg1 ;
+(void)reportNetworkEvent:(id)arg1 triggers:(int)arg2 originalSessionTask:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)send;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(C2MetricOptions *)metricOptions;
-(void)setMetricRequest:(NSMutableURLRequest *)arg1 ;
-(id)initWithMetricRequest:(id)arg1 metricRequestOptions:(id)arg2 ignoreRequestThrottle:(BOOL)arg3 requestThrottleIdentifier:(id)arg4 requestThrottleLimit:(unsigned long long)arg5 ;
-(BOOL)ignoreRequestThrottle;
-(void)setIgnoreRequestThrottle:(BOOL)arg1 ;
-(NSString *)requestThrottleIdentifier;
-(void)setRequestThrottleIdentifier:(NSString *)arg1 ;
-(unsigned long long)requestThrottleLimit;
-(void)setRequestThrottleLimit:(unsigned long long)arg1 ;
-(NSMutableURLRequest *)metricRequest;
-(C2RequestOptions *)metricsTransportRequestOptions;
-(void)setMetricsTransportRequestOptions:(C2RequestOptions *)arg1 ;
-(NSURLSessionTask *)metricTask;
-(void)setMetricTask:(NSURLSessionTask *)arg1 ;
-(id)testBehavior_tooManyTasksRunning;
-(void)setTestBehavior_tooManyTasksRunning:(id)arg1 ;
-(id)testBehavior_didCompleteWithError;
-(void)setTestBehavior_didCompleteWithError:(id)arg1 ;
@end

