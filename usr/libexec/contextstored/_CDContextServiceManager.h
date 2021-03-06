//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDMonitorManager, CDNotifydMonitor, _CDEventStreams, _CDInteractionPolicies, _CDInteractionStore, _CDUserContextService, _DKKnowledgeStore;

@interface _CDContextServiceManager : NSObject
{
    _CDUserContextService *_userContextDaemon;	// 8 = 0x8
    _CDEventStreams *_eventStreams;	// 16 = 0x10
    CDNotifydMonitor *_notifyMonitor;	// 24 = 0x18
    _DKKnowledgeStore *_knowledgeStore;	// 32 = 0x20
    _CDInteractionPolicies *_interactionPolicies;	// 40 = 0x28
    _CDInteractionStore *_interactionStore;	// 48 = 0x30
    CDMonitorManager *_monitorManager;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001000042d8
- (void).cxx_destruct;	// IMP=0x00000001000059fc
@property(readonly, nonatomic) CDMonitorManager *monitorManager; // @synthesize monitorManager=_monitorManager;
- (void)_recordInteractions:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000058dc
- (void)_setUpServices;	// IMP=0x0000000100004a54
- (id)_extractInteractionsFromEvents:(id)arg1 onStream:(id)arg2;	// IMP=0x00000001000046d0
- (id)init;	// IMP=0x0000000100004344

@end

