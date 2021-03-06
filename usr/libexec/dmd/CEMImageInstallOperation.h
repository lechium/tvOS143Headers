//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

#import "DMDRemoteAssetResolutionContext-Protocol.h"

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, CEMImageDeclaration, NSString;
@protocol DMDRemoteAssetResolver;

@interface CEMImageInstallOperation : CATOperation <DMDRemoteAssetResolutionContext>
{
    CEMImageDeclaration *_imageDeclaration;	// 8 = 0x8
    id <DMDRemoteAssetResolver> _resolver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100008720
@property(retain, nonatomic) id <DMDRemoteAssetResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) CEMImageDeclaration *imageDeclaration; // @synthesize imageDeclaration=_imageDeclaration;
- (void)assetResolutionFailedWithError:(id)arg1;	// IMP=0x0000000100008684
- (void)assetResolutionDidSucceedWithAssetURL:(id)arg1;	// IMP=0x00000001000083b4
@property(readonly, copy, nonatomic) CEMAssetBaseReference *assetReference;
@property(readonly, copy, nonatomic) CEMAssetBaseDescriptor *assetDescriptor;
@property(readonly, copy, nonatomic) NSString *assetIdentifier;
- (void)main;	// IMP=0x00000001000081d8
- (_Bool)isAsynchronous;	// IMP=0x00000001000081d0
- (id)initWithImageDeclaration:(id)arg1 resolver:(id)arg2;	// IMP=0x000000010000811c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

