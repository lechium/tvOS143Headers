/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXMutableUIPlayButtonTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@protocol PXVideoOverlayButton, PXDisplayAsset, PXUIPlayButtonTileDelegate;
@class PXImageRequester, UIView, UIImageView, PXImageExtraction, UIImage, NSString;

@interface PXUIPlayButtonTile : NSObject <PXChangeObserver, PXMutableUIPlayButtonTile, PXUIViewBasicTile> {

	UIView* _view;
	UIView*<PXVideoOverlayButton> _hifiPlayButtonView;
	UIView*<PXVideoOverlayButton> _playButtonView;
	UIImageView* _playButtonBackgroundImageView;
	PXImageExtraction* _imageExtraction;
	id<PXDisplayAsset> _assetForImageExtraction;
	SCD_Struct_PX58 _needsUpdate;
	BOOL _isPerformingChanges;
	BOOL _allowsBackdropStatisticsSuppression;
	BOOL __animatingGeometry;
	id<PXUIPlayButtonTileDelegate> _delegate;
	long long _playButtonStyle;
	PXImageRequester* _imageRequester;
	long long __style;
	unsigned long long __animationCount;
	UIImage* __backgroundImage;
	CGSize _playButtonSize;
	CGPoint _imageViewportLocation;

}

@property (assign,setter=_setStyle:,nonatomic) long long _style;                                                             //@synthesize _style=__style - In the implementation block
@property (assign,setter=_setAnimatingGeometry:,getter=_isAnimatingGeometry,nonatomic) BOOL _animatingGeometry;              //@synthesize _animatingGeometry=__animatingGeometry - In the implementation block
@property (assign,setter=_setAnimationCount:,nonatomic) unsigned long long _animationCount;                                  //@synthesize _animationCount=__animationCount - In the implementation block
@property (setter=_setBackgroundImage:,nonatomic,retain) UIImage * _backgroundImage;                                         //@synthesize _backgroundImage=__backgroundImage - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIPlayButtonTileDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize playButtonSize;                                                                        //@synthesize playButtonSize=_playButtonSize - In the implementation block
@property (nonatomic,readonly) long long playButtonStyle;                                                                    //@synthesize playButtonStyle=_playButtonStyle - In the implementation block
@property (nonatomic,readonly) PXImageRequester * imageRequester;                                                            //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,readonly) CGPoint imageViewportLocation;                                                                //@synthesize imageViewportLocation=_imageViewportLocation - In the implementation block
@property (nonatomic,readonly) BOOL allowsBackdropStatisticsSuppression;                                                     //@synthesize allowsBackdropStatisticsSuppression=_allowsBackdropStatisticsSuppression - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(CGSize)preferredSize;
-(id)init;
-(id<PXUIPlayButtonTileDelegate>)delegate;
-(void)setDelegate:(id<PXUIPlayButtonTileDelegate>)arg1 ;
-(long long)_style;
-(void)prepareForReuse;
-(BOOL)_needsUpdate;
-(UIView *)view;
-(void)_updateIfNeeded;
-(UIImage *)_backgroundImage;
-(void)becomeReusable;
-(void)willAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setAnimationCount:(unsigned long long)arg1 ;
-(unsigned long long)_animationCount;
-(CGSize)playButtonSize;
-(void)setPlayButtonSize:(CGSize)arg1 ;
-(long long)playButtonStyle;
-(void)setPlayButtonStyle:(long long)arg1 ;
-(CGPoint)imageViewportLocation;
-(void)setImageViewportLocation:(CGPoint)arg1 ;
-(BOOL)allowsBackdropStatisticsSuppression;
-(void)setAllowsBackdropStatisticsSuppression:(BOOL)arg1 ;
-(void)_resetHifiPlayButton;
-(void)_setAnimatingGeometry:(BOOL)arg1 ;
-(void)_setBackgroundImage:(id)arg1 ;
-(void)_invalidatePlayButton;
-(void)_updatePlayButtonViewIfNeeded;
-(void)_invalidateBackgroundImage;
-(void)_updateBackgroundImageIfNeeded;
-(void)_handleExtractionResult:(id)arg1 isPlaceholder:(BOOL)arg2 extraction:(id)arg3 ;
-(void)didTapButton:(id)arg1 ;
-(void)_setStyle:(long long)arg1 ;
-(BOOL)_isAnimatingGeometry;
@end

