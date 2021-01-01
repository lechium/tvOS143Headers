/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXPhotosDetailsBarsContentView.h>

@class NSString, UIColor, UIFont, UILabel, NSArray;

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX50 _needsUpdateFlags;
	BOOL __subtitleVisible;
	long long _verticalSizeClass;
	NSString* _title;
	NSString* _subtitle;
	UIColor* _titleTextColor;
	UIColor* _subtitleTextColor;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	long long _textAlignment;
	double _subviewsAlpha;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	NSArray* __constraints;
	UIEdgeInsets _margins;

}

@property (nonatomic,readonly) UILabel * _titleLabel;                                                                  //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _subtitleLabel;                                                               //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (assign,setter=_setSubtitleVisible:,getter=_isSubtitleVisible,nonatomic) BOOL _subtitleVisible;              //@synthesize _subtitleVisible=__subtitleVisible - In the implementation block
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                           //@synthesize _constraints=__constraints - In the implementation block
@property (assign,nonatomic) long long verticalSizeClass;                                                              //@synthesize verticalSizeClass=_verticalSizeClass - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                                                                 //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIColor * subtitleTextColor;                                                              //@synthesize subtitleTextColor=_subtitleTextColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                                       //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                                                                    //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                                                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,setter=setMargins:,nonatomic) UIEdgeInsets margins;                                                  //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) double subviewsAlpha;                                                                     //@synthesize subviewsAlpha=_subviewsAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSArray *)_constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_needsUpdate;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)_updateIfNeeded;
-(void)setTextAlignment:(long long)arg1 ;
-(UILabel *)_titleLabel;
-(UILabel *)_subtitleLabel;
-(void)updateConstraints;
-(long long)textAlignment;
-(UIColor *)subtitleTextColor;
-(void)_setNeedsUpdate;
-(UIFont *)subtitleFont;
-(UIFont *)titleFont;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)_invalidateConstraints;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(double)subviewsAlpha;
-(void)setSubviewsAlpha:(double)arg1 ;
-(void)_setSubtitleVisible:(BOOL)arg1 ;
-(void)setVerticalSizeClass:(long long)arg1 ;
-(void)setSubtitleTextColor:(UIColor *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)_invalidateTexts;
-(void)_updateTextsIfNeeded;
-(void)_invalidateFonts;
-(void)_updateFontsIfNeeded;
-(void)_updateConstraintsIfNeeded;
-(void)_invalidateSize;
-(void)_updateSizeIfNeeded;
-(long long)verticalSizeClass;
-(BOOL)_isSubtitleVisible;
@end

