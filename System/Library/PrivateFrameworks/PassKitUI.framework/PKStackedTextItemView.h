/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableSet, UIFont, PKStackedTextItem;

@interface PKStackedTextItemView : UIView {

	UILabel* _title;
	UILabel* _primary;
	UILabel* _secondary;
	UILabel* _tertiary;
	CGSize _boundsSize;
	NSMutableSet* _snapshots;
	UIFont* _significantPrimaryFont;
	UIFont* _primaryFont;
	UIFont* _layoutPrimaryFont;
	UIFont* _idealTitleFont;
	UIFont* _idealPrimaryFont;
	UIFont* _idealSecondaryFont;
	UIFont* _idealTertiaryFont;
	BOOL _animated;
	long long _style;
	long long _textAlignment;
	PKStackedTextItem* _content;
	SCD_Struct_PK25 _contentConstraints;

}

@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long textAlignment;                         //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,copy) PKStackedTextItem * content;                       //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK25 contentConstraints;              //@synthesize contentConstraints=_contentConstraints - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(PKStackedTextItem *)content;
-(long long)style;
-(void)prepareForReuse;
-(void)setContent:(PKStackedTextItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)textAlignment;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(double)headerPadding;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateAlignmentAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK26)_titleFontMetrics;
-(id)_attributedStringWithText:(id)arg1 strikethrough:(BOOL)arg2 ;
-(double)_prepareViewForReuse:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK25)boundingMetricForWidth:(double)arg1 ;
-(void)setContentConstraints:(SCD_Struct_PK25)arg1 ;
-(SCD_Struct_PK25)contentConstraints;
@end
