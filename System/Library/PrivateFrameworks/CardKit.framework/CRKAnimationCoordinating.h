/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol CRKAnimationCoordinating <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,copy) id initialSetup; 
@property (nonatomic,copy) id finalSetup; 
@property (nonatomic,copy) id animations; 
@property (nonatomic,copy) id completion; 
@property (assign,nonatomic) double duration; 
@required
-(id)completion;
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setCompletion:(/*^block*/id)arg1;
-(id)animations;
-(void)setAnimations:(/*^block*/id)arg1;
-(BOOL)isAnimated;
-(UIView *)containerView;
-(id)initialSetup;
-(void)setInitialSetup:(/*^block*/id)arg1;
-(id)finalSetup;
-(void)setFinalSetup:(/*^block*/id)arg1;

@end

