//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface PurchaseManifestItem : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

@property(readonly, nonatomic) NSDictionary *manifestItemDictionary; // @synthesize manifestItemDictionary=_dictionary;
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100012b78
@property(copy, nonatomic) NSString *relativeMetadataPath;
@property(copy, nonatomic) NSString *relativeMediaAssetPath;
@property(copy, nonatomic) NSString *relativeFeedAssetPath;
@property(copy, nonatomic) NSString *relativeArtworkPath;
@property(copy, nonatomic) NSNumber *libraryPersistentIdentifier;
- (void)dealloc;	// IMP=0x0000000100012a54
- (id)initWithManifestItemDictionary:(id)arg1;	// IMP=0x00000001000129f4
- (id)init;	// IMP=0x000000010001299c

@end

