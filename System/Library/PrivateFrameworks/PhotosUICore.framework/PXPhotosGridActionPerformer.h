/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionPerformer.h>

@class PXPhotosViewModel;

@interface PXPhotosGridActionPerformer : PXActionPerformer {

	PXPhotosViewModel* _viewModel;

}

@property (nonatomic,readonly) PXPhotosViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(BOOL)canPerformActionType:(id)arg1 withViewModel:(id)arg2 ;
-(PXPhotosViewModel *)viewModel;
-(id)initWithActionType:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(id)initWithViewModel:(id)arg1 actionType:(id)arg2 ;
@end

