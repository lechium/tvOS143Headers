/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUICardView, VUICardViewLayoutFactory, IKViewElement, IKImageElement;

@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell {

	VUICardView* _cardView;
	VUICardViewLayoutFactory* _layoutFactory;
	IKViewElement* _viewElement;
	IKImageElement* _mainImageViewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKImageElement * mainImageViewElement;                 //@synthesize mainImageViewElement=_mainImageViewElement - In the implementation block
@property (nonatomic,retain) VUICardView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
+(long long)_cardLayoutTypeForElement:(id)arg1 ;
+(id)_imageLayoutForImageElement:(id)arg1 cardLayout:(id)arg2 cardWidth:(double)arg3 ;
+(id)cardCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUICardView *)cardView;
-(void)setCardView:(VUICardView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)setLayoutFactory:(VUICardViewLayoutFactory *)arg1 ;
-(IKImageElement *)mainImageViewElement;
-(void)setMainImageViewElement:(IKImageElement *)arg1 ;
-(void)setCardView:(id)arg1 force:(BOOL)arg2 ;
@end

