//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, StoreDownload;
@protocol OS_dispatch_queue;

@interface IPodLibraryItem : NSObject <NSCopying>
{
    NSMutableDictionary *_additionalEntityProperties;	// 8 = 0x8
    long long _assetType;	// 16 = 0x10
    NSData *_artworkData;	// 24 = 0x18
    NSArray *_chapters;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSString *_downloadIdentifier;	// 48 = 0x30
    long long _downloadType;	// 56 = 0x38
    double _durationInSeconds;	// 64 = 0x40
    long long _libraryPersistentIdentifier;	// 72 = 0x48
    NSString *_mediaPath;	// 80 = 0x50
    StoreDownload *_metadata;	// 88 = 0x58
    long long _protectionType;	// 96 = 0x60
    long long _updateType;	// 104 = 0x68
}

+ (unsigned int)mediaTypeForStoreDownload:(id)arg1;	// IMP=0x0000000100105668
- (id)_copyChapterVideoTracksForAsset:(id)arg1;	// IMP=0x0000000100106dd0
@property long long updateType;
- (void)setValue:(id)arg1 forAdditionalEntityProperty:(id)arg2;	// IMP=0x0000000100106c64
@property long long protectionType;
@property long long libraryPersistentIdentifier;
@property(copy) StoreDownload *itemMetadata;
@property(copy) NSString *itemMediaPath;
@property(copy) NSString *itemDownloadIdentifier;
@property(copy) NSData *itemArtworkData;
@property double durationInSeconds;
@property long long downloadType;
@property(copy) NSArray *chapters;
@property long long assetType;
@property(copy) NSDictionary *additionalEntityProperties;
- (void)loadPropertiesFromMediaPath:(id)arg1 includeTracks:(_Bool)arg2;	// IMP=0x00000001001062c0
@property(readonly) _Bool hasItemArtwork;
@property(readonly, getter=isDownloading) _Bool downloading;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001054d0
- (void)dealloc;	// IMP=0x0000000100105458
- (id)init;	// IMP=0x00000001001053fc

@end

