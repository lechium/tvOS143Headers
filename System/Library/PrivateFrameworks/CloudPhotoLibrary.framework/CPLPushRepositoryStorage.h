/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class CPLEngineStore, CPLEnginePushRepository, CPLEngineScopeStorage;

@interface CPLPushRepositoryStorage : CPLChangeStorage {

	CPLEngineStore* _store;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineScopeStorage* _scopes;

}

@property (nonatomic,readonly) CPLEngineStore * store;                                //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLEnginePushRepository * pushRepository;              //@synthesize pushRepository=_pushRepository - In the implementation block
@property (nonatomic,readonly) CPLEngineScopeStorage * scopes;                        //@synthesize scopes=_scopes - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(CPLEngineStore *)store;
-(CPLEngineScopeStorage *)scopes;
-(CPLEnginePushRepository *)pushRepository;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(BOOL)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)storageDescription;
@end

