/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocationSupport/CLDispatchSilo.h>

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo {

	NSMutableArray* _timerHolders;

}

@property (nonatomic,readonly) NSMutableArray * timerHolders;              //@synthesize timerHolders=_timerHolders - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(id)newTimer;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)updateLatchedAbsoluteTimestamp;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(void)setLatchedAbsoluteTimestamp:(double)arg1 ;
-(NSMutableArray *)timerHolders;
@end

