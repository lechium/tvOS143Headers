/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, PKSpendingSummaryChartView, UIImage, PKSpendingSummary;

@interface PKSpendingSummaryView : UIView {

	UILabel* _totalAmount;
	UILabel* _spendingLabel;
	UIImageView* _upOrDownImage;
	UILabel* _percentageLabel;
	PKSpendingSummaryChartView* _chartView;
	PKSpendingSummaryChartView* _chartViewToFadeOut;
	BOOL _isTemplateLayout;
	UIImage* _downImage;
	UIImage* _upImage;
	PKSpendingSummary* _summary;
	BOOL _visible;

}

@property (nonatomic,retain) UIImage * upImage;                          //@synthesize upImage=_upImage - In the implementation block
@property (nonatomic,retain) UIImage * downImage;                        //@synthesize downImage=_downImage - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(BOOL)_needsLayoutWithSummary:(id)arg1 ;
-(UIImage *)upImage;
-(void)setUpImage:(UIImage *)arg1 ;
-(UIImage *)downImage;
-(void)setDownImage:(UIImage *)arg1 ;
@end

