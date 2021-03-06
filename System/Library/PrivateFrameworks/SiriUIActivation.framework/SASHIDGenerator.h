/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <SiriUIActivation/SiriUIActivation-Structs.h>
@class NSObject;

@interface SASHIDGenerator : NSObject {

	IOHIDEventSystemClientRef _ioSystemClient;
	NSObject*<OS_dispatch_queue> _generatorQueue;

}
-(id)init;
-(void)dealloc;
-(void)_sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_sendHIDHoldHomeButton;
-(void)_sendHIDHoldLockButton;
-(void)sendHoldHomeButtonHIDEvents;
-(void)sendHoldLockButtonHIDEvents;
@end

