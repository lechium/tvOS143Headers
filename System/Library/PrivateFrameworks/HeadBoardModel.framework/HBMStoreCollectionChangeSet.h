/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HBMStoreChangeSet;

@interface HBMStoreCollectionChangeSet : NSObject {

	HBMStoreChangeSet* _applicationChangeSet;
	HBMStoreChangeSet* _folderChangeSet;

}

@property (nonatomic,readonly) HBMStoreChangeSet * applicationChangeSet;              //@synthesize applicationChangeSet=_applicationChangeSet - In the implementation block
@property (nonatomic,readonly) HBMStoreChangeSet * folderChangeSet;                   //@synthesize folderChangeSet=_folderChangeSet - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)changeSet;
-(id)init;
-(BOOL)isEmpty;
-(id)initWithApplicationChangeSet:(id)arg1 folderChangeSet:(id)arg2 ;
-(HBMStoreChangeSet *)applicationChangeSet;
-(HBMStoreChangeSet *)folderChangeSet;
-(id)initWithUpdatedApplications:(id)arg1 removedApplicationIDs:(id)arg2 updatedFolders:(id)arg3 removedFolderIDs:(id)arg4 ;
-(id)collectionChangeSetByAddingCollectionChangeSet:(id)arg1 ;
@end

