/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFService, NSObject;

@interface PKProximityAdvertiser : NSObject {

	SFService* _nearbyInfoSharingService;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _advertiserQueue;
	BOOL _isAdvertising;

}

@property (nonatomic,readonly) BOOL isAdvertising;              //@synthesize isAdvertising=_isAdvertising - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isAdvertising;
-(void)endAdvertising;
-(/*^block*/id)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_endAdvertising;
-(void)startAdvertisingForDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

