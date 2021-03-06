//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSURI, NSString;

@interface IDSKeyTransparencyIndex : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    IDSURI *_URI;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010061a8dc
@property(readonly, nonatomic) IDSURI *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (id)description;	// IMP=0x000000010061a75c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010061a740
- (unsigned long long)hash;	// IMP=0x000000010061a650
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010061a594
- (_Bool)isEqualToKeyTransparencyIndex:(id)arg1;	// IMP=0x000000010061a074
- (id)initWithServiceIdentifier:(id)arg1 accountIdentifier:(id)arg2 URI:(id)arg3;	// IMP=0x0000000100619ef4

@end

