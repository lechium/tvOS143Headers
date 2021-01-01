/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout, PXCuratedLibraryActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {

	PXGLayout* _layout;
	PXCuratedLibraryActionManager* _actionManager;

}

@property (nonatomic,readonly) PXCuratedLibraryActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * layout;                                    //@synthesize layout=_layout - In the implementation block
-(PXGLayout *)layout;
-(void)setLayout:(PXGLayout *)arg1 ;
-(void)performUserInteractionTask;
-(PXCuratedLibraryActionManager *)actionManager;
-(BOOL)performerResetsAfterCompletion;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3 ;
-(id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 actionManager:(id)arg3 ;
-(id)buttonSpriteReference;
-(void)_presentToUserOptionsFromActionPerformers:(id)arg1 forAssetCollectionReference:(id)arg2 ;
@end

