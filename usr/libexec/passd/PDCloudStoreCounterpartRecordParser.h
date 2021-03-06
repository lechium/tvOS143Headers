//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol PDCloudStoreCounterpartRecordParserDataSource;

@interface PDCloudStoreCounterpartRecordParser : NSObject
{
    NSMutableDictionary *_itemTypeToParserIdentifiers;	// 8 = 0x8
    NSSet *_recordNamePrefixes;	// 16 = 0x10
    id <PDCloudStoreCounterpartRecordParserDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010023dd98
- (id)description;	// IMP=0x000000010023dd88
- (void)enumerateKeysAndObjectsForItemType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010023dcd8
- (id)allRecordsWithIdentifier:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x000000010023dbd4
- (id)allRecordsForItemType:(unsigned long long)arg1;	// IMP=0x000000010023db48
- (void)removeIdentifiers:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x000000010023da98
- (void)addRecords:(id)arg1;	// IMP=0x000000010023d858
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000010023d7c4

@end

