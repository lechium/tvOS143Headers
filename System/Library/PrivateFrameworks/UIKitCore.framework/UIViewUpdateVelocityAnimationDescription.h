/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIVectorOperatable;
@interface UIViewUpdateVelocityAnimationDescription : NSObject {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetVelocity;

}

@property (nonatomic,retain) id<UIVectorOperatable> velocity;                    //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> targetVelocity;              //@synthesize targetVelocity=_targetVelocity - In the implementation block
+(id)descriptionWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
-(id<UIVectorOperatable>)velocity;
-(void)setVelocity:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)targetVelocity;
-(void)setTargetVelocity:(id<UIVectorOperatable>)arg1 ;
-(id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
@end

