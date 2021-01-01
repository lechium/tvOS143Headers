/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXOverlayBadgeTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class PXAssetBadgeManager, PXImageRequester, PXUIAssetBadgeView, NSString, UIView;

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile> {

	SCD_Struct_PX37 _needsUpdateFlags;
	PXAssetBadgeManager* _badgeManager;
	PXImageRequester* _imageRequester;
	unsigned long long __badgeOptions;
	PXUIAssetBadgeView* __badgeView;

}

@property (assign,setter=_setBadgeOptions:,nonatomic) unsigned long long _badgeOptions;              //@synthesize _badgeOptions=__badgeOptions - In the implementation block
@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                      //@synthesize _badgeView=__badgeView - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                      //@synthesize imageRequester=_imageRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXAssetBadgeManager * badgeManager;                                     //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,readonly) UIView * view; 
+(void)preloadResources;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)view;
-(void)layoutSubviews;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXAssetBadgeManager *)badgeManager;
-(void)setBadgeManager:(PXAssetBadgeManager *)arg1 ;
-(PXUIAssetBadgeView *)_badgeView;
-(void)_updateBadgeViewIfNeeded;
-(void)_setBadgeOptions:(unsigned long long)arg1 ;
-(void)_invalidateBadgeView;
-(unsigned long long)_badgeOptions;
@end

