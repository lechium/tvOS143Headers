/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, PXAssetCollectionActionManager;


@protocol PXCMMSuggestion <NSObject,PXMediaTypeAggregating>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset; 
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider; 
@property (nonatomic,readonly) id<PXPeopleFetchResult> peopleFetchResult; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@required
-(long long)count;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(BOOL)containsUnverifiedPersons;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
-(void)markAsActiveIfNeeded;
-(void)decline;
-(id)diagnosticsItem;
-(id<PXPeopleFetchResult>)peopleFetchResult;

@end

