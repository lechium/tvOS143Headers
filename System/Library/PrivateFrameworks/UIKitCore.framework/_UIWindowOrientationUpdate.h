/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, BSAnimationSettings;

@interface _UIWindowOrientationUpdate : NSObject {

	NSMutableSet* _trackedFences;
	long long _toOrientation;
	BSAnimationSettings* _transitionAnimationSettings;
	/*^block*/id _updateBlock;

}

@property (nonatomic,readonly) long long toOrientation;                                    //@synthesize toOrientation=_toOrientation - In the implementation block
@property (nonatomic,copy) BSAnimationSettings * transitionAnimationSettings;              //@synthesize transitionAnimationSettings=_transitionAnimationSettings - In the implementation block
@property (nonatomic,copy,readonly) id updateBlock;                                        //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)invalidateFences;
-(id)updateBlock;
-(long long)toOrientation;
-(void)trackFence:(id)arg1 ;
-(id)initWithOrientation:(long long)arg1 transitionAnimationSettings:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)transferFencesToUpdate:(id)arg1 ;
-(void)synchronizeDrawingWithFencesOnScene:(id)arg1 ;
-(BSAnimationSettings *)transitionAnimationSettings;
-(void)setTransitionAnimationSettings:(BSAnimationSettings *)arg1 ;
@end
