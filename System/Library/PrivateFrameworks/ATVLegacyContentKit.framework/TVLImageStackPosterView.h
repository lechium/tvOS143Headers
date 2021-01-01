/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVBadgeOverlayView, TVImageProxy, TVImageStackView, TVLPosterElement, TVAnimatedLabel, TVImage;

@interface TVLImageStackPosterView : UIView {

	BOOL _selected;
	BOOL _collectionBasedLayout;
	BOOL _partOfShelfList;
	long long _titleStyle;
	TVBadgeOverlayView* _badgeOverlayView;
	TVImageProxy* _imageProxy;
	TVImageStackView* _imageStackView;
	TVLPosterElement* _posterElement;
	TVAnimatedLabel* _subtitleLabel;
	TVAnimatedLabel* _titleLabel;
	TVImage* _defaultImage;
	CGPoint _focusDirection;
	CGSize _posterSize;
	CGSize _displayPosterSize;

}

@property (nonatomic,retain) TVBadgeOverlayView * badgeOverlayView;              //@synthesize badgeOverlayView=_badgeOverlayView - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                          //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) TVImageStackView * imageStackView;                  //@synthesize imageStackView=_imageStackView - In the implementation block
@property (nonatomic,retain) TVLPosterElement * posterElement;                   //@synthesize posterElement=_posterElement - In the implementation block
@property (assign,nonatomic) CGSize posterSize;                                  //@synthesize posterSize=_posterSize - In the implementation block
@property (assign,nonatomic) CGSize displayPosterSize;                           //@synthesize displayPosterSize=_displayPosterSize - In the implementation block
@property (nonatomic,retain) TVAnimatedLabel * subtitleLabel;                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TVAnimatedLabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL selected;                                      //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL collectionBasedLayout;                         //@synthesize collectionBasedLayout=_collectionBasedLayout - In the implementation block
@property (assign,nonatomic) BOOL partOfShelfList;                               //@synthesize partOfShelfList=_partOfShelfList - In the implementation block
@property (nonatomic,retain) TVImage * defaultImage;                             //@synthesize defaultImage=_defaultImage - In the implementation block
@property (assign,nonatomic) long long titleStyle;                               //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection;                             //@synthesize focusDirection=_focusDirection - In the implementation block
+(long long)titleStyleForElement:(id)arg1 ;
+(double)_titleOffsetForPosterSize:(CGSize)arg1 selected:(BOOL)arg2 ;
+(double)_heightForTitleStyle:(long long)arg1 alwaysShowTitles:(BOOL)arg2 isRelated:(BOOL)arg3 ;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(TVAnimatedLabel *)titleLabel;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(TVAnimatedLabel *)subtitleLabel;
-(void)setSubtitleLabel:(TVAnimatedLabel *)arg1 ;
-(void)setTitleLabel:(TVAnimatedLabel *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(TVImage *)defaultImage;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setPosterElement:(id)arg1 withinCollection:(id)arg2 ;
-(id)initWithPosterElement:(id)arg1 ;
-(void)setImageStackView:(TVImageStackView *)arg1 ;
-(void)setTitleStyle:(long long)arg1 alwaysShowTitles:(BOOL)arg2 ;
-(void)setPartOfShelfList:(BOOL)arg1 ;
-(void)setDefaultImage:(TVImage *)arg1 ;
-(id)initWithPosterElement:(id)arg1 withinCollection:(id)arg2 ;
-(void)_setImageFromURL:(id)arg1 overlayView:(id)arg2 ;
-(void)updateBadgeValue;
-(TVBadgeOverlayView *)badgeOverlayView;
-(void)setBadgeOverlayView:(TVBadgeOverlayView *)arg1 ;
-(void)setPosterElement:(TVLPosterElement *)arg1 ;
-(TVImageStackView *)imageStackView;
-(TVLPosterElement *)posterElement;
-(CGSize)posterSize;
-(void)setPosterSize:(CGSize)arg1 ;
-(CGSize)displayPosterSize;
-(void)setDisplayPosterSize:(CGSize)arg1 ;
-(BOOL)collectionBasedLayout;
-(void)setCollectionBasedLayout:(BOOL)arg1 ;
-(BOOL)partOfShelfList;
@end

