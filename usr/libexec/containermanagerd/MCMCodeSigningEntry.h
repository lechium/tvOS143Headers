//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface MCMCodeSigningEntry : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    _Bool _placeholder;	// 9 = 0x9
    _Bool _advanceCopy;	// 10 = 0xa
    _Bool _registeredByCaller;	// 11 = 0xb
    _Bool _registeredByKernel;	// 12 = 0xc
    NSDictionary *_codeSigningInfo;	// 16 = 0x10
    NSArray *_childBundleIdentifiers;	// 24 = 0x18
    unsigned long long _dataContainerClass;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100066b24
@property(nonatomic) unsigned long long dataContainerClass; // @synthesize dataContainerClass=_dataContainerClass;
@property(nonatomic, getter=isRegisteredByKernel) _Bool registeredByKernel; // @synthesize registeredByKernel=_registeredByKernel;
@property(nonatomic, getter=isRegisteredByCaller) _Bool registeredByCaller; // @synthesize registeredByCaller=_registeredByCaller;
@property(nonatomic, getter=isAdvanceCopy) _Bool advanceCopy; // @synthesize advanceCopy=_advanceCopy;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSArray *childBundleIdentifiers; // @synthesize childBundleIdentifiers=_childBundleIdentifiers;
@property(retain, nonatomic) NSDictionary *codeSigningInfo; // @synthesize codeSigningInfo=_codeSigningInfo;
- (id)description;	// IMP=0x0000000100066a2c
- (unsigned long long)hash;	// IMP=0x00000001000668dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100066580
- (id)serialize;	// IMP=0x00000001000662b4
- (id)initWithSerializedDictionary:(id)arg1;	// IMP=0x00000001000660a0
- (id)initWithCodeSigningInfo:(id)arg1;	// IMP=0x0000000100066090
- (id)initWithCodeSigningInfo:(id)arg1 andDataContainerClass:(unsigned long long)arg2;	// IMP=0x0000000100065ffc

@end

