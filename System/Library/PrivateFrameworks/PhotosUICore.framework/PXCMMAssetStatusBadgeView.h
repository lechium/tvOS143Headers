/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, NSString;

@interface PXCMMAssetStatusBadgeView : UIView <PXUIViewBasicTile, PXReusableObject> {

	SCD_Struct_PX37 _needsUpdateFlags;
	long long _status;
	UIView* _glyphView;

}

@property (assign,nonatomic) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) UIView * glyphView;                    //@synthesize glyphView=_glyphView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredSize;
-(long long)status;
-(void)prepareForReuse;
-(void)setStatus:(long long)arg1 ;
-(UIView *)view;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)_invalidateImageView;
-(void)_updateImageViewIfNeeded;
-(UIView *)glyphView;
-(void)setGlyphView:(UIView *)arg1 ;
@end

