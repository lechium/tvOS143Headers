/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIFont, PKSpendingSummary, NSCalendar;

@interface PKSpendingSummaryChartView : UIView {

	NSMutableArray* _valueLabels;
	NSMutableArray* _legendLabels;
	NSMutableArray* _horizontalAxis;
	NSMutableArray* _bars;
	UIFont* _fontForLabels;
	UIFont* _fontForValues;
	PKSpendingSummary* _summary;
	double _chartMaxAmount;
	double _groupsMaxAmount;
	unsigned long long _axisCount;
	unsigned long long _presentationStyle;
	NSCalendar* _currentCalendar;
	BOOL _isCompactUI;
	BOOL _showLegend;
	BOOL _blurDisabled;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL showLegend;                                      //@synthesize showLegend=_showLegend - In the implementation block
@property (assign,getter=isBlurDisabled,nonatomic) BOOL blurDisabled;              //@synthesize blurDisabled=_blurDisabled - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                        //@synthesize visible=_visible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(BOOL)isBlurDisabled;
-(void)setShowLegend:(BOOL)arg1 ;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(BOOL)showLegend;
@end

