/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDMessageHandlerQueuedMessageDelegate;
@class HMFMessage, HMFTimer, NSUUID, NSString;

@interface HMDMessageHandlerQueuedMessage : HMFObject <HMFTimerDelegate> {

	id<HMDMessageHandlerQueuedMessageDelegate> _delegate;
	HMFMessage* _message;
	HMFTimer* _timer;

}

@property (readonly) HMFTimer * timer;                                               //@synthesize timer=_timer - In the implementation block
@property (__weak) id<HMDMessageHandlerQueuedMessageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * name; 
@property (readonly) HMFMessage * message;                                           //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)name;
-(id<HMDMessageHandlerQueuedMessageDelegate>)delegate;
-(void)setDelegate:(id<HMDMessageHandlerQueuedMessageDelegate>)arg1 ;
-(NSUUID *)identifier;
-(HMFMessage *)message;
-(id)initWithMessage:(id)arg1 ;
-(HMFTimer *)timer;
-(id)privateDescription;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithMessage:(id)arg1 timeInterval:(double)arg2 ;
@end

