//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHCatalogueSection-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TVHCatalogueSection : NSObject <TVHCatalogueSection>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSArray *_fetchResponseHandlingItems;	// 24 = 0x18
    NSDictionary *_itemByIdentifier;	// 32 = 0x20
    NSDictionary *_itemsByFetchRequestIdentifier;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00000001000231d4
- (void).cxx_destruct;	// IMP=0x0000000100023b8c
@property(retain, nonatomic) NSDictionary *itemsByFetchRequestIdentifier; // @synthesize itemsByFetchRequestIdentifier=_itemsByFetchRequestIdentifier;
@property(retain, nonatomic) NSDictionary *itemByIdentifier; // @synthesize itemByIdentifier=_itemByIdentifier;
@property(readonly, nonatomic) NSArray *fetchResponseHandlingItems; // @synthesize fetchResponseHandlingItems=_fetchResponseHandlingItems;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_itemsForFetchRequestIdentifier:(id)arg1;	// IMP=0x0000000100023abc
- (id)_itemForIdentifier:(id)arg1;	// IMP=0x0000000100023a3c
- (void)updateWithMediaEntitiesFetchControllerResultSet:(id)arg1 itemIdentifiersOfAmendedItems:(id *)arg2;	// IMP=0x000000010002366c
- (id)itemForIdentifier:(id)arg1;	// IMP=0x0000000100023660
@property(readonly, copy, nonatomic) NSArray *displayableItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;	// IMP=0x0000000100023298
- (id)init;	// IMP=0x0000000100023210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

