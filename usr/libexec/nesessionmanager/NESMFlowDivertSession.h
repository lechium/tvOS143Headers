//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSession.h"

#import "NEFlowDivertPluginDelegate-Protocol.h"

@class NEFlowDivertFileHandle;

@interface NESMFlowDivertSession : NESMVPNSession <NEFlowDivertPluginDelegate>
{
    struct __SCDynamicStore *_scstore;	// 8 = 0x8
    NEFlowDivertFileHandle *_flowDivertControlSocketHandle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000f65c
@property(retain) NEFlowDivertFileHandle *flowDivertControlSocketHandle; // @synthesize flowDivertControlSocketHandle=_flowDivertControlSocketHandle;
@property struct __SCDynamicStore *scstore; // @synthesize scstore=_scstore;
- (void)handleUserLogin;	// IMP=0x000000010000f4d8
- (void)handleInstalledAppsChanged;	// IMP=0x000000010000f390
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x000000010000f2bc
- (_Bool)resetPerAppPolicy;	// IMP=0x000000010000eb94
- (void)pluginDidClearConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000eb40
- (void)plugin:(id)arg1 didSetConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e8f4
- (id)pluginDidRequestFlowDivertControlSocket:(id)arg1;	// IMP=0x000000010000e7fc
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x000000010000e514
- (void)uninstall;	// IMP=0x000000010000e280
- (void)install;	// IMP=0x000000010000e104
- (void)requestInstall;	// IMP=0x000000010000e018
- (void)setConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d9a8
- (_Bool)dictionary:(id)arg1 isEqualToDynamicStoreStateForKey:(id)arg2;	// IMP=0x000000010000d908
- (long long)agentPluginClass;	// IMP=0x000000010000d900
- (void)dealloc;	// IMP=0x000000010000d89c
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4;	// IMP=0x000000010000d744

@end

