/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView {

	BOOL _photosCarouselMode;
	LPLinkView* _linkView;
	NSLayoutConstraint* _linkTrailingAnchor;

}

@property (nonatomic,retain) NSLayoutConstraint * linkTrailingAnchor;              //@synthesize linkTrailingAnchor=_linkTrailingAnchor - In the implementation block
@property (nonatomic,retain) LPLinkView * linkView;                                //@synthesize linkView=_linkView - In the implementation block
@property (assign,nonatomic) BOOL photosCarouselMode;                              //@synthesize photosCarouselMode=_photosCarouselMode - In the implementation block
-(LPLinkView *)linkView;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(BOOL)photosCarouselMode;
-(void)setPhotosCarouselMode:(BOOL)arg1 ;
-(NSLayoutConstraint *)linkTrailingAnchor;
-(void)setLinkTrailingAnchor:(NSLayoutConstraint *)arg1 ;
@end

