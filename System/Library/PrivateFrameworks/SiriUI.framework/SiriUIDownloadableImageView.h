/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImageView, NSURL, NSString, NSBundle;

@interface SiriUIDownloadableImageView : UIView {

	UIImageView* _imageView;
	NSURL* _imageURL;
	BOOL _showingPlaceHolderImage;
	NSString* _placeHolderImageName;
	NSBundle* _placeHolderImageBundle;
	double _placeHolderVerticalOffset;

}
-(void)layoutSubviews;
-(void)setImageURL:(id)arg1 ;
-(void)showPlaceHolderImage;
-(void)_setImage:(id)arg1 isPlaceHolder:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3 ;
-(void)setPlaceHolderImageName:(id)arg1 ;
-(void)setPlaceHolderVerticalOffset:(double)arg1 ;
@end
