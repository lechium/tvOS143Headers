/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class VUITextLayout, VUILabel, VUISeparatorView;

@interface VUIDebugCollectionHeaderView : UICollectionReusableView {

	VUITextLayout* _titleLayout;
	VUILabel* _titleLabel;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                   //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(void)configureHeaderViewWithTitle:(id)arg1 ;
@end

