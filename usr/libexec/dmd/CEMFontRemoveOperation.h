//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CEMFontAssetInstallMetadata, CEMFontDeclaration;

@interface CEMFontRemoveOperation : CATOperation
{
    CEMFontDeclaration *_fontDeclaration;	// 8 = 0x8
    CEMFontAssetInstallMetadata *_installMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007e34
@property(retain, nonatomic) CEMFontAssetInstallMetadata *installMetadata; // @synthesize installMetadata=_installMetadata;
@property(retain, nonatomic) CEMFontDeclaration *fontDeclaration; // @synthesize fontDeclaration=_fontDeclaration;
- (void)main;	// IMP=0x0000000100007cac
- (id)initWithFontDeclaration:(id)arg1 installMetadata:(id)arg2;	// IMP=0x0000000100007bf8

@end

