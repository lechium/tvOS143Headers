//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_originalIdentifier;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURL *_containingUrl;	// 32 = 0x20
    NSString *_containingBundleIdentifier;	// 40 = 0x28
    _Bool _onSystemVolume;	// 48 = 0x30
    NSDictionary *_bundleInfoDictionary;	// 56 = 0x38
    NSDictionary *_plugInDictionary;	// 64 = 0x40
    NSDictionary *_entitlements;	// 72 = 0x48
    unsigned long long _hubProtocolVersion;	// 80 = 0x50
    NSString *_localizedName;	// 88 = 0x58
    NSString *_localizedShortName;	// 96 = 0x60
    NSString *_localizedContainingName;	// 104 = 0x68
    NSDictionary *_localizedFileProviderActionNames;	// 112 = 0x70
    NSDictionary *_annotations;	// 120 = 0x78
    long long _lastModified;	// 128 = 0x80
    NSUUID *_uuid;	// 136 = 0x88
    NSData *_cdhash;	// 144 = 0x90
    NSString *_requirement;	// 152 = 0x98
    NSURL *_dataContainerURL;	// 160 = 0xa0
    unsigned int _extensionPointPlatform;	// 168 = 0xa8
    _Bool _isRBManaged;	// 172 = 0xac
    NSUUID *_discoveryInstanceUUID;	// 176 = 0xb0
}

+ (id)readSDKDictionary:(id)arg1 forPlatform:(unsigned int)arg2;	// IMP=0x000000010001c2f4
- (void).cxx_destruct;	// IMP=0x000000010001f240
@property(readonly) unsigned int extensionPointPlatform; // @synthesize extensionPointPlatform=_extensionPointPlatform;
@property _Bool isRBManaged; // @synthesize isRBManaged=_isRBManaged;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property unsigned long long hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property(readonly) NSUUID *discoveryInstanceUUID; // @synthesize discoveryInstanceUUID=_discoveryInstanceUUID;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
@property(retain) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property _Bool onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property(copy) NSString *containingBundleIdentifier; // @synthesize containingBundleIdentifier=_containingBundleIdentifier;
@property(copy) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000010001ef3c
- (id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2;	// IMP=0x000000010001ece4
- (void)_loadLocalizedFileProviderActionNames;	// IMP=0x000000010001eb44
- (void)_loadLocalizedNames;	// IMP=0x000000010001e688
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001e680
@property(readonly) NSDictionary *localizedFileProviderActionNames; // @synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames;
@property(readonly) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(readonly) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)localizedInfoDictionaryForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001de48
- (id)augmentInterface:(id)arg1;	// IMP=0x000000010001de40
- (id)attribute:(id)arg1;	// IMP=0x000000010001ddc0
- (id)pluginKey:(id)arg1;	// IMP=0x000000010001dd40
- (id)infoKey:(id)arg1;	// IMP=0x000000010001dc84
@property(readonly) NSDate *timestamp;
@property(readonly) _Bool isData;
@property(readonly) _Bool isDedicated;
@property(readonly) _Bool isHybrid;
@property(readonly) _Bool isMultiplexed;
@property(readonly) _Bool isAppExtension;
- (id)embeddedProtocolSpec;	// IMP=0x000000010001da6c
- (id)embeddedCodePath;	// IMP=0x000000010001da64
@property(readonly) NSString *sdkSpec;
@property(readonly) NSString *principalSpec;
@property(readonly) id protocolSpec;
@property(readonly) NSString *version;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSString *containingPath;
@property(readonly) NSString *path;
@property(readonly) _Bool oldStyle;
- (void)setAnnotation:(id)arg1 value:(id)arg2;	// IMP=0x000000010001d6f8
- (void)updateFromForm:(id)arg1;	// IMP=0x000000010001d698
- (id)diagnose;	// IMP=0x000000010001d460
- (id)export:(id *)arg1;	// IMP=0x000000010001cd9c
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;	// IMP=0x000000010001cd10
- (id)sdkOnlyKeyPaths;	// IMP=0x000000010001cbb0
- (id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2;	// IMP=0x000000010001c894
- (id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;	// IMP=0x000000010001c770
- (id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;	// IMP=0x000000010001c54c
- (void)canonicalize;	// IMP=0x000000010001c174
- (_Bool)setupWithForm:(id)arg1;	// IMP=0x000000010001baa8
- (id)normalizeInfoDictionary:(id)arg1;	// IMP=0x000000010001ba90
- (_Bool)setDictionaries:(id)arg1;	// IMP=0x000000010001b7e8
- (_Bool)setupWithName:(id)arg1 extensionPointPlatform:(unsigned int)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7;	// IMP=0x000000010001b4f8
- (unsigned long long)hash;	// IMP=0x000000010001b484
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001b3a4
- (id)initWithForm:(id)arg1;	// IMP=0x000000010001b334
- (id)initWithName:(id)arg1 extensionPointPlatform:(unsigned int)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7;	// IMP=0x000000010001b210
- (id)init;	// IMP=0x000000010001b1dc

@end
