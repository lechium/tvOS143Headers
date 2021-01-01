/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/SMUFloatingContentView.h>

@class UIView, UIImage, NSString;

@interface _SMUFloatingContentView : _UIFloatingContentView <SMUFloatingContentView>

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIView * visualEffectContainerView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,getter=isContinuousCornerEnabled,nonatomic) BOOL continuousCornerEnabled; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) double focusedSizeIncrease; 
@property (assign,nonatomic) CGPoint focusScaleAnchorPoint; 
@property (assign,nonatomic) double visualEffectContainerViewScaleFactor; 
@property (nonatomic,copy) id<SMUFocusAnimationConfiguration> focusAnimationConfiguration; 
@property (assign,nonatomic) BOOL useShadowImage; 
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled; 
@property (assign,nonatomic) CGSize shadowSize; 
@property (assign,nonatomic) double shadowRadius; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) double shadowVerticalOffset; 
@property (assign,nonatomic) double unfocusedShadowRadius; 
@property (assign,nonatomic) double unfocusedShadowOpacity; 
@property (assign,nonatomic) double unfocusedShadowVerticalOffset; 
@property (assign,nonatomic) CGSize unfocusedShadowExpansion; 
@property (assign,nonatomic) CGSize shadowExpansion; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) CGRect shadowContentsCenter; 
@property (assign,nonatomic) unsigned long long controlState; 
@property (assign,nonatomic) BOOL clipsContentToBounds; 
@property (assign,nonatomic) long long highlightStyle; 
@property (assign,getter=isContentOpaque,nonatomic) BOOL contentOpaque; 
@property (assign,nonatomic) BOOL scalesBackwards; 
@property (assign,nonatomic) BOOL roundContentWhenDeselected; 
@property (assign,nonatomic) CGSize asymmetricScaleFactor; 
@property (assign,nonatomic) CGSize asymmetricFocusedSizeIncrease; 
@property (assign,nonatomic) BOOL _disableOutsetShadowPath; 
@property (assign,nonatomic) BOOL showsHighContrastFocusIndicator; 
@property (assign,nonatomic) NSString * cornerCurve; 
@end

