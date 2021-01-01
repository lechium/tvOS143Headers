/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXPhotosSectionBodyLayoutProvider.h>

@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate;
@class PXZoomablePhotosLayout, PXPhotosViewModel, PXZoomablePhotosViewModel, NSString;

@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider> {

	PXZoomablePhotosLayout* _zoomablePhotosLayout;
	id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;
	PXPhotosViewModel* _viewModel;
	PXZoomablePhotosViewModel* _zoomablePhotosViewModel;

}

@property (nonatomic,readonly) PXZoomablePhotosViewModel * zoomablePhotosViewModel;                                              //@synthesize zoomablePhotosViewModel=_zoomablePhotosViewModel - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate; 
-(id)init;
-(PXPhotosViewModel *)viewModel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithViewModel:(id)arg1 ;
-(PXZoomablePhotosViewModel *)zoomablePhotosViewModel;
-(id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate>)invalidationDelegate;
-(id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3 spec:(id)arg4 outWantsDecoration:(BOOL*)arg5 ;
-(void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3 ;
-(BOOL)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 ;
-(void)setInvalidationDelegate:(id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate>)arg1 ;
-(id)createInteractionForView:(id)arg1 ;
-(void)_configureZoomableLayoutDecorations:(id)arg1 fromAssetSectionLayout:(id)arg2 ;
-(void)_updateZoomableViewModelWithChanges:(unsigned long long)arg1 ;
-(void)_updatePhotosViewModelWithChanges:(unsigned long long)arg1 ;
@end

