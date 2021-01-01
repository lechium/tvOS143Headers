/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@interface VideosUI.OfferCardCollectionViewCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate, VUIAuxiliaryViewSelecting> {

	 viewLayout;
	 offerView;
	 belowCardTextLabel;
	 secondChinImageView;

}
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateBackgroundAndHighlightColor;
@end

