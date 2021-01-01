/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIImageViewBasicTile.h>

@class UIImage, PXFocusableUIImageView, UIView, UIImageView, PXImageRequester, UIColor, NSString;

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile> {

	PXFocusableUIImageView* _imageView;
	UIView* _contentView;
	BOOL _hasPlaceholder;
	UIView* _overlayView;
	UIImageView* _videoImageView;
	BOOL _shouldAllowFocus;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	UIColor* _placeholderColor;
	UIImage* _placeholderImage;
	CGSize __contentSize;
	CGRect __desiredContentsRect;

}

@property (assign,setter=_setContentSize:,nonatomic) CGSize _contentSize;                              //@synthesize _contentSize=__contentSize - In the implementation block
@property (assign,setter=_setDesiredContentsRect:,nonatomic) CGRect _desiredContentsRect;              //@synthesize _desiredContentsRect=__desiredContentsRect - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                               //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowFocus;                                                    //@synthesize shouldAllowFocus=_shouldAllowFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXImageRequester * imageRequester;                                        //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIView * view; 
-(id)init;
-(void)prepareForReuse;
-(UIImage *)image;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)view;
-(CGSize)_contentSize;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)_updateImageView;
-(void)becomeReusable;
-(CGRect)_desiredContentsRect;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateImageRequester;
-(void)_setContentSize:(CGSize)arg1 ;
-(void)imageDidChange;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)setShouldAllowFocus:(BOOL)arg1 ;
-(void)_updateContentView;
-(void)_setDesiredContentsRect:(CGRect)arg1 ;
-(void)_updateOverlay;
-(UIColor *)placeholderColor;
-(BOOL)shouldAllowFocus;
@end

