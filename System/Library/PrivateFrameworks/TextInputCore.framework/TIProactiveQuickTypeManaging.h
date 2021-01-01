/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TIProactiveQuickTypeManaging
@required
-(void)reset;
-(BOOL)isEnabled;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(void)propogateMetrics:(id)arg1 data:(id)arg2;
-(void)generateAndRenderProactiveSuggestionsForInput:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(BOOL)arg10 withIsResponseDenyListed:(BOOL)arg11 withShouldDisableAutoCaps:(BOOL)arg12 withAvailableApps:(id)arg13 logBlock:(/*^block*/id)arg14 async:(BOOL)arg15 completion:(/*^block*/id)arg16;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(BOOL)arg10 withAvailableApps:(id)arg11 logBlock:(/*^block*/id)arg12;
-(void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
-(BOOL)isAutoPopupEnabled;
-(BOOL)isAutoCompleteEnabled;
-(BOOL)usePQT2Flow;
-(void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;
-(void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
-(void)suggestionNotAccepted:(id)arg1;

@end

