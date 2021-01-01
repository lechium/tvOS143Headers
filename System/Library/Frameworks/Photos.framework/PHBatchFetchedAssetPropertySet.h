/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHBatchFetchedPropertySet.h>

@class NSManagedObjectID, NSKnownKeysDictionary, NSString;

@interface PHBatchFetchedAssetPropertySet : NSObject <PHBatchFetchedPropertySet> {

	NSManagedObjectID* _objectID;
	NSKnownKeysDictionary* _knownKeysDictionary;

}

@property (nonatomic,readonly) NSKnownKeysDictionary * knownKeysDictionary;              //@synthesize knownKeysDictionary=_knownKeysDictionary - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)propertiesToFetch;
+(long long)batchSize;
+(long long)cacheSize;
+(id)fetchType;
+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(id)propertiesToSortBy;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectID *)objectID;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3 ;
-(NSKnownKeysDictionary *)knownKeysDictionary;
@end

