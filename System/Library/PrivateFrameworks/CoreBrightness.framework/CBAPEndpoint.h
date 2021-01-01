/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;
@class AFKEndpointInterface, NSObject;

@interface CBAPEndpoint : NSObject {

	AFKEndpointInterface* _endpoint;
	NSObject*<OS_dispatch_queue> _epQueue;
	NSObject*<OS_dispatch_semaphore> _dispatchSignal;
	unsigned _service;
	id _responseObj;
	BOOL _status;
	unsigned _timeoutCount;
	NSObject*<OS_os_log> _logHandle;

}
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(unsigned)findDCPServiceWithName:(id)arg1 ;
-(void)handleResponse:(void*)arg1 bufferSize:(unsigned long long)arg2 res:(int)arg3 ;
-(BOOL)setProperty:(id)arg1 property:(id)arg2 ;
-(id)copyProperty:(id)arg1 ;
-(BOOL)sendCommand:(int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 ;
@end

