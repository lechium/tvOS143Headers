/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString, UIColor;

@interface PKStackedLabelCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _isRTL;
	NSString* _titleText;
	NSString* _detailText;
	UIColor* _titleTextColor;
	UIColor* _detailTextColor;

}

@property (nonatomic,copy) NSString * titleText;                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                    //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;               //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIColor * detailTextColor;              //@synthesize detailTextColor=_detailTextColor - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_applyLabelStyles;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)detailTextColor;
@end
