//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexSet, NSUUID, SRTranscript;
@protocol SiriUISnippetViewControllerDelegate><SiriUIAceObjectViewControllerDelegate;

@protocol SRTranscriptDelegate <NSObject>
- (void)transcript:(SRTranscript *)arg1 performAceCommands:(NSArray *)arg2 conversationItemIdentifier:(NSUUID *)arg3;
- (void)transcript:(SRTranscript *)arg1 presentationStateDidChangeForItemsAtIndexPaths:(NSIndexSet *)arg2;
- (void)transcript:(SRTranscript *)arg1 didDelayPresentationOfItemsWithConversationItemIdentifiers:(NSArray *)arg2;
- (void)transcript:(SRTranscript *)arg1 didRemoveTranscriptItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)transcript:(SRTranscript *)arg1 didReloadTranscriptItemsAtIndexes:(NSIndexSet *)arg2;
- (void)transcript:(SRTranscript *)arg1 didReplaceTranscriptItemsAtIndexes:(NSIndexSet *)arg2 replacedTranscriptItems:(NSArray *)arg3;
- (void)transcript:(SRTranscript *)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(NSArray *)arg2;
- (void)transcript:(SRTranscript *)arg1 didInsertTranscriptItemsAtIndexes:(NSIndexSet *)arg2;
- (id <SiriUISnippetViewControllerDelegate><SiriUIAceObjectViewControllerDelegate>)viewControllerDelegateForTranscript:(SRTranscript *)arg1;
@end

