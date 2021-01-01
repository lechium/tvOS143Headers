/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ARUIRingGroupAnimation.h>

@protocol ARUIRingGroupAnimationDelegate;
@class CAMediaTimingFunction, NSString;

@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation> {

	double _percent;
	/*^block*/id _applier;
	BOOL _completed;
	id<ARUIRingGroupAnimationDelegate> _delegate;
	double _duration;
	 _startValue;
	 _currentValue;
	 _endValue;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic,__weak) id<ARUIRingGroupAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly)  startValue;                                                   //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly)  currentValue;                                                 //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly)  endValue;                                                     //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction;                        //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationWithDuration:(double)arg1 startValue:(id)arg2 endValue:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id<ARUIRingGroupAnimationDelegate>)delegate;
-(void)setDelegate:(id<ARUIRingGroupAnimationDelegate>)arg1 ;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-()currentValue;
-(void)update:(double)arg1 ;
-(BOOL)isAnimating;
-()startValue;
-()endValue;
-(void)completeAnimation;
-(id)initWithDuration:(double)arg1 startValue:(id)arg2 endValue:(/*^block*/id)arg3 ;
@end

