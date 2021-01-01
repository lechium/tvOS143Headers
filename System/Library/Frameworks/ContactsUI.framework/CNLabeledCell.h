/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactCell.h>

@class NSDictionary, UIImageView, UIView, UILabel, NSString;

@interface CNLabeledCell : CNContactCell {

	NSDictionary* _labelTextAttributes;
	NSDictionary* _valueTextAttributes;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) double chevronWidth; 
@property (nonatomic,readonly) UIImageView * chevron;                       //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) UIView*<ABText> labelView; 
@property (nonatomic,readonly) UIView*<ABText> valueView; 
@property (nonatomic,readonly) double topBaselineConstant; 
@property (nonatomic,readonly) double bottomBaselineConstant; 
@property (nonatomic,readonly) UIView * rightMostView; 
@property (nonatomic,readonly) UILabel * standardLabelView; 
@property (nonatomic,readonly) UILabel * standardValueView; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,copy) NSDictionary * labelTextAttributes; 
@property (nonatomic,copy) NSDictionary * valueTextAttributes; 
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
+(BOOL)wantsStandardConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)labelString;
-(NSString *)valueString;
-(UILabel *)standardLabelView;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)variableConstraints;
-(UIView*<ABText>)labelView;
-(double)minCellHeight;
-(id)constantConstraints;
-(UIView *)rightMostView;
-(void)tintColorDidChange;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(UILabel *)standardValueView;
-(UIView*<ABText>)valueView;
-(double)chevronWidth;
-(UIImageView *)chevron;
-(id)constantConstraintsForStandardLayout;
-(id)variableConstraintsForStandardLayout;
-(id)constantConstraintsForHorizontalLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)variableConstraintsForHorizontalLayout;
-(id)variableConstraintsForVerticalLayout;
-(double)topBaselineConstant;
-(double)bottomBaselineConstant;
@end

