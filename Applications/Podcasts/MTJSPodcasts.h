//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "MTJSPodcasts-Protocol.h"

@interface MTJSPodcasts : IKJSObject <MTJSPodcasts>
{
}

- (id)_adjustedOptionsWithOptions:(id)arg1;	// IMP=0x00000001000d85cc
- (id)identifierForDictionary:(id)arg1;	// IMP=0x00000001000d8428
- (void)markWelcomeAsShown;	// IMP=0x00000001000d8414
- (_Bool)shouldShowWelcome;	// IMP=0x00000001000d8400
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;	// IMP=0x00000001000d823c
- (_Bool)isDiagnosticSubmissionAllowed;	// IMP=0x00000001000d81e8
- (_Bool)isSubscribed:(id)arg1;	// IMP=0x00000001000d81d4
- (void)unsubscribe:(id)arg1;	// IMP=0x00000001000d81c0
- (void)subscribeWithCallback:(id)arg1:(id)arg2;	// IMP=0x00000001000d802c
- (void)subscribe:(id)arg1;	// IMP=0x00000001000d801c

@end

