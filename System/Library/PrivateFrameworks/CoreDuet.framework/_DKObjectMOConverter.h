/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject {

	BOOL _readMetadata;
	BOOL _deduplicateValues;
	NSArray* _excludedMetadataKeys;
	NSCache* _cache;

}

@property (assign) BOOL readMetadata;                           //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) BOOL deduplicateValues;                      //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
@property (retain) NSArray * excludedMetadataKeys;              //@synthesize excludedMetadataKeys=_excludedMetadataKeys - In the implementation block
-(id)init;
-(void)setReadMetadata:(BOOL)arg1 ;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)objectsFromManagedObjects:(id)arg1 ;
-(BOOL)readMetadata;
-(NSArray *)excludedMetadataKeys;
-(id)dataIntervalsFromManagedObjects:(id)arg1 ;
-(BOOL)deduplicateValues;
-(void)setExcludedMetadataKeys:(NSArray *)arg1 ;
@end

