/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVUIKit/TVLockupViewComponent.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface TVLockupHeaderFooterView : UIView <TVLockupViewComponent> {

	BOOL _showsOnlyWhenAncestorFocused;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _titleLabelTop;
	NSLayoutConstraint* _titleLabelBottom;
	NSLayoutConstraint* _subtitleLabelTop;
	NSLayoutConstraint* _subtitleLabelBottom;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain) NSLayoutConstraint * titleLabelTop;                    //@synthesize titleLabelTop=_titleLabelTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelBottom;                 //@synthesize titleLabelBottom=_titleLabelBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelTop;                 //@synthesize subtitleLabelTop=_subtitleLabelTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelBottom;              //@synthesize subtitleLabelBottom=_subtitleLabelBottom - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL showsOnlyWhenAncestorFocused;                     //@synthesize showsOnlyWhenAncestorFocused=_showsOnlyWhenAncestorFocused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleLabelWithText:(id)arg1 ;
+(id)subtitleLabelWithText:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGSize)_intrinsicContentSize;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(BOOL)showsOnlyWhenAncestorFocused;
-(void)_addLabel:(id)arg1 position:(long long)arg2 ;
-(void)_updateVisibilityForFocus:(BOOL)arg1 ;
-(NSLayoutConstraint *)subtitleLabelTop;
-(void)setSubtitleLabelTop:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelBottom:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelTop:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelTop;
-(NSLayoutConstraint *)titleLabelBottom;
-(void)setSubtitleLabelBottom:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)subtitleLabelBottom;
-(void)setShowsOnlyWhenAncestorFocused:(BOOL)arg1 ;
@end

