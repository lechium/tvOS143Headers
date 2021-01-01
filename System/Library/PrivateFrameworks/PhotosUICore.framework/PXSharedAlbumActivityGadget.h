/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PXFeedAssetsSectionInfo, _PXSharedAlbumActivityGadgetContentView, PXSharedAlbumHeaderView, PXAssetCollageView, UILabel, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXAssetReference, NSArray, NSAttributedString, NSSet, NSString;

@interface PXSharedAlbumActivityGadget : NSObject <PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget> {

	BOOL _wasAskedToLoadContentData;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXFeedAssetsSectionInfo* _assetsSectionInfo;
	_PXSharedAlbumActivityGadgetContentView* _contentView;
	PXSharedAlbumHeaderView* _headerView;
	PXAssetCollageView* _collageView;
	UILabel* _captionLabel;
	PXPhotoKitAssetsDataSourceManager* _assetsDataSourceManager;
	PXPhotoKitUIMediaProvider* _mediaProvider;
	PXAssetReference* _currentAssetReference;
	NSArray* _assets;
	NSAttributedString* _caption;
	NSSet* _oneUpHiddenAssetReferences;
	CGRect _visibleContentRect;

}

@property (nonatomic,readonly) BOOL isContentViewLoaded; 
@property (nonatomic,retain) _PXSharedAlbumActivityGadgetContentView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) PXSharedAlbumHeaderView * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PXAssetCollageView * collageView;                                         //@synthesize collageView=_collageView - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                                                   //@synthesize captionLabel=_captionLabel - In the implementation block
@property (assign,nonatomic) BOOL wasAskedToLoadContentData;                                           //@synthesize wasAskedToLoadContentData=_wasAskedToLoadContentData - In the implementation block
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * assetsDataSourceManager;              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitUIMediaProvider * mediaProvider;                                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PXAssetReference * currentAssetReference;                                 //@synthesize currentAssetReference=_currentAssetReference - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSAttributedString * caption;                                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSSet * oneUpHiddenAssetReferences;                                         //@synthesize oneUpHiddenAssetReferences=_oneUpHiddenAssetReferences - In the implementation block
@property (nonatomic,retain) PXFeedAssetsSectionInfo * assetsSectionInfo;                              //@synthesize assetsSectionInfo=_assetsSectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                                //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
+(void)preloadResources;
-(id)init;
-(void)dealloc;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSAttributedString *)caption;
-(void)setCaption:(NSAttributedString *)arg1 ;
-(_PXSharedAlbumActivityGadgetContentView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(_PXSharedAlbumActivityGadgetContentView *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(PXSharedAlbumHeaderView *)headerView;
-(void)setHeaderView:(PXSharedAlbumHeaderView *)arg1 ;
-(PXPhotoKitUIMediaProvider *)mediaProvider;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(unsigned long long)gadgetType;
-(void)setMediaProvider:(PXPhotoKitUIMediaProvider *)arg1 ;
-(PXPhotoKitAssetsDataSourceManager *)assetsDataSourceManager;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)userDidSelectGadget;
-(id)uniqueGadgetIdentifier;
-(CGRect)visibleContentRect;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)setAssetsDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(UILabel *)captionLabel;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(void)setAssetsSectionInfo:(PXFeedAssetsSectionInfo *)arg1 ;
-(PXAssetCollageView *)collageView;
-(void)_updateCollageViewVideoEnabled;
-(void)setOneUpHiddenAssetReferences:(NSSet *)arg1 ;
-(void)_updateCollageViewHiddenAssets;
-(void)_loadContentFromSectionInfo;
-(BOOL)isContentViewLoaded;
-(void)_layoutContentView;
-(void)_updateCollageView;
-(unsigned long long)_numberOfLinesForCaption;
-(BOOL)_isAccessibilityContentSize;
-(void)_loadAssets;
-(void)_loadCaption;
-(void)_handleActionTap:(id)arg1 ;
-(void)_handleCollageViewTap:(id)arg1 ;
-(void)_navigateToAssetView:(id)arg1 ;
-(PXFeedAssetsSectionInfo *)assetsSectionInfo;
-(void)setCollageView:(PXAssetCollageView *)arg1 ;
-(BOOL)wasAskedToLoadContentData;
-(void)setWasAskedToLoadContentData:(BOOL)arg1 ;
-(PXAssetReference *)currentAssetReference;
-(void)setCurrentAssetReference:(PXAssetReference *)arg1 ;
-(NSSet *)oneUpHiddenAssetReferences;
@end
