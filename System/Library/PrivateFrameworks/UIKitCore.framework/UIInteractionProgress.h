/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	double _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	long long _atLeastTwoUpdates;
	double _percentComplete;

}

@property (nonatomic,readonly) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) double velocity; 
-(id)description;
-(id)init;
-(double)percentComplete;
-(double)velocity;
-(void)setPercentComplete:(double)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)addProgressObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 ;
-(long long)numberOfObservers;
-(unsigned long long)_indexOfObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2 ;
@end
