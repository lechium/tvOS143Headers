//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBTopShelfExtensionController, HBTopShelfModel, NSString, NSUUID;
@protocol HBTopShelfModelControllerDelegate;

@interface HBTopShelfModelController : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    HBTopShelfModel *_model;	// 16 = 0x10
    id <HBTopShelfModelControllerDelegate> _delegate;	// 24 = 0x18
    HBTopShelfExtensionController *_extensionController;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100036124
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak HBTopShelfExtensionController *extensionController; // @synthesize extensionController=_extensionController;
@property(nonatomic) __weak id <HBTopShelfModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HBTopShelfModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)_performAction:(id)arg1 onItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000357c0
- (void)_setModel:(id)arg1 notifyDelegate:(_Bool)arg2;	// IMP=0x00000001000356fc
- (_Bool)_isActive;	// IMP=0x00000001000356c0
- (void)_updateModelWithItemUpdates:(id)arg1;	// IMP=0x0000000100035584
- (void)_setModel:(id)arg1;	// IMP=0x000000010003546c
- (id)description;	// IMP=0x000000010003534c
- (void)didSelectAction:(id)arg1 forItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000351ac
- (void)didShowItem:(id)arg1;	// IMP=0x0000000100035128
- (void)dealloc;	// IMP=0x000000010003505c
- (id)_initWithApplicationIdentifier:(id)arg1 model:(id)arg2 extensionController:(id)arg3;	// IMP=0x0000000100034f54

@end

