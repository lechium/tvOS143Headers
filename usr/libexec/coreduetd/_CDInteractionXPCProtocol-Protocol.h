//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSNumber, NSPredicate, NSString, _CDInteractionAdvisorSettings, _PSMapsPredictionContext, _PSMessagesPinningFeedback, _PSPredictionContext, _PSSiriHandleRankerPredictionContext;
@protocol _CDInteractionXPCHeartBeatProtocol;

@protocol _CDInteractionXPCProtocol
- (void)contactSuggestionsWithMaxSuggestions:(NSNumber *)arg1 excludedContactIds:(NSArray *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)relativeAppUsageProbabilitiesForCandidateBundleIds:(NSArray *)arg1 daysAgo:(NSNumber *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)rankedHandlesFromCandidateHandles:(NSArray *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)rankedSiriMLCRHandlesFromContext:(_PSSiriHandleRankerPredictionContext *)arg1 handles:(NSArray *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)rankedFamilySuggestionsWithReply:(void (^)(NSArray *))arg1;
- (void)provideMessagesPinningFeedback:(_PSMessagesPinningFeedback *)arg1;
- (void)rankedMessagesPinsWithMaxSuggestions:(NSNumber *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)rankedAutocompleteSuggestionsFromContext:(_PSPredictionContext *)arg1 candidates:(NSArray *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)rankedNameSuggestionsFromContext:(_PSPredictionContext *)arg1 name:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)rankedSiriNLContactSuggestionsFromContext:(_PSPredictionContext *)arg1 maxSuggestions:(NSNumber *)arg2 interactionId:(NSString *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)rankedGlobalSuggestionsFromContext:(_PSPredictionContext *)arg1 contactsOnly:(_Bool)arg2 maxSuggestions:(NSNumber *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)messagesZKWSuggestionsFromContext:(_PSPredictionContext *)arg1 maxSuggestions:(NSNumber *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)mapsSuggestionsFromContext:(_PSMapsPredictionContext *)arg1 maxSuggestions:(NSNumber *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)shareExtensionSuggestionsFromContext:(_PSPredictionContext *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)suggestInteractionsFromContext:(_PSPredictionContext *)arg1 maxSuggestions:(NSNumber *)arg2 reply:(void (^)(NSArray *, _PSPredictionContext *))arg3;
- (void)tuneSocialAdvisorUsingSettings:(_CDInteractionAdvisorSettings *)arg1 heartBeatHandler:(id <_CDInteractionXPCHeartBeatProtocol>)arg2 reply:(void (^)(void))arg3;
- (void)adviseInteractionsForKeywordsInString:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseSocialInteractionsForDate:(NSDate *)arg1 andSeedContacts:(NSArray *)arg2 usingSettings:(_CDInteractionAdvisorSettings *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)adviseInteractionsForLocation:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseInteractionsForDate:(NSDate *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseInteractionsUsingSettings:(_CDInteractionAdvisorSettings *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)rankCandidateContacts:(NSArray *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(unsigned long long, NSError *))arg4;
- (void)countContactsUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)countInteractionsUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)recordInteractions:(NSArray *)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3 reply:(void (^)(_Bool))arg4;
@end

