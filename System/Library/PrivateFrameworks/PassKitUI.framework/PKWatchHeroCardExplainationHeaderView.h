/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface PKWatchHeroCardExplainationHeaderView : UIView {

	BOOL _isCompactWatch;
	UIImageView* _watchDeviceImageView;
	UIImageView* _watchWallpaperImageView;
	BOOL _useCompactLayout;
	UIImageView* _cardImageView;

}

@property (nonatomic,retain) UIImage * cardImage; 
@property (nonatomic,readonly) UIImageView * cardImageView;              //@synthesize cardImageView=_cardImageView - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                      //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
+(CGSize)recommendedCardImageSize;
+(CGSize)watchDeviceImageSize;
+(BOOL)isCompactWatch;
+(CGSize)wallpaperImageSize:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)cardImageView;
-(UIImage *)cardImage;
-(void)setCardImage:(UIImage *)arg1 ;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(id)watchDeviceImage;
-(id)bridgeWallpaperImage;
-(id)bridgeHeroImage;
@end
