/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocationSupport/LocationSupport-Structs.h>
#import <LocationSupport/CLSilo.h>

@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {

	double _currentLatchedAbsoluteTimestamp;
	CLRunLoopSiloThread* _siloThread;
	BOOL _useCLPermissiveTimer;

}
-(id)debugDescription;
-(void)resume;
-(void)suspend;
-(BOOL)isSuspended;
-(id)initWithIdentifier:(id)arg1 ;
-(id)newTimer;
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 ;
-(id)runloop;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 bePermissive:(BOOL)arg2 ;
-(void)assertOutside;
-(double)currentLatchedAbsoluteTimestamp;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(BOOL)inPermissiveMode;
-(void)updateLatchedAbsoluteTimestamp;
-(id)initWithUnderlyingRunLoop:(CFRunLoopRef)arg1 ;
-(id)getTimeCoercibleVariantInstance;
@end

