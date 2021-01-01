/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPhotosSectionHeaderLayoutProvider.h>

@protocol PXPhotosSectionHeaderLayoutViewProvider;
@class PXPhotosViewModel, NSString;

@interface PXImportSectionHeaderLayoutProvider : NSObject <PXPhotosSectionHeaderLayoutProvider> {

	PXPhotosViewModel* _viewModel;
	id<PXPhotosSectionHeaderLayoutViewProvider> _viewProvider;

}

@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,__weak,readonly) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PXPhotosViewModel *)viewModel;
-(id<PXPhotosSectionHeaderLayoutViewProvider>)viewProvider;
-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3 spec:(id)arg4 outShouldFloat:(BOOL*)arg5 ;
-(void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(PXSimpleIndexPath)arg4 hasSectionChanges:(BOOL)arg5 ;
-(id)initWithViewModel:(id)arg1 viewProvider:(id)arg2 ;
@end
