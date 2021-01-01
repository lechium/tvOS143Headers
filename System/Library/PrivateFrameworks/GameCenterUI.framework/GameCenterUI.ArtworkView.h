/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface GameCenterUI.ArtworkView : UIView {

	 artworkContentView;
	 shadowView;
	 roundedCorners;

}

@property (readonly,nonatomic) CGRect jet_focusedFrame; 
@property (assign,nonatomic) long long contentMode; 
@property (retain,nonatomic) UIColor * backgroundColor; 
-(id)initWithCoder:(id)arg1 ;
-(long long)contentMode;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(CGRect)jet_focusedFrame;
@end

