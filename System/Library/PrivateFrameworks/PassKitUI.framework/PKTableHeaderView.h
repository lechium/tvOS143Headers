/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIButton, UIActivityIndicatorView;

@interface PKTableHeaderView : UIView {

	CGSize _originalImageViewSize;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _shouldResizeImageToFit;
	BOOL _accessoryViewsDisabled;
	unsigned long long _style;
	double _topPadding;
	double _bottomPadding;
	double _minimumHeight;

}

@property (assign,nonatomic) unsigned long long style;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeImageToFit;                                //@synthesize shouldResizeImageToFit=_shouldResizeImageToFit - In the implementation block
@property (assign,nonatomic) double topPadding;                                          //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                       //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double minimumHeight;                                       //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) BOOL accessoryViewsDisabled;                                //@synthesize accessoryViewsDisabled=_accessoryViewsDisabled - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (nonatomic,readonly) UIButton * actionButton; 
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)dealloc;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(UIImageView *)imageView;
-(UIButton *)actionButton;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)tintColorDidChange;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_updateFonts;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateImageView;
-(id)_titleFont;
-(UIActivityIndicatorView *)activityIndicator;
-(id)_subtitleFont;
-(BOOL)_hasAccessibilityLargeText;
-(double)topPadding;
-(void)setTopPadding:(double)arg1 ;
-(void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(BOOL)arg2 needsCorners:(BOOL)arg3 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)setPassSnapshot:(id)arg1 withSize:(CGSize)arg2 animated:(BOOL)arg3 needsCorners:(BOOL)arg4 ;
-(void)setImageViewImage:(id)arg1 withSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)setShouldResizeImageToFit:(BOOL)arg1 ;
-(double)bottomPadding;
-(void)_updateCheckmarkColor;
-(void)_updateAccessoryViews;
-(CGSize)_sizeThatFitsExcludingImage:(CGSize)arg1 ;
-(void)setAccessoryViewsDisabled:(BOOL)arg1 ;
-(BOOL)shouldResizeImageToFit;
-(BOOL)accessoryViewsDisabled;
@end
