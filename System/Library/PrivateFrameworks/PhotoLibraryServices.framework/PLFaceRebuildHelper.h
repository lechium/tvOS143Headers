/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject {

	NSManagedObjectContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2 ;
-(void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
@end

