/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXCMMSuggestion.h>

@protocol PXDisplayAsset, PXUIImageProvider, PXPeopleFetchResult;
@class NSString, PXAssetCollectionActionManager;

@interface _PXCMMSizingSuggestion : NSObject <PXCMMSuggestion> {

	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	long long _count;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	id<PXPeopleFetchResult> _peopleFetchResult;
	PXAssetCollectionActionManager* _assetCollectionActionManager;

}

@property (nonatomic,readonly) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) long long count;                                                            //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                             //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                  //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXPeopleFetchResult> peopleFetchResult;                                  //@synthesize peopleFetchResult=_peopleFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long aggregateMediaType; 
-(id)init;
-(long long)count;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(double)scoreForSuggestionMatchingType:(long long)arg1 ;
-(BOOL)containsUnverifiedPersons;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(long long)aggregateMediaType;
-(id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 ;
-(void)markAsActiveIfNeeded;
-(void)decline;
-(id)diagnosticsItem;
-(id<PXPeopleFetchResult>)peopleFetchResult;
-(void)registerMatchingType:(long long)arg1 ;
@end

