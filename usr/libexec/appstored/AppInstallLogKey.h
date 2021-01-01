//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface AppInstallLogKey : NSObject
{
    NSString *_logKey;	// 8 = 0x8
    NSString *_batchLogKey;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSUUID *_externalID;	// 32 = 0x20
    NSNumber *_itemID;	// 40 = 0x28
    NSString *_logCode;	// 48 = 0x30
}

+ (id)requiredProperties;	// IMP=0x00000001002c0ed4
- (void).cxx_destruct;	// IMP=0x00000001002c0fe4
@property(copy, nonatomic) NSString *logCode; // @synthesize logCode=_logCode;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSUUID *externalID; // @synthesize externalID=_externalID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *batchLogKey; // @synthesize batchLogKey=_batchLogKey;
- (id)description;	// IMP=0x00000001002c0f74
@property(readonly) NSString *stringValue;
- (id)initWithMemoryEntity:(id)arg1;	// IMP=0x00000001002c0ab8
- (id)initWithEntity:(id)arg1;	// IMP=0x00000001002c0904
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001002c07d4
- (id)initWithCoordinatorTag:(id)arg1 logCode:(id)arg2;	// IMP=0x00000001002c06f8

@end
