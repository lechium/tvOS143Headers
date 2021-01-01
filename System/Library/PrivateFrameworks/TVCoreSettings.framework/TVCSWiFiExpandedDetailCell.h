/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, NSArray;

@interface TVCSWiFiExpandedDetailCell : UITableViewCell {

	NSString* _titleText;
	NSString* _detailText;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSArray* _constraints;

}

@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                   //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSString * titleText;                        //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                       //@synthesize detailText=_detailText - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)constraints;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(UILabel *)detailLabel;
@end

