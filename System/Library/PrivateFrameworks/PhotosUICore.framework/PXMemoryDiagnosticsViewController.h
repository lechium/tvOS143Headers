/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedAssetCollectionDiagnosticsViewController.h>

@class PHMemory;

@interface PXMemoryDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {

	PHMemory* _sourceMemory;

}
-(id)initWithMemory:(id)arg1 ;
-(id)curationDebugInformationWithOptions:(id)arg1 ;
-(id)assetsForCurationType:(long long)arg1 ;
-(BOOL)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3 ;
-(id)radarAttachmentURLs;
-(id)radarComponentInfoForRoute:(id)arg1 ;
-(id)radarTitleTemplate;
-(id)radarDescriptionTemplate;
-(id)radarRoutes;
-(id)sourceDictionary;
@end
