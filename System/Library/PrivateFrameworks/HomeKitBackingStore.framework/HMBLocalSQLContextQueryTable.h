/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSSet, NSMutableDictionary, NSDictionary;

@interface HMBLocalSQLContextQueryTable : HMFObject {

	NSSet* _columnNames;
	NSMutableDictionary* _mutableIndexes;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableIndexes;              //@synthesize mutableIndexes=_mutableIndexes - In the implementation block
@property (nonatomic,readonly) NSSet * columnNames;                               //@synthesize columnNames=_columnNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * indexes; 
-(id)description;
-(NSDictionary *)indexes;
-(NSSet *)columnNames;
-(NSMutableDictionary *)mutableIndexes;
-(id)initWithColumnNames:(id)arg1 ;
@end

