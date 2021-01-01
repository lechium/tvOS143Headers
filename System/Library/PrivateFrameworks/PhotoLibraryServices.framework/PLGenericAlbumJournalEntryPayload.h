/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSNumber, NSData, NSDate;

@interface PLGenericAlbumJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * cloudGUID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) BOOL isPrototype; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL customSortAscending; 
@property (nonatomic,readonly) int customSortKey; 
@property (nonatomic,readonly) NSString * customKeyAssetUUID; 
@property (nonatomic,readonly) NSString * importSessionID; 
@property (nonatomic,retain) NSData * userQueryData; 
@property (nonatomic,readonly) NSDate * creationDate; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
-(NSDate *)creationDate;
-(NSString *)title;
-(NSNumber *)kind;
-(BOOL)isPinned;
-(NSString *)cloudGUID;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)isInTrash;
-(NSString *)importSessionID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)customSortAscending;
-(int)customSortKey;
-(NSData *)userQueryData;
-(BOOL)isPrototype;
-(void)setUserQueryData:(NSData *)arg1 ;
-(NSString *)customKeyAssetUUID;
@end

