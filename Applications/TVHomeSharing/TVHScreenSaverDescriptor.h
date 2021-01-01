//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVHKMediaEntityIdentifier, TVHKMediaServerIdentifier;

@interface TVHScreenSaverDescriptor : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _mediaCategoryType;	// 16 = 0x10
    NSString *_mediaServerName;	// 24 = 0x18
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 32 = 0x20
    TVHKMediaEntityIdentifier *_mediaEntityCollectionIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000277c4
@property(retain, nonatomic) TVHKMediaEntityIdentifier *mediaEntityCollectionIdentifier; // @synthesize mediaEntityCollectionIdentifier=_mediaEntityCollectionIdentifier;
@property(retain, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(copy, nonatomic) NSString *mediaServerName; // @synthesize mediaServerName=_mediaServerName;
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)serializedDictionary;	// IMP=0x000000010002757c
- (id)initWithSerializedDictionary:(id)arg1;	// IMP=0x0000000100027370

@end

