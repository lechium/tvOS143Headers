/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class FBSDisplayConfiguration;


@protocol _UIDisplayInfoProviding <NSObject>
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@required
-(FBSDisplayConfiguration *)displayConfiguration;
-(UIEdgeInsets)peripheryInsets;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(unsigned long long)artworkSubtype;

@end
