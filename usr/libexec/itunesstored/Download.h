//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

#import "NSCopying-Protocol.h"

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity <NSCopying>
{
    NSArray *_assets;	// 8 = 0x8
    SSDownloadPolicy *_downloadPolicy;	// 16 = 0x10
}

+ (Class)databaseEntityClass;	// IMP=0x000000010014a878
@property(copy, nonatomic) SSDownloadPolicy *downloadPolicy; // @synthesize downloadPolicy=_downloadPolicy;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010014b534
- (_Bool)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id *)arg2;	// IMP=0x000000010014b140
- (_Bool)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x000000010014ad5c
- (_Bool)_setAssetsWithExternalThinnedAssets:(id)arg1 error:(id *)arg2;	// IMP=0x000000010014aab0
- (_Bool)_setAssetsWithExternalAssets:(id)arg1 error:(id *)arg2;	// IMP=0x000000010014aa00
- (id)_copyValidAssetsWithExternalAssets:(id)arg1 validateVariants:(_Bool)arg2;	// IMP=0x000000010014a884
- (void)unionNetworkConstraints:(id)arg1;	// IMP=0x000000010014a758
- (void)removeAssetsWithAssetType:(id)arg1;	// IMP=0x000000010014a654
- (id)copyInMemoryStoreDownloadMetadata;	// IMP=0x000000010014a608
- (id)copyStoreDownloadMetadata;	// IMP=0x000000010014a564
- (id)assetForAssetIdentifier:(long long)arg1;	// IMP=0x000000010014a430
- (id)anyAssetForAssetType:(id)arg1;	// IMP=0x000000010014a2d4
- (void)dealloc;	// IMP=0x000000010014a274
- (id)initWithStoreDownload:(id)arg1;	// IMP=0x0000000100149c38
- (id)initWithExternalManifestDictionary:(id)arg1;	// IMP=0x00000001001499c0
- (id)initWithClientXPCDownload:(id)arg1;	// IMP=0x00000001001493c0
- (id)_newAssetArrayWithDownloadAssets:(id)arg1;	// IMP=0x0000000100071280
- (id)copyJobActivity;	// IMP=0x000000010006ff4c
- (id)initWithMicroPaymentDownload:(id)arg1 clientID:(id)arg2;	// IMP=0x000000010019e8a4

@end

