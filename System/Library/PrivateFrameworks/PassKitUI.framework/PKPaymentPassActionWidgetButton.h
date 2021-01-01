/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSArray;

@interface PKPaymentPassActionWidgetButton : UIButton {

	BOOL _usesAccessibilityLayout;
	NSArray* _actions;
	unsigned long long _passActionType;

}

@property (nonatomic,retain) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL usesAccessibilityLayout;                   //@synthesize usesAccessibilityLayout=_usesAccessibilityLayout - In the implementation block
@property (assign,nonatomic) unsigned long long passActionType;              //@synthesize passActionType=_passActionType - In the implementation block
+(double)widgetHeightWithAccessibilityLayout:(BOOL)arg1 ;
+(double)glyphImageHeight;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_applyStyles;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(void)setUsesAccessibilityLayout:(BOOL)arg1 ;
-(BOOL)usesAccessibilityLayout;
-(unsigned long long)passActionType;
-(void)setPassActionType:(unsigned long long)arg1 ;
@end

