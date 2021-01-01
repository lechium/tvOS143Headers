/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionPerformer.h>

@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer {

	PXCuratedLibraryViewModel* _viewModel;
	long long _actionZoomLevel;

}

@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long actionZoomLevel;                          //@synthesize actionZoomLevel=_actionZoomLevel - In the implementation block
-(id)activityType;
-(PXCuratedLibraryViewModel *)viewModel;
-(id)initWithActionType:(id)arg1 ;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(id)activitySystemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(void)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(long long)actionZoomLevel;
@end
