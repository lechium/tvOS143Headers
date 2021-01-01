/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@protocol TUICandidateViewStyle;
@class UIImageView;

@interface TUICandidateBaseCell : UICollectionViewCell {

	id<TUICandidateViewStyle> _style;
	UIImageView* _backgroundImageView;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                //@synthesize style=_style - In the implementation block
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)updateColors;
-(id)cellBackgroundColor;
-(id)cellBackgroundImage;
-(void)updateBackground:(id)arg1 color:(id)arg2 ;
@end

