/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentPreferenceCell.h>

@class PKPaymentPreferenceDetailedCellTextField;

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {

	PKPaymentPreferenceDetailedCellTextField* _textField;
	BOOL _isLeftToRight;
	double _minimumCellHeight;
	BOOL _inlineEditingEnabled;
	double _leadingOffset;

}

@property (assign,nonatomic) BOOL inlineEditingEnabled;                                           //@synthesize inlineEditingEnabled=_inlineEditingEnabled - In the implementation block
@property (nonatomic,readonly) PKPaymentPreferenceDetailedCellTextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double leadingOffset;                                                //@synthesize leadingOffset=_leadingOffset - In the implementation block
@property (assign,nonatomic) double minimumCellHeight;                                            //@synthesize minimumCellHeight=_minimumCellHeight - In the implementation block
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKPaymentPreferenceDetailedCellTextField *)textField;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(double)minimumCellHeight;
-(void)showTextField:(BOOL)arg1 ;
-(BOOL)inlineEditingEnabled;
-(void)setInlineEditingEnabled:(BOOL)arg1 ;
-(double)leadingOffset;
-(void)setLeadingOffset:(double)arg1 ;
-(void)setMinimumCellHeight:(double)arg1 ;
@end
