/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVHKMediaEntitiesFetchResult, NSDictionary, NSSet;

@interface TVHKMediaEntitiesFetchResponse : NSObject {

	unsigned long long _type;
	unsigned long long _mediaEntitySubtype;
	TVHKMediaEntitiesFetchResult* _recentlyAddedMediaEntitiesResult;
	NSDictionary* _groupings;
	NSSet* _deletedMediaEntityIdentifiers;
	TVHKMediaEntitiesFetchResult* _mediaEntitiesResult;

}

@property (assign,nonatomic) unsigned long long type;                                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long mediaEntitySubtype;                                        //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResult * mediaEntitiesResult;                           //@synthesize mediaEntitiesResult=_mediaEntitiesResult - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResult * recentlyAddedMediaEntitiesResult;              //@synthesize recentlyAddedMediaEntitiesResult=_recentlyAddedMediaEntitiesResult - In the implementation block
@property (nonatomic,copy) NSDictionary * groupings;                                                       //@synthesize groupings=_groupings - In the implementation block
@property (nonatomic,copy) NSSet * deletedMediaEntityIdentifiers;                                          //@synthesize deletedMediaEntityIdentifiers=_deletedMediaEntityIdentifiers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setGroupings:(NSDictionary *)arg1 ;
-(NSDictionary *)groupings;
-(unsigned long long)mediaEntitySubtype;
-(TVHKMediaEntitiesFetchResult *)mediaEntitiesResult;
-(TVHKMediaEntitiesFetchResult *)recentlyAddedMediaEntitiesResult;
-(NSSet *)deletedMediaEntityIdentifiers;
-(BOOL)_updateWithResponse:(id)arg1 changeSet:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3 ;
-(void)setMediaEntitySubtype:(unsigned long long)arg1 ;
-(void)setRecentlyAddedMediaEntitiesResult:(TVHKMediaEntitiesFetchResult *)arg1 ;
-(void)setDeletedMediaEntityIdentifiers:(NSSet *)arg1 ;
-(void)setMediaEntitiesResult:(TVHKMediaEntitiesFetchResult *)arg1 ;
@end

