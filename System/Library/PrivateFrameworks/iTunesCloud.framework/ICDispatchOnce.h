/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSObject;

@interface ICDispatchOnce : NSObject {

	/*^block*/id _booleanHandler;
	atomic_flag _didFire;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _objectHandler;
	ICDispatchOnce* _strongSelf;
	double _timeout;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
-(void)failWithError:(id)arg1 ;
-(void)_invalidate;
-(void)startWithTimeout:(double)arg1 queue:(id)arg2 ;
-(id)initWithBooleanHandler:(/*^block*/id)arg1 ;
-(id)initWithObjectHandler:(/*^block*/id)arg1 ;
-(void)finishWithBooleanResult:(BOOL)arg1 error:(id)arg2 ;
-(void)finishWithObjectResult:(id)arg1 error:(id)arg2 ;
-(void)startWithTimeout:(double)arg1 ;
@end

